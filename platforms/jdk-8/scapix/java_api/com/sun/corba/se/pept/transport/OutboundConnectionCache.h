// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ConnectionCache.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_OUTBOUNDCONNECTIONCACHE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_OUTBOUNDCONNECTIONCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::pept::transport { class OutboundConnectionCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::pept::transport::OutboundConnectionCache>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/pept/transport/OutboundConnectionCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::pept::transport::ConnectionCache>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_OUTBOUNDCONNECTIONCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_OUTBOUNDCONNECTIONCACHE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_OUTBOUNDCONNECTIONCACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/transport/Connection.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::pept::transport::OutboundConnectionCache : public jni::object_base<"com/sun/corba/se/pept/transport/OutboundConnectionCache",
	java::lang::Object,
	com::sun::corba::se::pept::transport::ConnectionCache>
{
public:

	jni::ref<com::sun::corba::se::pept::transport::Connection> get(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1) { return call_method<"get", jni::ref<com::sun::corba::se::pept::transport::Connection>>(p1); }
	void put(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1, jni::ref<com::sun::corba::se::pept::transport::Connection> p2) { return call_method<"put", void>(p1, p2); }
	void remove(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1) { return call_method<"remove", void>(p1); }

protected:

	OutboundConnectionCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_OUTBOUNDCONNECTIONCACHE