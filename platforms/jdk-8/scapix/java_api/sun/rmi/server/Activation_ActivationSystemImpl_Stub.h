// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/RemoteStub.h>
#include <scapix/java_api/java/rmi/activation/ActivationSystem.h>
#include <scapix/java_api/java/rmi/Remote.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONSYSTEMIMPL_STUB_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONSYSTEMIMPL_STUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class Activation_ActivationSystemImpl_Stub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::Activation_ActivationSystemImpl_Stub>
{
	static constexpr fixed_string class_name = "sun/rmi/server/Activation$ActivationSystemImpl_Stub";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::RemoteStub, scapix::java_api::java::rmi::activation::ActivationSystem, scapix::java_api::java::rmi::Remote>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONSYSTEMIMPL_STUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONSYSTEMIMPL_STUB)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONSYSTEMIMPL_STUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/activation/ActivationDesc.h>
#include <scapix/java_api/java/rmi/activation/ActivationGroupDesc.h>
#include <scapix/java_api/java/rmi/activation/ActivationGroupID.h>
#include <scapix/java_api/java/rmi/activation/ActivationID.h>
#include <scapix/java_api/java/rmi/activation/ActivationInstantiator.h>
#include <scapix/java_api/java/rmi/activation/ActivationMonitor.h>
#include <scapix/java_api/java/rmi/server/RemoteRef.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::server::Activation_ActivationSystemImpl_Stub : public jni::object_base<"sun/rmi/server/Activation$ActivationSystemImpl_Stub",
	java::rmi::server::RemoteStub,
	java::rmi::activation::ActivationSystem,
	java::rmi::Remote>
{
public:

	static jni::ref<sun::rmi::server::Activation_ActivationSystemImpl_Stub> new_object(jni::ref<java::rmi::server::RemoteRef> p1) { return base_::new_object(p1); }
	jni::ref<java::rmi::activation::ActivationMonitor> activeGroup(jni::ref<java::rmi::activation::ActivationGroupID> p1, jni::ref<java::rmi::activation::ActivationInstantiator> p2, jlong p3) { return call_method<"activeGroup", jni::ref<java::rmi::activation::ActivationMonitor>>(p1, p2, p3); }
	jni::ref<java::rmi::activation::ActivationDesc> getActivationDesc(jni::ref<java::rmi::activation::ActivationID> p1) { return call_method<"getActivationDesc", jni::ref<java::rmi::activation::ActivationDesc>>(p1); }
	jni::ref<java::rmi::activation::ActivationGroupDesc> getActivationGroupDesc(jni::ref<java::rmi::activation::ActivationGroupID> p1) { return call_method<"getActivationGroupDesc", jni::ref<java::rmi::activation::ActivationGroupDesc>>(p1); }
	jni::ref<java::rmi::activation::ActivationGroupID> registerGroup(jni::ref<java::rmi::activation::ActivationGroupDesc> p1) { return call_method<"registerGroup", jni::ref<java::rmi::activation::ActivationGroupID>>(p1); }
	jni::ref<java::rmi::activation::ActivationID> registerObject(jni::ref<java::rmi::activation::ActivationDesc> p1) { return call_method<"registerObject", jni::ref<java::rmi::activation::ActivationID>>(p1); }
	jni::ref<java::rmi::activation::ActivationDesc> setActivationDesc(jni::ref<java::rmi::activation::ActivationID> p1, jni::ref<java::rmi::activation::ActivationDesc> p2) { return call_method<"setActivationDesc", jni::ref<java::rmi::activation::ActivationDesc>>(p1, p2); }
	jni::ref<java::rmi::activation::ActivationGroupDesc> setActivationGroupDesc(jni::ref<java::rmi::activation::ActivationGroupID> p1, jni::ref<java::rmi::activation::ActivationGroupDesc> p2) { return call_method<"setActivationGroupDesc", jni::ref<java::rmi::activation::ActivationGroupDesc>>(p1, p2); }
	void shutdown() { return call_method<"shutdown", void>(); }
	void unregisterGroup(jni::ref<java::rmi::activation::ActivationGroupID> p1) { return call_method<"unregisterGroup", void>(p1); }
	void unregisterObject(jni::ref<java::rmi::activation::ActivationID> p1) { return call_method<"unregisterObject", void>(p1); }

protected:

	Activation_ActivationSystemImpl_Stub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTIVATIONSYSTEMIMPL_STUB
