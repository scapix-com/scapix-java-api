// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_PROTOCOL_MESSAGEMEDIATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_PROTOCOL_MESSAGEMEDIATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::pept::protocol { class MessageMediator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::pept::protocol::MessageMediator>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/pept/protocol/MessageMediator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_PROTOCOL_MESSAGEMEDIATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_PROTOCOL_MESSAGEMEDIATOR)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_PROTOCOL_MESSAGEMEDIATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/broker/Broker.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/InputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/OutputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/Connection.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::pept::protocol::MessageMediator : public jni::object_base<"com/sun/corba/se/pept/protocol/MessageMediator",
	java::lang::Object>
{
public:

	jni::ref<com::sun::corba::se::pept::broker::Broker> getBroker() { return call_method<"getBroker", jni::ref<com::sun::corba::se::pept::broker::Broker>>(); }
	jni::ref<com::sun::corba::se::pept::transport::ContactInfo> getContactInfo() { return call_method<"getContactInfo", jni::ref<com::sun::corba::se::pept::transport::ContactInfo>>(); }
	jni::ref<com::sun::corba::se::pept::transport::Connection> getConnection() { return call_method<"getConnection", jni::ref<com::sun::corba::se::pept::transport::Connection>>(); }
	void initializeMessage() { return call_method<"initializeMessage", void>(); }
	void finishSendingRequest() { return call_method<"finishSendingRequest", void>(); }
	jni::ref<com::sun::corba::se::pept::encoding::InputObject> waitForResponse() { return call_method<"waitForResponse", jni::ref<com::sun::corba::se::pept::encoding::InputObject>>(); }
	void setOutputObject(jni::ref<com::sun::corba::se::pept::encoding::OutputObject> p1) { return call_method<"setOutputObject", void>(p1); }
	jni::ref<com::sun::corba::se::pept::encoding::OutputObject> getOutputObject() { return call_method<"getOutputObject", jni::ref<com::sun::corba::se::pept::encoding::OutputObject>>(); }
	void setInputObject(jni::ref<com::sun::corba::se::pept::encoding::InputObject> p1) { return call_method<"setInputObject", void>(p1); }
	jni::ref<com::sun::corba::se::pept::encoding::InputObject> getInputObject() { return call_method<"getInputObject", jni::ref<com::sun::corba::se::pept::encoding::InputObject>>(); }

protected:

	MessageMediator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_PROTOCOL_MESSAGEMEDIATOR
