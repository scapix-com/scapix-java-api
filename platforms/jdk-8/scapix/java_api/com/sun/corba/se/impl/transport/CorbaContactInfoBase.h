// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfo.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::transport { class CorbaContactInfoBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::transport::CorbaContactInfoBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/transport/CorbaContactInfoBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::transport::CorbaContactInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/broker/Broker.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/InputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/OutputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/ClientRequestDispatcher.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/Connection.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfoList.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/OutboundConnectionCache.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/IIOPProfile.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::transport::CorbaContactInfoBase : public jni::object_base<"com/sun/corba/se/impl/transport/CorbaContactInfoBase",
	java::lang::Object,
	com::sun::corba::se::spi::transport::CorbaContactInfo>
{
public:

	static jni::ref<com::sun::corba::se::impl::transport::CorbaContactInfoBase> new_object() { return base_::new_object(); }
	jni::ref<com::sun::corba::se::pept::broker::Broker> getBroker() { return call_method<"getBroker", jni::ref<com::sun::corba::se::pept::broker::Broker>>(); }
	jni::ref<com::sun::corba::se::pept::transport::ContactInfoList> getContactInfoList() { return call_method<"getContactInfoList", jni::ref<com::sun::corba::se::pept::transport::ContactInfoList>>(); }
	jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher> getClientRequestDispatcher() { return call_method<"getClientRequestDispatcher", jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher>>(); }
	void setConnectionCache(jni::ref<com::sun::corba::se::pept::transport::OutboundConnectionCache> p1) { return call_method<"setConnectionCache", void>(p1); }
	jni::ref<com::sun::corba::se::pept::transport::OutboundConnectionCache> getConnectionCache() { return call_method<"getConnectionCache", jni::ref<com::sun::corba::se::pept::transport::OutboundConnectionCache>>(); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> createMessageMediator(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p2, jni::ref<com::sun::corba::se::pept::transport::Connection> p3, jni::ref<java::lang::String> p4, jboolean p5) { return call_method<"createMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> createMessageMediator(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::transport::Connection> p2) { return call_method<"createMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(p1, p2); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> finishCreatingMessageMediator(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::transport::Connection> p2, jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p3) { return call_method<"finishCreatingMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(p1, p2, p3); }
	jni::ref<com::sun::corba::se::pept::encoding::OutputObject> createOutputObject(jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p1) { return call_method<"createOutputObject", jni::ref<com::sun::corba::se::pept::encoding::OutputObject>>(p1); }
	jni::ref<com::sun::corba::se::pept::encoding::InputObject> createInputObject(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p2) { return call_method<"createInputObject", jni::ref<com::sun::corba::se::pept::encoding::InputObject>>(p1, p2); }
	jshort getAddressingDisposition() { return call_method<"getAddressingDisposition", jshort>(); }
	void setAddressingDisposition(jshort p1) { return call_method<"setAddressingDisposition", void>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getTargetIOR() { return call_method<"getTargetIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getEffectiveTargetIOR() { return call_method<"getEffectiveTargetIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	jni::ref<com::sun::corba::se::spi::ior::iiop::IIOPProfile> getEffectiveProfile() { return call_method<"getEffectiveProfile", jni::ref<com::sun::corba::se::spi::ior::iiop::IIOPProfile>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CorbaContactInfoBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOBASE
