// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPEER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpPeer>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPEER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpParams.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpPeer : public jni::object_base<"com/sun/jmx/snmp/SnmpPeer",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jint defaultSnmpRequestPktSize() { return get_static_field<"defaultSnmpRequestPktSize", jint>(); }
	static jint defaultSnmpResponsePktSize() { return get_static_field<"defaultSnmpResponsePktSize", jint>(); }

	static jni::ref<com::sun::jmx::snmp::SnmpPeer> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpPeer> new_object(jni::ref<java::net::InetAddress> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::jmx::snmp::SnmpPeer> new_object(jni::ref<java::net::InetAddress> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpPeer> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	void useIPAddress(jni::ref<java::lang::String> p1) { return call_method<"useIPAddress", void>(p1); }
	jni::ref<java::lang::String> ipAddressInUse() { return call_method<"ipAddressInUse", jni::ref<java::lang::String>>(); }
	void useAddressList(jni::ref<jni::array<java::net::InetAddress>> p1) { return call_method<"useAddressList", void>(p1); }
	void useNextAddress() { return call_method<"useNextAddress", void>(); }
	jboolean allowSnmpSets() { return call_method<"allowSnmpSets", jboolean>(); }
	jni::ref<jni::array<java::net::InetAddress>> getDestAddrList() { return call_method<"getDestAddrList", jni::ref<jni::array<java::net::InetAddress>>>(); }
	jni::ref<java::net::InetAddress> getDestAddr() { return call_method<"getDestAddr", jni::ref<java::net::InetAddress>>(); }
	jint getDestPort() { return call_method<"getDestPort", jint>(); }
	void setDestPort(jint p1) { return call_method<"setDestPort", void>(p1); }
	jint getTimeout() { return call_method<"getTimeout", jint>(); }
	void setTimeout(jint p1) { return call_method<"setTimeout", void>(p1); }
	jint getMaxTries() { return call_method<"getMaxTries", jint>(); }
	void setMaxTries(jint p1) { return call_method<"setMaxTries", void>(p1); }
	jni::ref<java::lang::String> getDevName() { return call_method<"getDevName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getVarBindLimit() { return call_method<"getVarBindLimit", jint>(); }
	void setVarBindLimit(jint p1) { return call_method<"setVarBindLimit", void>(p1); }
	void setParams(jni::ref<com::sun::jmx::snmp::SnmpParams> p1) { return call_method<"setParams", void>(p1); }
	jni::ref<com::sun::jmx::snmp::SnmpParams> getParams() { return call_method<"getParams", jni::ref<com::sun::jmx::snmp::SnmpParams>>(); }
	jint getMaxSnmpPktSize() { return call_method<"getMaxSnmpPktSize", jint>(); }
	void setMaxSnmpPktSize(jint p1) { return call_method<"setMaxSnmpPktSize", void>(p1); }
	jlong getMinRtt() { return call_method<"getMinRtt", jlong>(); }
	jlong getMaxRtt() { return call_method<"getMaxRtt", jlong>(); }
	jlong getAvgRtt() { return call_method<"getAvgRtt", jlong>(); }

protected:

	SnmpPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPEER
