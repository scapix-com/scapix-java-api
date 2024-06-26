// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Externalizable.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_SERVER_REMOTEREF_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_REMOTEREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::server { class RemoteRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::server::RemoteRef>
{
	static constexpr fixed_string class_name = "java/rmi/server/RemoteRef";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Externalizable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_REMOTEREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_SERVER_REMOTEREF)
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_REMOTEREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/rmi/server/Operation.h>
#include <scapix/java_api/java/rmi/server/RemoteCall.h>
#include <scapix/java_api/java/rmi/server/RemoteObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::server::RemoteRef : public jni::object_base<"java/rmi/server/RemoteRef",
	java::lang::Object,
	java::io::Externalizable>
{
public:

	static jlong serialVersionUID() { return get_static_field<"serialVersionUID", jlong>(); }
	static jni::ref<java::lang::String> packagePrefix() { return get_static_field<"packagePrefix", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::Object> invoke(jni::ref<java::rmi::Remote> p1, jni::ref<java::lang::reflect::Method> p2, jni::ref<jni::array<java::lang::Object>> p3, jlong p4) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<java::rmi::server::RemoteCall> newCall(jni::ref<java::rmi::server::RemoteObject> p1, jni::ref<jni::array<java::rmi::server::Operation>> p2, jint p3, jlong p4) { return call_method<"newCall", jni::ref<java::rmi::server::RemoteCall>>(p1, p2, p3, p4); }
	void invoke(jni::ref<java::rmi::server::RemoteCall> p1) { return call_method<"invoke", void>(p1); }
	void done(jni::ref<java::rmi::server::RemoteCall> p1) { return call_method<"done", void>(p1); }
	jni::ref<java::lang::String> getRefClass(jni::ref<java::io::ObjectOutput> p1) { return call_method<"getRefClass", jni::ref<java::lang::String>>(p1); }
	jint remoteHashCode() { return call_method<"remoteHashCode", jint>(); }
	jboolean remoteEquals(jni::ref<java::rmi::server::RemoteRef> p1) { return call_method<"remoteEquals", jboolean>(p1); }
	jni::ref<java::lang::String> remoteToString() { return call_method<"remoteToString", jni::ref<java::lang::String>>(); }

protected:

	RemoteRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_REMOTEREF
