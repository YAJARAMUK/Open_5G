---
title: Metrics with Prometheus
---

#### 0. Introduction

This tutorial explains how to export open5gs metrics to Prometheus, which can in
turn be used to visualize or export them to other systems such as Grafana or
StatsD.

When this method is used, any open5gs program exporting metrics becomes a
Prometheus server, which is basically an HTTP server serving Prometheus data to
the Prometheus scrapper.

Note: AMF, MME and SMF support exporting metrics so far, though other may
hopefully follow soon.

#### 1. Enable Prometheus support during build

Open5GS programs use a generic internal API available in libogsmetrics. This
library implements the API based on configuration passed during open5gs build
time. By default, the library will be built under lib/metrics/prometheus/, which uses:

* prometheus-client-c project (libprom): To generate the Prometheus expected
  output format of the metrics
* libmicrohttpd: To server the content generated by libprom as an HTTP server

The `prometheus-client-c` project is not currently well maintained, and uses a
weird mixture of build systems, which makes it difficult to make it available in
most Linux distributions. As a result, a fork of the project is available under
Open5GS GitHub namespace, with an extra patch applied making it possible to
include it as a subproject, which will be fetched and built automatically when
building the prometheus libmetrics implementation.

#### 2. Configuring for runtime

A Prometheus HTTP server can be created from the following config file options.
A HTTP server is not created if 'metrics' is not defined.

```
#
# metrics:
#
#  <Metrics Server>
#
#  o Metrics Server(http://<any address>:9090)
#    metrics:
#      server:
#        - address: 0.0.0.0
#          port: 9090
#
#  o Metrics Server(127.0.0.5:9090, [::1]:9090)
#    metrics:
#      server:
#        - address: 127.0.0.5
#        - addr: ::1
#
amf:
  metrics:
    server:
      - address: 127.0.0.5
        port: 9090
```

Note: You may want to change the default IP address or port if you are running
the Prometheus scrapper in the same host, since it will also spawn its own
Prometheus server also in port 9090, which will collide.

#### 3. Manual visualization

Simply open the web browser at the following URL (changing IP address and port
as configured in previous section):
```
http://127.0.0.1:9090/metrics
```

Note: URL `metrics/` (with a slash at the end) will not work.

You should see some output similar to this one below:
```
# HELP ues_active Active User Equipments
# TYPE ues_active gauge
ues_active 2

# HELP process_max_fds Maximum number of open file descriptors.
# TYPE process_max_fds gauge
process_max_fds 1024

# HELP process_virtual_memory_max_bytes Maximum amount of virtual memory available in bytes.
# TYPE process_virtual_memory_max_bytes gauge
process_virtual_memory_max_bytes -1

# HELP process_cpu_seconds_total Total user and system CPU time spent in seconds.
# TYPE process_cpu_seconds_total gauge
process_cpu_seconds_total 0

# HELP process_virtual_memory_bytes Virtual memory size in bytes.
# TYPE process_virtual_memory_bytes gauge
process_virtual_memory_bytes 3156643840

# HELP process_start_time_seconds Start time of the process since unix epoch in seconds.
# TYPE process_start_time_seconds gauge
process_start_time_seconds 402433

# HELP process_open_fds Number of open file descriptors.
# TYPE process_open_fds gauge
process_open_fds 23
```

#### 3. Integration with Prometheus scrapper

Sample Prometheus scrapper configuration (`~/prometheus.yml`):
```
global:
  scrape_interval: 10s

scrape_configs:
  - job_name: open5gs-smfd
    static_configs:
      - targets: ["192.168.1.140:9091"]
```

Where `192.168.1.140:9091` is the IP address and port where `open5gs-smfd` is
serving its metrics, as configured in above sections.

The Prometheus scrapper can be easily started from a docker container:
```
docker run -p 9090:9090 -v  /prometheus.yml:/etc/prometheus/prometheus.yml prom/prometheus
```

Then open your browser to be able to visualize the data: `http://localhost:9090/graph`
