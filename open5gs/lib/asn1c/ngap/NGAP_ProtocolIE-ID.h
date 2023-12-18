/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_ProtocolIE_ID_H_
#define	_NGAP_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_ProtocolIE-ID */
typedef long	 NGAP_ProtocolIE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_ProtocolIE_ID;
asn_struct_free_f NGAP_ProtocolIE_ID_free;
asn_struct_print_f NGAP_ProtocolIE_ID_print;
asn_constr_check_f NGAP_ProtocolIE_ID_constraint;
jer_type_encoder_f NGAP_ProtocolIE_ID_encode_jer;
per_type_decoder_f NGAP_ProtocolIE_ID_decode_aper;
per_type_encoder_f NGAP_ProtocolIE_ID_encode_aper;
#define NGAP_ProtocolIE_ID_id_AllowedNSSAI	((NGAP_ProtocolIE_ID_t)0)
#define NGAP_ProtocolIE_ID_id_AMFName	((NGAP_ProtocolIE_ID_t)1)
#define NGAP_ProtocolIE_ID_id_AMFOverloadResponse	((NGAP_ProtocolIE_ID_t)2)
#define NGAP_ProtocolIE_ID_id_AMFSetID	((NGAP_ProtocolIE_ID_t)3)
#define NGAP_ProtocolIE_ID_id_AMF_TNLAssociationFailedToSetupList	((NGAP_ProtocolIE_ID_t)4)
#define NGAP_ProtocolIE_ID_id_AMF_TNLAssociationSetupList	((NGAP_ProtocolIE_ID_t)5)
#define NGAP_ProtocolIE_ID_id_AMF_TNLAssociationToAddList	((NGAP_ProtocolIE_ID_t)6)
#define NGAP_ProtocolIE_ID_id_AMF_TNLAssociationToRemoveList	((NGAP_ProtocolIE_ID_t)7)
#define NGAP_ProtocolIE_ID_id_AMF_TNLAssociationToUpdateList	((NGAP_ProtocolIE_ID_t)8)
#define NGAP_ProtocolIE_ID_id_AMFTrafficLoadReductionIndication	((NGAP_ProtocolIE_ID_t)9)
#define NGAP_ProtocolIE_ID_id_AMF_UE_NGAP_ID	((NGAP_ProtocolIE_ID_t)10)
#define NGAP_ProtocolIE_ID_id_AssistanceDataForPaging	((NGAP_ProtocolIE_ID_t)11)
#define NGAP_ProtocolIE_ID_id_BroadcastCancelledAreaList	((NGAP_ProtocolIE_ID_t)12)
#define NGAP_ProtocolIE_ID_id_BroadcastCompletedAreaList	((NGAP_ProtocolIE_ID_t)13)
#define NGAP_ProtocolIE_ID_id_CancelAllWarningMessages	((NGAP_ProtocolIE_ID_t)14)
#define NGAP_ProtocolIE_ID_id_Cause	((NGAP_ProtocolIE_ID_t)15)
#define NGAP_ProtocolIE_ID_id_CellIDListForRestart	((NGAP_ProtocolIE_ID_t)16)
#define NGAP_ProtocolIE_ID_id_ConcurrentWarningMessageInd	((NGAP_ProtocolIE_ID_t)17)
#define NGAP_ProtocolIE_ID_id_CoreNetworkAssistanceInformationForInactive	((NGAP_ProtocolIE_ID_t)18)
#define NGAP_ProtocolIE_ID_id_CriticalityDiagnostics	((NGAP_ProtocolIE_ID_t)19)
#define NGAP_ProtocolIE_ID_id_DataCodingScheme	((NGAP_ProtocolIE_ID_t)20)
#define NGAP_ProtocolIE_ID_id_DefaultPagingDRX	((NGAP_ProtocolIE_ID_t)21)
#define NGAP_ProtocolIE_ID_id_DirectForwardingPathAvailability	((NGAP_ProtocolIE_ID_t)22)
#define NGAP_ProtocolIE_ID_id_EmergencyAreaIDListForRestart	((NGAP_ProtocolIE_ID_t)23)
#define NGAP_ProtocolIE_ID_id_EmergencyFallbackIndicator	((NGAP_ProtocolIE_ID_t)24)
#define NGAP_ProtocolIE_ID_id_EUTRA_CGI	((NGAP_ProtocolIE_ID_t)25)
#define NGAP_ProtocolIE_ID_id_FiveG_S_TMSI	((NGAP_ProtocolIE_ID_t)26)
#define NGAP_ProtocolIE_ID_id_GlobalRANNodeID	((NGAP_ProtocolIE_ID_t)27)
#define NGAP_ProtocolIE_ID_id_GUAMI	((NGAP_ProtocolIE_ID_t)28)
#define NGAP_ProtocolIE_ID_id_HandoverType	((NGAP_ProtocolIE_ID_t)29)
#define NGAP_ProtocolIE_ID_id_IMSVoiceSupportIndicator	((NGAP_ProtocolIE_ID_t)30)
#define NGAP_ProtocolIE_ID_id_IndexToRFSP	((NGAP_ProtocolIE_ID_t)31)
#define NGAP_ProtocolIE_ID_id_InfoOnRecommendedCellsAndRANNodesForPaging	((NGAP_ProtocolIE_ID_t)32)
#define NGAP_ProtocolIE_ID_id_LocationReportingRequestType	((NGAP_ProtocolIE_ID_t)33)
#define NGAP_ProtocolIE_ID_id_MaskedIMEISV	((NGAP_ProtocolIE_ID_t)34)
#define NGAP_ProtocolIE_ID_id_MessageIdentifier	((NGAP_ProtocolIE_ID_t)35)
#define NGAP_ProtocolIE_ID_id_MobilityRestrictionList	((NGAP_ProtocolIE_ID_t)36)
#define NGAP_ProtocolIE_ID_id_NASC	((NGAP_ProtocolIE_ID_t)37)
#define NGAP_ProtocolIE_ID_id_NAS_PDU	((NGAP_ProtocolIE_ID_t)38)
#define NGAP_ProtocolIE_ID_id_NASSecurityParametersFromNGRAN	((NGAP_ProtocolIE_ID_t)39)
#define NGAP_ProtocolIE_ID_id_NewAMF_UE_NGAP_ID	((NGAP_ProtocolIE_ID_t)40)
#define NGAP_ProtocolIE_ID_id_NewSecurityContextInd	((NGAP_ProtocolIE_ID_t)41)
#define NGAP_ProtocolIE_ID_id_NGAP_Message	((NGAP_ProtocolIE_ID_t)42)
#define NGAP_ProtocolIE_ID_id_NGRAN_CGI	((NGAP_ProtocolIE_ID_t)43)
#define NGAP_ProtocolIE_ID_id_NGRANTraceID	((NGAP_ProtocolIE_ID_t)44)
#define NGAP_ProtocolIE_ID_id_NR_CGI	((NGAP_ProtocolIE_ID_t)45)
#define NGAP_ProtocolIE_ID_id_NRPPa_PDU	((NGAP_ProtocolIE_ID_t)46)
#define NGAP_ProtocolIE_ID_id_NumberOfBroadcastsRequested	((NGAP_ProtocolIE_ID_t)47)
#define NGAP_ProtocolIE_ID_id_OldAMF	((NGAP_ProtocolIE_ID_t)48)
#define NGAP_ProtocolIE_ID_id_OverloadStartNSSAIList	((NGAP_ProtocolIE_ID_t)49)
#define NGAP_ProtocolIE_ID_id_PagingDRX	((NGAP_ProtocolIE_ID_t)50)
#define NGAP_ProtocolIE_ID_id_PagingOrigin	((NGAP_ProtocolIE_ID_t)51)
#define NGAP_ProtocolIE_ID_id_PagingPriority	((NGAP_ProtocolIE_ID_t)52)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceAdmittedList	((NGAP_ProtocolIE_ID_t)53)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToModifyListModRes	((NGAP_ProtocolIE_ID_t)54)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListCxtRes	((NGAP_ProtocolIE_ID_t)55)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListHOAck	((NGAP_ProtocolIE_ID_t)56)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListPSReq	((NGAP_ProtocolIE_ID_t)57)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListSURes	((NGAP_ProtocolIE_ID_t)58)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceHandoverList	((NGAP_ProtocolIE_ID_t)59)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceListCxtRelCpl	((NGAP_ProtocolIE_ID_t)60)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceListHORqd	((NGAP_ProtocolIE_ID_t)61)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceModifyListModCfm	((NGAP_ProtocolIE_ID_t)62)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceModifyListModInd	((NGAP_ProtocolIE_ID_t)63)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceModifyListModReq	((NGAP_ProtocolIE_ID_t)64)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceModifyListModRes	((NGAP_ProtocolIE_ID_t)65)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceNotifyList	((NGAP_ProtocolIE_ID_t)66)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceReleasedListNot	((NGAP_ProtocolIE_ID_t)67)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceReleasedListPSAck	((NGAP_ProtocolIE_ID_t)68)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceReleasedListPSFail	((NGAP_ProtocolIE_ID_t)69)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceReleasedListRelRes	((NGAP_ProtocolIE_ID_t)70)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSetupListCxtReq	((NGAP_ProtocolIE_ID_t)71)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSetupListCxtRes	((NGAP_ProtocolIE_ID_t)72)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSetupListHOReq	((NGAP_ProtocolIE_ID_t)73)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSetupListSUReq	((NGAP_ProtocolIE_ID_t)74)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSetupListSURes	((NGAP_ProtocolIE_ID_t)75)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceToBeSwitchedDLList	((NGAP_ProtocolIE_ID_t)76)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSwitchedList	((NGAP_ProtocolIE_ID_t)77)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceToReleaseListHOCmd	((NGAP_ProtocolIE_ID_t)78)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceToReleaseListRelCmd	((NGAP_ProtocolIE_ID_t)79)
#define NGAP_ProtocolIE_ID_id_PLMNSupportList	((NGAP_ProtocolIE_ID_t)80)
#define NGAP_ProtocolIE_ID_id_PWSFailedCellIDList	((NGAP_ProtocolIE_ID_t)81)
#define NGAP_ProtocolIE_ID_id_RANNodeName	((NGAP_ProtocolIE_ID_t)82)
#define NGAP_ProtocolIE_ID_id_RANPagingPriority	((NGAP_ProtocolIE_ID_t)83)
#define NGAP_ProtocolIE_ID_id_RANStatusTransfer_TransparentContainer	((NGAP_ProtocolIE_ID_t)84)
#define NGAP_ProtocolIE_ID_id_RAN_UE_NGAP_ID	((NGAP_ProtocolIE_ID_t)85)
#define NGAP_ProtocolIE_ID_id_RelativeAMFCapacity	((NGAP_ProtocolIE_ID_t)86)
#define NGAP_ProtocolIE_ID_id_RepetitionPeriod	((NGAP_ProtocolIE_ID_t)87)
#define NGAP_ProtocolIE_ID_id_ResetType	((NGAP_ProtocolIE_ID_t)88)
#define NGAP_ProtocolIE_ID_id_RoutingID	((NGAP_ProtocolIE_ID_t)89)
#define NGAP_ProtocolIE_ID_id_RRCEstablishmentCause	((NGAP_ProtocolIE_ID_t)90)
#define NGAP_ProtocolIE_ID_id_RRCInactiveTransitionReportRequest	((NGAP_ProtocolIE_ID_t)91)
#define NGAP_ProtocolIE_ID_id_RRCState	((NGAP_ProtocolIE_ID_t)92)
#define NGAP_ProtocolIE_ID_id_SecurityContext	((NGAP_ProtocolIE_ID_t)93)
#define NGAP_ProtocolIE_ID_id_SecurityKey	((NGAP_ProtocolIE_ID_t)94)
#define NGAP_ProtocolIE_ID_id_SerialNumber	((NGAP_ProtocolIE_ID_t)95)
#define NGAP_ProtocolIE_ID_id_ServedGUAMIList	((NGAP_ProtocolIE_ID_t)96)
#define NGAP_ProtocolIE_ID_id_SliceSupportList	((NGAP_ProtocolIE_ID_t)97)
#define NGAP_ProtocolIE_ID_id_SONConfigurationTransferDL	((NGAP_ProtocolIE_ID_t)98)
#define NGAP_ProtocolIE_ID_id_SONConfigurationTransferUL	((NGAP_ProtocolIE_ID_t)99)
#define NGAP_ProtocolIE_ID_id_SourceAMF_UE_NGAP_ID	((NGAP_ProtocolIE_ID_t)100)
#define NGAP_ProtocolIE_ID_id_SourceToTarget_TransparentContainer	((NGAP_ProtocolIE_ID_t)101)
#define NGAP_ProtocolIE_ID_id_SupportedTAList	((NGAP_ProtocolIE_ID_t)102)
#define NGAP_ProtocolIE_ID_id_TAIListForPaging	((NGAP_ProtocolIE_ID_t)103)
#define NGAP_ProtocolIE_ID_id_TAIListForRestart	((NGAP_ProtocolIE_ID_t)104)
#define NGAP_ProtocolIE_ID_id_TargetID	((NGAP_ProtocolIE_ID_t)105)
#define NGAP_ProtocolIE_ID_id_TargetToSource_TransparentContainer	((NGAP_ProtocolIE_ID_t)106)
#define NGAP_ProtocolIE_ID_id_TimeToWait	((NGAP_ProtocolIE_ID_t)107)
#define NGAP_ProtocolIE_ID_id_TraceActivation	((NGAP_ProtocolIE_ID_t)108)
#define NGAP_ProtocolIE_ID_id_TraceCollectionEntityIPAddress	((NGAP_ProtocolIE_ID_t)109)
#define NGAP_ProtocolIE_ID_id_UEAggregateMaximumBitRate	((NGAP_ProtocolIE_ID_t)110)
#define NGAP_ProtocolIE_ID_id_UE_associatedLogicalNG_connectionList	((NGAP_ProtocolIE_ID_t)111)
#define NGAP_ProtocolIE_ID_id_UEContextRequest	((NGAP_ProtocolIE_ID_t)112)
#define NGAP_ProtocolIE_ID_id_UE_NGAP_IDs	((NGAP_ProtocolIE_ID_t)114)
#define NGAP_ProtocolIE_ID_id_UEPagingIdentity	((NGAP_ProtocolIE_ID_t)115)
#define NGAP_ProtocolIE_ID_id_UEPresenceInAreaOfInterestList	((NGAP_ProtocolIE_ID_t)116)
#define NGAP_ProtocolIE_ID_id_UERadioCapability	((NGAP_ProtocolIE_ID_t)117)
#define NGAP_ProtocolIE_ID_id_UERadioCapabilityForPaging	((NGAP_ProtocolIE_ID_t)118)
#define NGAP_ProtocolIE_ID_id_UESecurityCapabilities	((NGAP_ProtocolIE_ID_t)119)
#define NGAP_ProtocolIE_ID_id_UnavailableGUAMIList	((NGAP_ProtocolIE_ID_t)120)
#define NGAP_ProtocolIE_ID_id_UserLocationInformation	((NGAP_ProtocolIE_ID_t)121)
#define NGAP_ProtocolIE_ID_id_WarningAreaList	((NGAP_ProtocolIE_ID_t)122)
#define NGAP_ProtocolIE_ID_id_WarningMessageContents	((NGAP_ProtocolIE_ID_t)123)
#define NGAP_ProtocolIE_ID_id_WarningSecurityInfo	((NGAP_ProtocolIE_ID_t)124)
#define NGAP_ProtocolIE_ID_id_WarningType	((NGAP_ProtocolIE_ID_t)125)
#define NGAP_ProtocolIE_ID_id_AdditionalUL_NGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)126)
#define NGAP_ProtocolIE_ID_id_DataForwardingNotPossible	((NGAP_ProtocolIE_ID_t)127)
#define NGAP_ProtocolIE_ID_id_DL_NGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)128)
#define NGAP_ProtocolIE_ID_id_NetworkInstance	((NGAP_ProtocolIE_ID_t)129)
#define NGAP_ProtocolIE_ID_id_PDUSessionAggregateMaximumBitRate	((NGAP_ProtocolIE_ID_t)130)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToModifyListModCfm	((NGAP_ProtocolIE_ID_t)131)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToSetupListCxtFail	((NGAP_ProtocolIE_ID_t)132)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceListCxtRelReq	((NGAP_ProtocolIE_ID_t)133)
#define NGAP_ProtocolIE_ID_id_PDUSessionType	((NGAP_ProtocolIE_ID_t)134)
#define NGAP_ProtocolIE_ID_id_QosFlowAddOrModifyRequestList	((NGAP_ProtocolIE_ID_t)135)
#define NGAP_ProtocolIE_ID_id_QosFlowSetupRequestList	((NGAP_ProtocolIE_ID_t)136)
#define NGAP_ProtocolIE_ID_id_QosFlowToReleaseList	((NGAP_ProtocolIE_ID_t)137)
#define NGAP_ProtocolIE_ID_id_SecurityIndication	((NGAP_ProtocolIE_ID_t)138)
#define NGAP_ProtocolIE_ID_id_UL_NGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)139)
#define NGAP_ProtocolIE_ID_id_UL_NGU_UP_TNLModifyList	((NGAP_ProtocolIE_ID_t)140)
#define NGAP_ProtocolIE_ID_id_WarningAreaCoordinates	((NGAP_ProtocolIE_ID_t)141)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSecondaryRATUsageList	((NGAP_ProtocolIE_ID_t)142)
#define NGAP_ProtocolIE_ID_id_HandoverFlag	((NGAP_ProtocolIE_ID_t)143)
#define NGAP_ProtocolIE_ID_id_SecondaryRATUsageInformation	((NGAP_ProtocolIE_ID_t)144)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceReleaseResponseTransfer	((NGAP_ProtocolIE_ID_t)145)
#define NGAP_ProtocolIE_ID_id_RedirectionVoiceFallback	((NGAP_ProtocolIE_ID_t)146)
#define NGAP_ProtocolIE_ID_id_UERetentionInformation	((NGAP_ProtocolIE_ID_t)147)
#define NGAP_ProtocolIE_ID_id_S_NSSAI	((NGAP_ProtocolIE_ID_t)148)
#define NGAP_ProtocolIE_ID_id_PSCellInformation	((NGAP_ProtocolIE_ID_t)149)
#define NGAP_ProtocolIE_ID_id_LastEUTRAN_PLMNIdentity	((NGAP_ProtocolIE_ID_t)150)
#define NGAP_ProtocolIE_ID_id_MaximumIntegrityProtectedDataRate_DL	((NGAP_ProtocolIE_ID_t)151)
#define NGAP_ProtocolIE_ID_id_AdditionalDLForwardingUPTNLInformation	((NGAP_ProtocolIE_ID_t)152)
#define NGAP_ProtocolIE_ID_id_AdditionalDLUPTNLInformationForHOList	((NGAP_ProtocolIE_ID_t)153)
#define NGAP_ProtocolIE_ID_id_AdditionalNGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)154)
#define NGAP_ProtocolIE_ID_id_AdditionalDLQosFlowPerTNLInformation	((NGAP_ProtocolIE_ID_t)155)
#define NGAP_ProtocolIE_ID_id_SecurityResult	((NGAP_ProtocolIE_ID_t)156)
#define NGAP_ProtocolIE_ID_id_ENDC_SONConfigurationTransferDL	((NGAP_ProtocolIE_ID_t)157)
#define NGAP_ProtocolIE_ID_id_ENDC_SONConfigurationTransferUL	((NGAP_ProtocolIE_ID_t)158)
#define NGAP_ProtocolIE_ID_id_OldAssociatedQosFlowList_ULendmarkerexpected	((NGAP_ProtocolIE_ID_t)159)
#define NGAP_ProtocolIE_ID_id_CNTypeRestrictionsForEquivalent	((NGAP_ProtocolIE_ID_t)160)
#define NGAP_ProtocolIE_ID_id_CNTypeRestrictionsForServing	((NGAP_ProtocolIE_ID_t)161)
#define NGAP_ProtocolIE_ID_id_NewGUAMI	((NGAP_ProtocolIE_ID_t)162)
#define NGAP_ProtocolIE_ID_id_ULForwarding	((NGAP_ProtocolIE_ID_t)163)
#define NGAP_ProtocolIE_ID_id_ULForwardingUP_TNLInformation	((NGAP_ProtocolIE_ID_t)164)
#define NGAP_ProtocolIE_ID_id_CNAssistedRANTuning	((NGAP_ProtocolIE_ID_t)165)
#define NGAP_ProtocolIE_ID_id_CommonNetworkInstance	((NGAP_ProtocolIE_ID_t)166)
#define NGAP_ProtocolIE_ID_id_NGRAN_TNLAssociationToRemoveList	((NGAP_ProtocolIE_ID_t)167)
#define NGAP_ProtocolIE_ID_id_TNLAssociationTransportLayerAddressNGRAN	((NGAP_ProtocolIE_ID_t)168)
#define NGAP_ProtocolIE_ID_id_EndpointIPAddressAndPort	((NGAP_ProtocolIE_ID_t)169)
#define NGAP_ProtocolIE_ID_id_LocationReportingAdditionalInfo	((NGAP_ProtocolIE_ID_t)170)
#define NGAP_ProtocolIE_ID_id_SourceToTarget_AMFInformationReroute	((NGAP_ProtocolIE_ID_t)171)
#define NGAP_ProtocolIE_ID_id_AdditionalULForwardingUPTNLInformation	((NGAP_ProtocolIE_ID_t)172)
#define NGAP_ProtocolIE_ID_id_SCTP_TLAs	((NGAP_ProtocolIE_ID_t)173)
#define NGAP_ProtocolIE_ID_id_SelectedPLMNIdentity	((NGAP_ProtocolIE_ID_t)174)
#define NGAP_ProtocolIE_ID_id_RIMInformationTransfer	((NGAP_ProtocolIE_ID_t)175)
#define NGAP_ProtocolIE_ID_id_GUAMIType	((NGAP_ProtocolIE_ID_t)176)
#define NGAP_ProtocolIE_ID_id_SRVCCOperationPossible	((NGAP_ProtocolIE_ID_t)177)
#define NGAP_ProtocolIE_ID_id_TargetRNC_ID	((NGAP_ProtocolIE_ID_t)178)
#define NGAP_ProtocolIE_ID_id_RAT_Information	((NGAP_ProtocolIE_ID_t)179)
#define NGAP_ProtocolIE_ID_id_ExtendedRATRestrictionInformation	((NGAP_ProtocolIE_ID_t)180)
#define NGAP_ProtocolIE_ID_id_QosMonitoringRequest	((NGAP_ProtocolIE_ID_t)181)
#define NGAP_ProtocolIE_ID_id_SgNB_UE_X2AP_ID	((NGAP_ProtocolIE_ID_t)182)
#define NGAP_ProtocolIE_ID_id_AdditionalRedundantDL_NGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)183)
#define NGAP_ProtocolIE_ID_id_AdditionalRedundantDLQosFlowPerTNLInformation	((NGAP_ProtocolIE_ID_t)184)
#define NGAP_ProtocolIE_ID_id_AdditionalRedundantNGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)185)
#define NGAP_ProtocolIE_ID_id_AdditionalRedundantUL_NGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)186)
#define NGAP_ProtocolIE_ID_id_CNPacketDelayBudgetDL	((NGAP_ProtocolIE_ID_t)187)
#define NGAP_ProtocolIE_ID_id_CNPacketDelayBudgetUL	((NGAP_ProtocolIE_ID_t)188)
#define NGAP_ProtocolIE_ID_id_ExtendedPacketDelayBudget	((NGAP_ProtocolIE_ID_t)189)
#define NGAP_ProtocolIE_ID_id_RedundantCommonNetworkInstance	((NGAP_ProtocolIE_ID_t)190)
#define NGAP_ProtocolIE_ID_id_RedundantDL_NGU_TNLInformationReused	((NGAP_ProtocolIE_ID_t)191)
#define NGAP_ProtocolIE_ID_id_RedundantDL_NGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)192)
#define NGAP_ProtocolIE_ID_id_RedundantDLQosFlowPerTNLInformation	((NGAP_ProtocolIE_ID_t)193)
#define NGAP_ProtocolIE_ID_id_RedundantQosFlowIndicator	((NGAP_ProtocolIE_ID_t)194)
#define NGAP_ProtocolIE_ID_id_RedundantUL_NGU_UP_TNLInformation	((NGAP_ProtocolIE_ID_t)195)
#define NGAP_ProtocolIE_ID_id_TSCTrafficCharacteristics	((NGAP_ProtocolIE_ID_t)196)
#define NGAP_ProtocolIE_ID_id_RedundantPDUSessionInformation	((NGAP_ProtocolIE_ID_t)197)
#define NGAP_ProtocolIE_ID_id_UsedRSNInformation	((NGAP_ProtocolIE_ID_t)198)
#define NGAP_ProtocolIE_ID_id_IAB_Authorized	((NGAP_ProtocolIE_ID_t)199)
#define NGAP_ProtocolIE_ID_id_IAB_Supported	((NGAP_ProtocolIE_ID_t)200)
#define NGAP_ProtocolIE_ID_id_IABNodeIndication	((NGAP_ProtocolIE_ID_t)201)
#define NGAP_ProtocolIE_ID_id_NB_IoT_PagingDRX	((NGAP_ProtocolIE_ID_t)202)
#define NGAP_ProtocolIE_ID_id_NB_IoT_Paging_eDRXInfo	((NGAP_ProtocolIE_ID_t)203)
#define NGAP_ProtocolIE_ID_id_NB_IoT_DefaultPagingDRX	((NGAP_ProtocolIE_ID_t)204)
#define NGAP_ProtocolIE_ID_id_Enhanced_CoverageRestriction	((NGAP_ProtocolIE_ID_t)205)
#define NGAP_ProtocolIE_ID_id_Extended_ConnectedTime	((NGAP_ProtocolIE_ID_t)206)
#define NGAP_ProtocolIE_ID_id_PagingAssisDataforCEcapabUE	((NGAP_ProtocolIE_ID_t)207)
#define NGAP_ProtocolIE_ID_id_WUS_Assistance_Information	((NGAP_ProtocolIE_ID_t)208)
#define NGAP_ProtocolIE_ID_id_UE_DifferentiationInfo	((NGAP_ProtocolIE_ID_t)209)
#define NGAP_ProtocolIE_ID_id_NB_IoT_UEPriority	((NGAP_ProtocolIE_ID_t)210)
#define NGAP_ProtocolIE_ID_id_UL_CP_SecurityInformation	((NGAP_ProtocolIE_ID_t)211)
#define NGAP_ProtocolIE_ID_id_DL_CP_SecurityInformation	((NGAP_ProtocolIE_ID_t)212)
#define NGAP_ProtocolIE_ID_id_TAI	((NGAP_ProtocolIE_ID_t)213)
#define NGAP_ProtocolIE_ID_id_UERadioCapabilityForPagingOfNB_IoT	((NGAP_ProtocolIE_ID_t)214)
#define NGAP_ProtocolIE_ID_id_LTEV2XServicesAuthorized	((NGAP_ProtocolIE_ID_t)215)
#define NGAP_ProtocolIE_ID_id_NRV2XServicesAuthorized	((NGAP_ProtocolIE_ID_t)216)
#define NGAP_ProtocolIE_ID_id_LTEUESidelinkAggregateMaximumBitrate	((NGAP_ProtocolIE_ID_t)217)
#define NGAP_ProtocolIE_ID_id_NRUESidelinkAggregateMaximumBitrate	((NGAP_ProtocolIE_ID_t)218)
#define NGAP_ProtocolIE_ID_id_PC5QoSParameters	((NGAP_ProtocolIE_ID_t)219)
#define NGAP_ProtocolIE_ID_id_AlternativeQoSParaSetList	((NGAP_ProtocolIE_ID_t)220)
#define NGAP_ProtocolIE_ID_id_CurrentQoSParaSetIndex	((NGAP_ProtocolIE_ID_t)221)
#define NGAP_ProtocolIE_ID_id_CEmodeBrestricted	((NGAP_ProtocolIE_ID_t)222)
#define NGAP_ProtocolIE_ID_id_EUTRA_PagingeDRXInformation	((NGAP_ProtocolIE_ID_t)223)
#define NGAP_ProtocolIE_ID_id_CEmodeBSupport_Indicator	((NGAP_ProtocolIE_ID_t)224)
#define NGAP_ProtocolIE_ID_id_LTEM_Indication	((NGAP_ProtocolIE_ID_t)225)
#define NGAP_ProtocolIE_ID_id_EndIndication	((NGAP_ProtocolIE_ID_t)226)
#define NGAP_ProtocolIE_ID_id_EDT_Session	((NGAP_ProtocolIE_ID_t)227)
#define NGAP_ProtocolIE_ID_id_UECapabilityInfoRequest	((NGAP_ProtocolIE_ID_t)228)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToResumeListRESReq	((NGAP_ProtocolIE_ID_t)229)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceFailedToResumeListRESRes	((NGAP_ProtocolIE_ID_t)230)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceSuspendListSUSReq	((NGAP_ProtocolIE_ID_t)231)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceResumeListRESReq	((NGAP_ProtocolIE_ID_t)232)
#define NGAP_ProtocolIE_ID_id_PDUSessionResourceResumeListRESRes	((NGAP_ProtocolIE_ID_t)233)
#define NGAP_ProtocolIE_ID_id_UE_UP_CIoT_Support	((NGAP_ProtocolIE_ID_t)234)
#define NGAP_ProtocolIE_ID_id_Suspend_Request_Indication	((NGAP_ProtocolIE_ID_t)235)
#define NGAP_ProtocolIE_ID_id_Suspend_Response_Indication	((NGAP_ProtocolIE_ID_t)236)
#define NGAP_ProtocolIE_ID_id_RRC_Resume_Cause	((NGAP_ProtocolIE_ID_t)237)
#define NGAP_ProtocolIE_ID_id_RGLevelWirelineAccessCharacteristics	((NGAP_ProtocolIE_ID_t)238)
#define NGAP_ProtocolIE_ID_id_W_AGFIdentityInformation	((NGAP_ProtocolIE_ID_t)239)
#define NGAP_ProtocolIE_ID_id_GlobalTNGF_ID	((NGAP_ProtocolIE_ID_t)240)
#define NGAP_ProtocolIE_ID_id_GlobalTWIF_ID	((NGAP_ProtocolIE_ID_t)241)
#define NGAP_ProtocolIE_ID_id_GlobalW_AGF_ID	((NGAP_ProtocolIE_ID_t)242)
#define NGAP_ProtocolIE_ID_id_UserLocationInformationW_AGF	((NGAP_ProtocolIE_ID_t)243)
#define NGAP_ProtocolIE_ID_id_UserLocationInformationTNGF	((NGAP_ProtocolIE_ID_t)244)
#define NGAP_ProtocolIE_ID_id_AuthenticatedIndication	((NGAP_ProtocolIE_ID_t)245)
#define NGAP_ProtocolIE_ID_id_TNGFIdentityInformation	((NGAP_ProtocolIE_ID_t)246)
#define NGAP_ProtocolIE_ID_id_TWIFIdentityInformation	((NGAP_ProtocolIE_ID_t)247)
#define NGAP_ProtocolIE_ID_id_UserLocationInformationTWIF	((NGAP_ProtocolIE_ID_t)248)
#define NGAP_ProtocolIE_ID_id_DataForwardingResponseERABList	((NGAP_ProtocolIE_ID_t)249)
#define NGAP_ProtocolIE_ID_id_IntersystemSONConfigurationTransferDL	((NGAP_ProtocolIE_ID_t)250)
#define NGAP_ProtocolIE_ID_id_IntersystemSONConfigurationTransferUL	((NGAP_ProtocolIE_ID_t)251)
#define NGAP_ProtocolIE_ID_id_SONInformationReport	((NGAP_ProtocolIE_ID_t)252)
#define NGAP_ProtocolIE_ID_id_UEHistoryInformationFromTheUE	((NGAP_ProtocolIE_ID_t)253)
#define NGAP_ProtocolIE_ID_id_ManagementBasedMDTPLMNList	((NGAP_ProtocolIE_ID_t)254)
#define NGAP_ProtocolIE_ID_id_MDTConfiguration	((NGAP_ProtocolIE_ID_t)255)
#define NGAP_ProtocolIE_ID_id_PrivacyIndicator	((NGAP_ProtocolIE_ID_t)256)
#define NGAP_ProtocolIE_ID_id_TraceCollectionEntityURI	((NGAP_ProtocolIE_ID_t)257)
#define NGAP_ProtocolIE_ID_id_NPN_Support	((NGAP_ProtocolIE_ID_t)258)
#define NGAP_ProtocolIE_ID_id_NPN_AccessInformation	((NGAP_ProtocolIE_ID_t)259)
#define NGAP_ProtocolIE_ID_id_NPN_PagingAssistanceInformation	((NGAP_ProtocolIE_ID_t)260)
#define NGAP_ProtocolIE_ID_id_NPN_MobilityInformation	((NGAP_ProtocolIE_ID_t)261)
#define NGAP_ProtocolIE_ID_id_TargettoSource_Failure_TransparentContainer	((NGAP_ProtocolIE_ID_t)262)
#define NGAP_ProtocolIE_ID_id_NID	((NGAP_ProtocolIE_ID_t)263)
#define NGAP_ProtocolIE_ID_id_UERadioCapabilityID	((NGAP_ProtocolIE_ID_t)264)
#define NGAP_ProtocolIE_ID_id_UERadioCapability_EUTRA_Format	((NGAP_ProtocolIE_ID_t)265)
#define NGAP_ProtocolIE_ID_id_DAPSRequestInfo	((NGAP_ProtocolIE_ID_t)266)
#define NGAP_ProtocolIE_ID_id_DAPSResponseInfoList	((NGAP_ProtocolIE_ID_t)267)
#define NGAP_ProtocolIE_ID_id_EarlyStatusTransfer_TransparentContainer	((NGAP_ProtocolIE_ID_t)268)
#define NGAP_ProtocolIE_ID_id_NotifySourceNGRANNode	((NGAP_ProtocolIE_ID_t)269)
#define NGAP_ProtocolIE_ID_id_ExtendedSliceSupportList	((NGAP_ProtocolIE_ID_t)270)
#define NGAP_ProtocolIE_ID_id_ExtendedTAISliceSupportList	((NGAP_ProtocolIE_ID_t)271)
#define NGAP_ProtocolIE_ID_id_ConfiguredTACIndication	((NGAP_ProtocolIE_ID_t)272)
#define NGAP_ProtocolIE_ID_id_Extended_RANNodeName	((NGAP_ProtocolIE_ID_t)273)
#define NGAP_ProtocolIE_ID_id_Extended_AMFName	((NGAP_ProtocolIE_ID_t)274)
#define NGAP_ProtocolIE_ID_id_GlobalCable_ID	((NGAP_ProtocolIE_ID_t)275)
#define NGAP_ProtocolIE_ID_id_QosMonitoringReportingFrequency	((NGAP_ProtocolIE_ID_t)276)
#define NGAP_ProtocolIE_ID_id_QosFlowParametersList	((NGAP_ProtocolIE_ID_t)277)
#define NGAP_ProtocolIE_ID_id_QosFlowFeedbackList	((NGAP_ProtocolIE_ID_t)278)
#define NGAP_ProtocolIE_ID_id_BurstArrivalTimeDownlink	((NGAP_ProtocolIE_ID_t)279)
#define NGAP_ProtocolIE_ID_id_ExtendedUEIdentityIndexValue	((NGAP_ProtocolIE_ID_t)280)
#define NGAP_ProtocolIE_ID_id_PduSessionExpectedUEActivityBehaviour	((NGAP_ProtocolIE_ID_t)281)
#define NGAP_ProtocolIE_ID_id_MicoAllPLMN	((NGAP_ProtocolIE_ID_t)282)
#define NGAP_ProtocolIE_ID_id_QosFlowFailedToSetupList	((NGAP_ProtocolIE_ID_t)283)
#define NGAP_ProtocolIE_ID_id_SourceTNLAddrInfo	((NGAP_ProtocolIE_ID_t)284)
#define NGAP_ProtocolIE_ID_id_ExtendedReportIntervalMDT	((NGAP_ProtocolIE_ID_t)285)
#define NGAP_ProtocolIE_ID_id_SourceNodeID	((NGAP_ProtocolIE_ID_t)286)
#define NGAP_ProtocolIE_ID_id_NRNTNTAIInformation	((NGAP_ProtocolIE_ID_t)287)
#define NGAP_ProtocolIE_ID_id_UEContextReferenceAtSource	((NGAP_ProtocolIE_ID_t)288)
#define NGAP_ProtocolIE_ID_id_LastVisitedPSCellList	((NGAP_ProtocolIE_ID_t)289)
#define NGAP_ProtocolIE_ID_id_IntersystemSONInformationRequest	((NGAP_ProtocolIE_ID_t)290)
#define NGAP_ProtocolIE_ID_id_IntersystemSONInformationReply	((NGAP_ProtocolIE_ID_t)291)
#define NGAP_ProtocolIE_ID_id_EnergySavingIndication	((NGAP_ProtocolIE_ID_t)292)
#define NGAP_ProtocolIE_ID_id_IntersystemResourceStatusUpdate	((NGAP_ProtocolIE_ID_t)293)
#define NGAP_ProtocolIE_ID_id_SuccessfulHandoverReportList	((NGAP_ProtocolIE_ID_t)294)
#define NGAP_ProtocolIE_ID_id_MBS_AreaSessionID	((NGAP_ProtocolIE_ID_t)295)
#define NGAP_ProtocolIE_ID_id_MBS_QoSFlowsToBeSetupList	((NGAP_ProtocolIE_ID_t)296)
#define NGAP_ProtocolIE_ID_id_MBS_QoSFlowsToBeSetupModList	((NGAP_ProtocolIE_ID_t)297)
#define NGAP_ProtocolIE_ID_id_MBS_ServiceArea	((NGAP_ProtocolIE_ID_t)298)
#define NGAP_ProtocolIE_ID_id_MBS_SessionID	((NGAP_ProtocolIE_ID_t)299)
#define NGAP_ProtocolIE_ID_id_MBS_DistributionReleaseRequestTransfer	((NGAP_ProtocolIE_ID_t)300)
#define NGAP_ProtocolIE_ID_id_MBS_DistributionSetupRequestTransfer	((NGAP_ProtocolIE_ID_t)301)
#define NGAP_ProtocolIE_ID_id_MBS_DistributionSetupResponseTransfer	((NGAP_ProtocolIE_ID_t)302)
#define NGAP_ProtocolIE_ID_id_MBS_DistributionSetupUnsuccessfulTransfer	((NGAP_ProtocolIE_ID_t)303)
#define NGAP_ProtocolIE_ID_id_MulticastSessionActivationRequestTransfer	((NGAP_ProtocolIE_ID_t)304)
#define NGAP_ProtocolIE_ID_id_MulticastSessionDeactivationRequestTransfer	((NGAP_ProtocolIE_ID_t)305)
#define NGAP_ProtocolIE_ID_id_MulticastSessionUpdateRequestTransfer	((NGAP_ProtocolIE_ID_t)306)
#define NGAP_ProtocolIE_ID_id_MulticastGroupPagingAreaList	((NGAP_ProtocolIE_ID_t)307)
#define NGAP_ProtocolIE_ID_id_MBS_SupportIndicator	((NGAP_ProtocolIE_ID_t)309)
#define NGAP_ProtocolIE_ID_id_MBSSessionFailedtoSetupList	((NGAP_ProtocolIE_ID_t)310)
#define NGAP_ProtocolIE_ID_id_MBSSessionFailedtoSetuporModifyList	((NGAP_ProtocolIE_ID_t)311)
#define NGAP_ProtocolIE_ID_id_MBSSessionSetupResponseList	((NGAP_ProtocolIE_ID_t)312)
#define NGAP_ProtocolIE_ID_id_MBSSessionSetuporModifyResponseList	((NGAP_ProtocolIE_ID_t)313)
#define NGAP_ProtocolIE_ID_id_MBSSessionSetupFailureTransfer	((NGAP_ProtocolIE_ID_t)314)
#define NGAP_ProtocolIE_ID_id_MBSSessionSetupRequestTransfer	((NGAP_ProtocolIE_ID_t)315)
#define NGAP_ProtocolIE_ID_id_MBSSessionSetupResponseTransfer	((NGAP_ProtocolIE_ID_t)316)
#define NGAP_ProtocolIE_ID_id_MBSSessionToReleaseList	((NGAP_ProtocolIE_ID_t)317)
#define NGAP_ProtocolIE_ID_id_MBSSessionSetupRequestList	((NGAP_ProtocolIE_ID_t)318)
#define NGAP_ProtocolIE_ID_id_MBSSessionSetuporModifyRequestList	((NGAP_ProtocolIE_ID_t)319)
#define NGAP_ProtocolIE_ID_id_MBS_ActiveSessionInformation_SourcetoTargetList	((NGAP_ProtocolIE_ID_t)323)
#define NGAP_ProtocolIE_ID_id_MBS_ActiveSessionInformation_TargettoSourceList	((NGAP_ProtocolIE_ID_t)324)
#define NGAP_ProtocolIE_ID_id_OnboardingSupport	((NGAP_ProtocolIE_ID_t)325)
#define NGAP_ProtocolIE_ID_id_TimeSyncAssistanceInfo	((NGAP_ProtocolIE_ID_t)326)
#define NGAP_ProtocolIE_ID_id_SurvivalTime	((NGAP_ProtocolIE_ID_t)327)
#define NGAP_ProtocolIE_ID_id_QMCConfigInfo	((NGAP_ProtocolIE_ID_t)328)
#define NGAP_ProtocolIE_ID_id_QMCDeactivation	((NGAP_ProtocolIE_ID_t)329)
#define NGAP_ProtocolIE_ID_id_PDUSessionPairID	((NGAP_ProtocolIE_ID_t)331)
#define NGAP_ProtocolIE_ID_id_NR_PagingeDRXInformation	((NGAP_ProtocolIE_ID_t)332)
#define NGAP_ProtocolIE_ID_id_RedCapIndication	((NGAP_ProtocolIE_ID_t)333)
#define NGAP_ProtocolIE_ID_id_TargetNSSAIInformation	((NGAP_ProtocolIE_ID_t)334)
#define NGAP_ProtocolIE_ID_id_UESliceMaximumBitRateList	((NGAP_ProtocolIE_ID_t)335)
#define NGAP_ProtocolIE_ID_id_M4ReportAmount	((NGAP_ProtocolIE_ID_t)336)
#define NGAP_ProtocolIE_ID_id_M5ReportAmount	((NGAP_ProtocolIE_ID_t)337)
#define NGAP_ProtocolIE_ID_id_M6ReportAmount	((NGAP_ProtocolIE_ID_t)338)
#define NGAP_ProtocolIE_ID_id_M7ReportAmount	((NGAP_ProtocolIE_ID_t)339)
#define NGAP_ProtocolIE_ID_id_IncludeBeamMeasurementsIndication	((NGAP_ProtocolIE_ID_t)340)
#define NGAP_ProtocolIE_ID_id_ExcessPacketDelayThresholdConfiguration	((NGAP_ProtocolIE_ID_t)341)
#define NGAP_ProtocolIE_ID_id_PagingCause	((NGAP_ProtocolIE_ID_t)342)
#define NGAP_ProtocolIE_ID_id_PagingCauseIndicationForVoiceService	((NGAP_ProtocolIE_ID_t)343)
#define NGAP_ProtocolIE_ID_id_PEIPSassistanceInformation	((NGAP_ProtocolIE_ID_t)344)
#define NGAP_ProtocolIE_ID_id_FiveG_ProSeAuthorized	((NGAP_ProtocolIE_ID_t)345)
#define NGAP_ProtocolIE_ID_id_FiveG_ProSeUEPC5AggregateMaximumBitRate	((NGAP_ProtocolIE_ID_t)346)
#define NGAP_ProtocolIE_ID_id_FiveG_ProSePC5QoSParameters	((NGAP_ProtocolIE_ID_t)347)
#define NGAP_ProtocolIE_ID_id_MBSSessionModificationFailureTransfer	((NGAP_ProtocolIE_ID_t)348)
#define NGAP_ProtocolIE_ID_id_MBSSessionModificationRequestTransfer	((NGAP_ProtocolIE_ID_t)349)
#define NGAP_ProtocolIE_ID_id_MBSSessionModificationResponseTransfer	((NGAP_ProtocolIE_ID_t)350)
#define NGAP_ProtocolIE_ID_id_MBS_QoSFlowToReleaseList	((NGAP_ProtocolIE_ID_t)351)
#define NGAP_ProtocolIE_ID_id_MBS_SessionTNLInfo5GC	((NGAP_ProtocolIE_ID_t)352)
#define NGAP_ProtocolIE_ID_id_TAINSAGSupportList	((NGAP_ProtocolIE_ID_t)353)
#define NGAP_ProtocolIE_ID_id_SourceNodeTNLAddrInfo	((NGAP_ProtocolIE_ID_t)354)
#define NGAP_ProtocolIE_ID_id_NGAPIESupportInformationRequestList	((NGAP_ProtocolIE_ID_t)355)
#define NGAP_ProtocolIE_ID_id_NGAPIESupportInformationResponseList	((NGAP_ProtocolIE_ID_t)356)
#define NGAP_ProtocolIE_ID_id_MBS_SessionFSAIDList	((NGAP_ProtocolIE_ID_t)357)
#define NGAP_ProtocolIE_ID_id_MBSSessionReleaseResponseTransfer	((NGAP_ProtocolIE_ID_t)358)
#define NGAP_ProtocolIE_ID_id_ManagementBasedMDTPLMNModificationList	((NGAP_ProtocolIE_ID_t)359)
#define NGAP_ProtocolIE_ID_id_EarlyMeasurement	((NGAP_ProtocolIE_ID_t)360)
#define NGAP_ProtocolIE_ID_id_BeamMeasurementsReportConfiguration	((NGAP_ProtocolIE_ID_t)361)

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_ProtocolIE_ID_H_ */
#include <asn_internal.h>
