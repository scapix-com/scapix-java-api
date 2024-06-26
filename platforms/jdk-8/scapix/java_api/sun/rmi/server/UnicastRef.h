// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/rmi/server/RemoteRef.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTREF_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class UnicastRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::UnicastRef>
{
	static constexpr fixed_string class_name = "sun/rmi/server/UnicastRef";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::rmi::server::RemoteRef>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTREF)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/rmi/server/Operation.h>
#include <scapix/java_api/java/rmi/server/RemoteCall.h>
#include <scapix/java_api/java/rmi/server/RemoteObject.h>
#include <scapix/java_api/sun/rmi/runtime/Log.h>
#include <scapix/java_api/sun/rmi/transport/LiveRef.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::server::UnicastRef : public jni::object_base<"sun/rmi/server/UnicastRef",
	java::lang::Object,
	java::rmi::server::RemoteRef>
{
public:

	static jni::ref<sun::rmi::runtime::Log> clientRefLog() { return get_static_field<"clientRefLog", jni::ref<sun::rmi::runtime::Log>>(); }
	static jni::ref<sun::rmi::runtime::Log> clientCallLog() { return get_static_field<"clientCallLog", jni::ref<sun::rmi::runtime::Log>>(); }

	static jni::ref<sun::rmi::server::UnicastRef> new_object() { return base_::new_object(); }
	static jni::ref<sun::rmi::server::UnicastRef> new_object(jni::ref<sun::rmi::transport::LiveRef> p1) { return base_::new_object(p1); }
	jni::ref<sun::rmi::transport::LiveRef> getLiveRef() { return call_method<"getLiveRef", jni::ref<sun::rmi::transport::LiveRef>>(); }
	jni::ref<java::lang::Object> invoke(jni::ref<java::rmi::Remote> p1, jni::ref<java::lang::reflect::Method> p2, jni::ref<jni::array<java::lang::Object>> p3, jlong p4) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<java::rmi::server::RemoteCall> newCall(jni::ref<java::rmi::server::RemoteObject> p1, jni::ref<jni::array<java::rmi::server::Operation>> p2, jint p3, jlong p4) { return call_method<"newCall", jni::ref<java::rmi::server::RemoteCall>>(p1, p2, p3, p4); }
	void invoke(jni::ref<java::rmi::server::RemoteCall> p1) { return call_method<"invoke", void>(p1); }
	void done(jni::ref<java::rmi::server::RemoteCall> p1) { return call_method<"done", void>(p1); }
	jni::ref<java::lang::String> getRefClass(jni::ref<java::io::ObjectOutput> p1) { return call_method<"getRefClass", jni::ref<java::lang::String>>(p1); }
	void writeExternal(jni::ref<java::io::ObjectOutput> p1) { return call_method<"writeExternal", void>(p1); }
	void readExternal(jni::ref<java::io::ObjectInput> p1) { return call_method<"readExternal", void>(p1); }
	jni::ref<java::lang::String> remoteToString() { return call_method<"remoteToString", jni::ref<java::lang::String>>(); }
	jint remoteHashCode() { return call_method<"remoteHashCode", jint>(); }
	jboolean remoteEquals(jni::ref<java::rmi::server::RemoteRef> p1) { return call_method<"remoteEquals", jboolean>(p1); }

protected:

	UnicastRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTREF
