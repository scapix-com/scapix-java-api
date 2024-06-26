// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSDATAGRAMSOCKETFACTORY_PORTHISTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSDATAGRAMSOCKETFACTORY_PORTHISTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::dns { class DNSDatagramSocketFactory_PortHistory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::dns::DNSDatagramSocketFactory_PortHistory>
{
	static constexpr fixed_string class_name = "com/sun/jndi/dns/DNSDatagramSocketFactory$PortHistory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSDATAGRAMSOCKETFACTORY_PORTHISTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSDATAGRAMSOCKETFACTORY_PORTHISTORY)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSDATAGRAMSOCKETFACTORY_PORTHISTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::dns::DNSDatagramSocketFactory_PortHistory : public jni::object_base<"com/sun/jndi/dns/DNSDatagramSocketFactory$PortHistory",
	java::lang::Object>
{
public:

	jboolean contains(jint p1) { return call_method<"contains", jboolean>(p1); }
	jboolean add(jint p1) { return call_method<"add", jboolean>(p1); }
	jboolean offer(jint p1) { return call_method<"offer", jboolean>(p1); }

protected:

	DNSDatagramSocketFactory_PortHistory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSDATAGRAMSOCKETFACTORY_PORTHISTORY
