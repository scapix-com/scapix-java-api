// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_CONNECTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_CONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::pept::transport { class Connection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::pept::transport::Connection>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/pept/transport/Connection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_CONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_CONNECTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_CONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/encoding/InputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/OutputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/Acceptor.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ConnectionCache.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/EventHandler.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::pept::transport::Connection : public jni::object_base<"com/sun/corba/se/pept/transport/Connection",
	java::lang::Object>
{
public:

	jboolean shouldRegisterReadEvent() { return call_method<"shouldRegisterReadEvent", jboolean>(); }
	jboolean shouldRegisterServerReadEvent() { return call_method<"shouldRegisterServerReadEvent", jboolean>(); }
	jboolean read() { return call_method<"read", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<com::sun::corba::se::pept::transport::Acceptor> getAcceptor() { return call_method<"getAcceptor", jni::ref<com::sun::corba::se::pept::transport::Acceptor>>(); }
	jni::ref<com::sun::corba::se::pept::transport::ContactInfo> getContactInfo() { return call_method<"getContactInfo", jni::ref<com::sun::corba::se::pept::transport::ContactInfo>>(); }
	jni::ref<com::sun::corba::se::pept::transport::EventHandler> getEventHandler() { return call_method<"getEventHandler", jni::ref<com::sun::corba::se::pept::transport::EventHandler>>(); }
	jboolean isServer() { return call_method<"isServer", jboolean>(); }
	jboolean isBusy() { return call_method<"isBusy", jboolean>(); }
	jlong getTimeStamp() { return call_method<"getTimeStamp", jlong>(); }
	void setTimeStamp(jlong p1) { return call_method<"setTimeStamp", void>(p1); }
	void setState(jni::ref<java::lang::String> p1) { return call_method<"setState", void>(p1); }
	void writeLock() { return call_method<"writeLock", void>(); }
	void writeUnlock() { return call_method<"writeUnlock", void>(); }
	void sendWithoutLock(jni::ref<com::sun::corba::se::pept::encoding::OutputObject> p1) { return call_method<"sendWithoutLock", void>(p1); }
	void registerWaiter(jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p1) { return call_method<"registerWaiter", void>(p1); }
	jni::ref<com::sun::corba::se::pept::encoding::InputObject> waitForResponse(jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p1) { return call_method<"waitForResponse", jni::ref<com::sun::corba::se::pept::encoding::InputObject>>(p1); }
	void unregisterWaiter(jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p1) { return call_method<"unregisterWaiter", void>(p1); }
	void setConnectionCache(jni::ref<com::sun::corba::se::pept::transport::ConnectionCache> p1) { return call_method<"setConnectionCache", void>(p1); }
	jni::ref<com::sun::corba::se::pept::transport::ConnectionCache> getConnectionCache() { return call_method<"getConnectionCache", jni::ref<com::sun::corba::se::pept::transport::ConnectionCache>>(); }

protected:

	Connection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_PEPT_TRANSPORT_CONNECTION