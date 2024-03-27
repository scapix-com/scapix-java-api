// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/transport/CorbaConnectionCacheBase.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/OutboundConnectionCache.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBAOUTBOUNDCONNECTIONCACHEIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBAOUTBOUNDCONNECTIONCACHEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::transport { class CorbaOutboundConnectionCacheImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::transport::CorbaOutboundConnectionCacheImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/transport/CorbaOutboundConnectionCacheImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::transport::CorbaConnectionCacheBase, scapix::java_api::com::sun::corba::se::pept::transport::OutboundConnectionCache>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBAOUTBOUNDCONNECTIONCACHEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBAOUTBOUNDCONNECTIONCACHEIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBAOUTBOUNDCONNECTIONCACHEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/transport/Connection.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::transport::CorbaOutboundConnectionCacheImpl : public jni::object_base<"com/sun/corba/se/impl/transport/CorbaOutboundConnectionCacheImpl",
	com::sun::corba::se::impl::transport::CorbaConnectionCacheBase,
	com::sun::corba::se::pept::transport::OutboundConnectionCache>
{
public:

	static jni::ref<com::sun::corba::se::impl::transport::CorbaOutboundConnectionCacheImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::corba::se::pept::transport::Connection> get(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1) { return call_method<"get", jni::ref<com::sun::corba::se::pept::transport::Connection>>(p1); }
	void put(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1, jni::ref<com::sun::corba::se::pept::transport::Connection> p2) { return call_method<"put", void>(p1, p2); }
	void remove(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1) { return call_method<"remove", void>(p1); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }

protected:

	CorbaOutboundConnectionCacheImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBAOUTBOUNDCONNECTIONCACHEIMPL