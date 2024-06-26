// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/UnicastRemoteObject.h>
#include <scapix/java_api/java/rmi/activation/ActivationMonitor.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONMONITORIMPL_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONMONITORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class Activation_ActivationMonitorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::Activation_ActivationMonitorImpl>
{
	static constexpr fixed_string class_name = "sun/rmi/server/Activation$ActivationMonitorImpl";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::UnicastRemoteObject, scapix::java_api::java::rmi::activation::ActivationMonitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONMONITORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONMONITORIMPL)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONMONITORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/MarshalledObject.h>
#include <scapix/java_api/java/rmi/activation/ActivationGroupID.h>
#include <scapix/java_api/java/rmi/activation/ActivationID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::Activation_ActivationMonitorImpl : public jni::object_base<"sun/rmi/server/Activation$ActivationMonitorImpl",
	java::rmi::server::UnicastRemoteObject,
	java::rmi::activation::ActivationMonitor>
{
public:

	void inactiveObject(jni::ref<java::rmi::activation::ActivationID> p1) { return call_method<"inactiveObject", void>(p1); }
	void activeObject(jni::ref<java::rmi::activation::ActivationID> p1, jni::ref<java::rmi::MarshalledObject> p2) { return call_method<"activeObject", void>(p1, p2); }
	void inactiveGroup(jni::ref<java::rmi::activation::ActivationGroupID> p1, jlong p2) { return call_method<"inactiveGroup", void>(p1, p2); }

protected:

	Activation_ActivationMonitorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONMONITORIMPL
