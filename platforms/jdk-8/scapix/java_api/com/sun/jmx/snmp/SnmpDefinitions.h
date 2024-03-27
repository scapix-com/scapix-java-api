// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPDEFINITIONS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPDEFINITIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpDefinitions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpDefinitions>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpDefinitions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPDEFINITIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPDEFINITIONS)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPDEFINITIONS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpDefinitions : public jni::object_base<"com/sun/jmx/snmp/SnmpDefinitions",
	java::lang::Object>
{
public:

	static jint noAuthNoPriv() { return get_static_field<"noAuthNoPriv", jint>(); }
	static jint authNoPriv() { return get_static_field<"authNoPriv", jint>(); }
	static jint authPriv() { return get_static_field<"authPriv", jint>(); }
	static jint reportableFlag() { return get_static_field<"reportableFlag", jint>(); }
	static jint authMask() { return get_static_field<"authMask", jint>(); }
	static jint privMask() { return get_static_field<"privMask", jint>(); }
	static jint authPrivMask() { return get_static_field<"authPrivMask", jint>(); }
	static jint CtxtConsFlag() { return get_static_field<"CtxtConsFlag", jint>(); }
	static jbyte snmpVersionOne() { return get_static_field<"snmpVersionOne", jbyte>(); }
	static jbyte snmpVersionTwo() { return get_static_field<"snmpVersionTwo", jbyte>(); }
	static jbyte snmpVersionThree() { return get_static_field<"snmpVersionThree", jbyte>(); }
	static jint pduGetRequestPdu() { return get_static_field<"pduGetRequestPdu", jint>(); }
	static jint pduGetNextRequestPdu() { return get_static_field<"pduGetNextRequestPdu", jint>(); }
	static jint pduGetResponsePdu() { return get_static_field<"pduGetResponsePdu", jint>(); }
	static jint pduSetRequestPdu() { return get_static_field<"pduSetRequestPdu", jint>(); }
	static jint pduGetBulkRequestPdu() { return get_static_field<"pduGetBulkRequestPdu", jint>(); }
	static jint pduWalkRequest() { return get_static_field<"pduWalkRequest", jint>(); }
	static jint pduV1TrapPdu() { return get_static_field<"pduV1TrapPdu", jint>(); }
	static jint pduV2TrapPdu() { return get_static_field<"pduV2TrapPdu", jint>(); }
	static jint pduInformRequestPdu() { return get_static_field<"pduInformRequestPdu", jint>(); }
	static jint pduReportPdu() { return get_static_field<"pduReportPdu", jint>(); }
	static jint trapColdStart() { return get_static_field<"trapColdStart", jint>(); }
	static jint trapWarmStart() { return get_static_field<"trapWarmStart", jint>(); }
	static jint trapLinkDown() { return get_static_field<"trapLinkDown", jint>(); }
	static jint trapLinkUp() { return get_static_field<"trapLinkUp", jint>(); }
	static jint trapAuthenticationFailure() { return get_static_field<"trapAuthenticationFailure", jint>(); }
	static jint trapEgpNeighborLoss() { return get_static_field<"trapEgpNeighborLoss", jint>(); }
	static jint trapEnterpriseSpecific() { return get_static_field<"trapEnterpriseSpecific", jint>(); }
	static jint snmpRspNoError() { return get_static_field<"snmpRspNoError", jint>(); }
	static jint snmpRspTooBig() { return get_static_field<"snmpRspTooBig", jint>(); }
	static jint snmpRspNoSuchName() { return get_static_field<"snmpRspNoSuchName", jint>(); }
	static jint snmpRspBadValue() { return get_static_field<"snmpRspBadValue", jint>(); }
	static jint snmpRspReadOnly() { return get_static_field<"snmpRspReadOnly", jint>(); }
	static jint snmpRspGenErr() { return get_static_field<"snmpRspGenErr", jint>(); }
	static jint snmpRspNoAccess() { return get_static_field<"snmpRspNoAccess", jint>(); }
	static jint snmpRspWrongType() { return get_static_field<"snmpRspWrongType", jint>(); }
	static jint snmpRspWrongLength() { return get_static_field<"snmpRspWrongLength", jint>(); }
	static jint snmpRspWrongEncoding() { return get_static_field<"snmpRspWrongEncoding", jint>(); }
	static jint snmpRspWrongValue() { return get_static_field<"snmpRspWrongValue", jint>(); }
	static jint snmpRspNoCreation() { return get_static_field<"snmpRspNoCreation", jint>(); }
	static jint snmpRspInconsistentValue() { return get_static_field<"snmpRspInconsistentValue", jint>(); }
	static jint snmpRspResourceUnavailable() { return get_static_field<"snmpRspResourceUnavailable", jint>(); }
	static jint snmpRspCommitFailed() { return get_static_field<"snmpRspCommitFailed", jint>(); }
	static jint snmpRspUndoFailed() { return get_static_field<"snmpRspUndoFailed", jint>(); }
	static jint snmpRspAuthorizationError() { return get_static_field<"snmpRspAuthorizationError", jint>(); }
	static jint snmpRspNotWritable() { return get_static_field<"snmpRspNotWritable", jint>(); }
	static jint snmpRspInconsistentName() { return get_static_field<"snmpRspInconsistentName", jint>(); }
	static jint noSuchView() { return get_static_field<"noSuchView", jint>(); }
	static jint noSuchContext() { return get_static_field<"noSuchContext", jint>(); }
	static jint noGroupName() { return get_static_field<"noGroupName", jint>(); }
	static jint notInView() { return get_static_field<"notInView", jint>(); }
	static jint snmpReqTimeout() { return get_static_field<"snmpReqTimeout", jint>(); }
	static jint snmpReqAborted() { return get_static_field<"snmpReqAborted", jint>(); }
	static jint snmpRspDecodingError() { return get_static_field<"snmpRspDecodingError", jint>(); }
	static jint snmpReqEncodingError() { return get_static_field<"snmpReqEncodingError", jint>(); }
	static jint snmpReqPacketOverflow() { return get_static_field<"snmpReqPacketOverflow", jint>(); }
	static jint snmpRspEndOfTable() { return get_static_field<"snmpRspEndOfTable", jint>(); }
	static jint snmpReqRefireAfterVbFix() { return get_static_field<"snmpReqRefireAfterVbFix", jint>(); }
	static jint snmpReqHandleTooBig() { return get_static_field<"snmpReqHandleTooBig", jint>(); }
	static jint snmpReqTooBigImpossible() { return get_static_field<"snmpReqTooBigImpossible", jint>(); }
	static jint snmpReqInternalError() { return get_static_field<"snmpReqInternalError", jint>(); }
	static jint snmpReqSocketIOError() { return get_static_field<"snmpReqSocketIOError", jint>(); }
	static jint snmpReqUnknownError() { return get_static_field<"snmpReqUnknownError", jint>(); }
	static jint snmpWrongSnmpVersion() { return get_static_field<"snmpWrongSnmpVersion", jint>(); }
	static jint snmpUnknownPrincipal() { return get_static_field<"snmpUnknownPrincipal", jint>(); }
	static jint snmpAuthNotSupported() { return get_static_field<"snmpAuthNotSupported", jint>(); }
	static jint snmpPrivNotSupported() { return get_static_field<"snmpPrivNotSupported", jint>(); }
	static jint snmpBadSecurityLevel() { return get_static_field<"snmpBadSecurityLevel", jint>(); }
	static jint snmpUsmBadEngineId() { return get_static_field<"snmpUsmBadEngineId", jint>(); }
	static jint snmpUsmInvalidTimeliness() { return get_static_field<"snmpUsmInvalidTimeliness", jint>(); }
	static jint snmpV1SecurityModel() { return get_static_field<"snmpV1SecurityModel", jint>(); }
	static jint snmpV2SecurityModel() { return get_static_field<"snmpV2SecurityModel", jint>(); }
	static jint snmpUsmSecurityModel() { return get_static_field<"snmpUsmSecurityModel", jint>(); }
	static jint snmpV1MsgProcessingModel() { return get_static_field<"snmpV1MsgProcessingModel", jint>(); }
	static jint snmpV2MsgProcessingModel() { return get_static_field<"snmpV2MsgProcessingModel", jint>(); }
	static jint snmpV3MsgProcessingModel() { return get_static_field<"snmpV3MsgProcessingModel", jint>(); }
	static jint snmpV1AccessControlModel() { return get_static_field<"snmpV1AccessControlModel", jint>(); }
	static jint snmpV2AccessControlModel() { return get_static_field<"snmpV2AccessControlModel", jint>(); }
	static jint snmpV3AccessControlModel() { return get_static_field<"snmpV3AccessControlModel", jint>(); }


protected:

	SnmpDefinitions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPDEFINITIONS
