// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/transport/CorbaContactInfoBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SHAREDCDRCONTACTINFOIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SHAREDCDRCONTACTINFOIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::transport { class SharedCDRContactInfoImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::transport::SharedCDRContactInfoImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/transport/SharedCDRContactInfoImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::transport::CorbaContactInfoBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SHAREDCDRCONTACTINFOIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SHAREDCDRCONTACTINFOIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SHAREDCDRCONTACTINFOIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/broker/Broker.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/OutputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/ClientRequestDispatcher.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/Connection.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfoList.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::transport::SharedCDRContactInfoImpl : public jni::object_base<"com/sun/corba/se/impl/transport/SharedCDRContactInfoImpl",
	com::sun::corba::se::impl::transport::CorbaContactInfoBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::transport::SharedCDRContactInfoImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoList> p2, jni::ref<com::sun::corba::se::spi::ior::IOR> p3, jshort p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher> getClientRequestDispatcher() { return call_method<"getClientRequestDispatcher", jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher>>(); }
	jboolean isConnectionBased() { return call_method<"isConnectionBased", jboolean>(); }
	jboolean shouldCacheConnection() { return call_method<"shouldCacheConnection", jboolean>(); }
	jni::ref<java::lang::String> getConnectionCacheType() { return call_method<"getConnectionCacheType", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::corba::se::pept::transport::Connection> createConnection() { return call_method<"createConnection", jni::ref<com::sun::corba::se::pept::transport::Connection>>(); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> createMessageMediator(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p2, jni::ref<com::sun::corba::se::pept::transport::Connection> p3, jni::ref<java::lang::String> p4, jboolean p5) { return call_method<"createMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::corba::se::pept::encoding::OutputObject> createOutputObject(jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p1) { return call_method<"createOutputObject", jni::ref<com::sun::corba::se::pept::encoding::OutputObject>>(p1); }
	jni::ref<java::lang::String> getMonitoringName() { return call_method<"getMonitoringName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SharedCDRContactInfoImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SHAREDCDRCONTACTINFOIMPL
