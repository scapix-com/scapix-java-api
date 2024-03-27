// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/rmi/server/UnicastRef.h>
#include <scapix/java_api/java/rmi/server/ServerRef.h>
#include <scapix/java_api/sun/rmi/server/Dispatcher.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class UnicastServerRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::UnicastServerRef>
{
	static constexpr fixed_string class_name = "sun/rmi/server/UnicastServerRef";
	using base_classes = std::tuple<scapix::java_api::sun::rmi::server::UnicastRef, scapix::java_api::java::rmi::server::ServerRef, scapix::java_api::sun::rmi::server::Dispatcher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/rmi/server/RemoteCall.h>
#include <scapix/java_api/java/rmi/server/RemoteStub.h>
#include <scapix/java_api/sun/misc/ObjectInputFilter.h>
#include <scapix/java_api/sun/rmi/runtime/Log.h>
#include <scapix/java_api/sun/rmi/transport/LiveRef.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::server::UnicastServerRef : public jni::object_base<"sun/rmi/server/UnicastServerRef",
	sun::rmi::server::UnicastRef,
	java::rmi::server::ServerRef,
	sun::rmi::server::Dispatcher>
{
public:

	static jboolean logCalls() { return get_static_field<"logCalls", jboolean>(); }
	static jni::ref<sun::rmi::runtime::Log> callLog() { return get_static_field<"callLog", jni::ref<sun::rmi::runtime::Log>>(); }

	static jni::ref<sun::rmi::server::UnicastServerRef> new_object() { return base_::new_object(); }
	static jni::ref<sun::rmi::server::UnicastServerRef> new_object(jni::ref<sun::rmi::transport::LiveRef> p1) { return base_::new_object(p1); }
	static jni::ref<sun::rmi::server::UnicastServerRef> new_object(jni::ref<sun::rmi::transport::LiveRef> p1, jni::ref<sun::misc::ObjectInputFilter> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::rmi::server::UnicastServerRef> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::rmi::server::UnicastServerRef> new_object(jboolean p1) { return base_::new_object(p1); }
	jni::ref<java::rmi::server::RemoteStub> exportObject(jni::ref<java::rmi::Remote> p1, jni::ref<java::lang::Object> p2) { return call_method<"exportObject", jni::ref<java::rmi::server::RemoteStub>>(p1, p2); }
	jni::ref<java::rmi::Remote> exportObject(jni::ref<java::rmi::Remote> p1, jni::ref<java::lang::Object> p2, jboolean p3) { return call_method<"exportObject", jni::ref<java::rmi::Remote>>(p1, p2, p3); }
	jni::ref<java::lang::String> getClientHost() { return call_method<"getClientHost", jni::ref<java::lang::String>>(); }
	void setSkeleton(jni::ref<java::rmi::Remote> p1) { return call_method<"setSkeleton", void>(p1); }
	void dispatch(jni::ref<java::rmi::Remote> p1, jni::ref<java::rmi::server::RemoteCall> p2) { return call_method<"dispatch", void>(p1, p2); }
	static void clearStackTraces(jni::ref<java::lang::Throwable> p1) { return call_static_method<"clearStackTraces", void>(p1); }
	jni::ref<java::lang::String> getRefClass(jni::ref<java::io::ObjectOutput> p1) { return call_method<"getRefClass", jni::ref<java::lang::String>>(p1); }
	void writeExternal(jni::ref<java::io::ObjectOutput> p1) { return call_method<"writeExternal", void>(p1); }
	void readExternal(jni::ref<java::io::ObjectInput> p1) { return call_method<"readExternal", void>(p1); }

protected:

	UnicastServerRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF
