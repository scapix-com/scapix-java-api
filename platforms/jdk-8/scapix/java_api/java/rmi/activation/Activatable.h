// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/RemoteServer.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATABLE_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::activation { class Activatable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::activation::Activatable>
{
	static constexpr fixed_string class_name = "java/rmi/activation/Activatable";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::RemoteServer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATABLE)
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/MarshalledObject.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/rmi/activation/ActivationDesc.h>
#include <scapix/java_api/java/rmi/activation/ActivationID.h>
#include <scapix/java_api/java/rmi/server/RMIClientSocketFactory.h>
#include <scapix/java_api/java/rmi/server/RMIServerSocketFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::activation::Activatable : public jni::object_base<"java/rmi/activation/Activatable",
	java::rmi::server::RemoteServer>
{
public:

	static jni::ref<java::rmi::Remote> register_(jni::ref<java::rmi::activation::ActivationDesc> p1) { return call_static_method<"register", jni::ref<java::rmi::Remote>>(p1); }
	static jboolean inactive(jni::ref<java::rmi::activation::ActivationID> p1) { return call_static_method<"inactive", jboolean>(p1); }
	static void unregister(jni::ref<java::rmi::activation::ActivationID> p1) { return call_static_method<"unregister", void>(p1); }
	static jni::ref<java::rmi::activation::ActivationID> exportObject(jni::ref<java::rmi::Remote> p1, jni::ref<java::lang::String> p2, jni::ref<java::rmi::MarshalledObject> p3, jboolean p4, jint p5) { return call_static_method<"exportObject", jni::ref<java::rmi::activation::ActivationID>>(p1, p2, p3, p4, p5); }
	static jni::ref<java::rmi::activation::ActivationID> exportObject(jni::ref<java::rmi::Remote> p1, jni::ref<java::lang::String> p2, jni::ref<java::rmi::MarshalledObject> p3, jboolean p4, jint p5, jni::ref<java::rmi::server::RMIClientSocketFactory> p6, jni::ref<java::rmi::server::RMIServerSocketFactory> p7) { return call_static_method<"exportObject", jni::ref<java::rmi::activation::ActivationID>>(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<java::rmi::Remote> exportObject(jni::ref<java::rmi::Remote> p1, jni::ref<java::rmi::activation::ActivationID> p2, jint p3) { return call_static_method<"exportObject", jni::ref<java::rmi::Remote>>(p1, p2, p3); }
	static jni::ref<java::rmi::Remote> exportObject(jni::ref<java::rmi::Remote> p1, jni::ref<java::rmi::activation::ActivationID> p2, jint p3, jni::ref<java::rmi::server::RMIClientSocketFactory> p4, jni::ref<java::rmi::server::RMIServerSocketFactory> p5) { return call_static_method<"exportObject", jni::ref<java::rmi::Remote>>(p1, p2, p3, p4, p5); }
	static jboolean unexportObject(jni::ref<java::rmi::Remote> p1, jboolean p2) { return call_static_method<"unexportObject", jboolean>(p1, p2); }

protected:

	Activatable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATABLE