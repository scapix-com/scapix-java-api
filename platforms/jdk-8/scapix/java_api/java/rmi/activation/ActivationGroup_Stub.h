// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/RemoteStub.h>
#include <scapix/java_api/java/rmi/activation/ActivationInstantiator.h>
#include <scapix/java_api/java/rmi/Remote.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUP_STUB_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUP_STUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::activation { class ActivationGroup_Stub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::activation::ActivationGroup_Stub>
{
	static constexpr fixed_string class_name = "java/rmi/activation/ActivationGroup_Stub";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::RemoteStub, scapix::java_api::java::rmi::activation::ActivationInstantiator, scapix::java_api::java::rmi::Remote>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUP_STUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUP_STUB)
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUP_STUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/MarshalledObject.h>
#include <scapix/java_api/java/rmi/activation/ActivationDesc.h>
#include <scapix/java_api/java/rmi/activation/ActivationID.h>
#include <scapix/java_api/java/rmi/server/RemoteRef.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::activation::ActivationGroup_Stub : public jni::object_base<"java/rmi/activation/ActivationGroup_Stub",
	java::rmi::server::RemoteStub,
	java::rmi::activation::ActivationInstantiator,
	java::rmi::Remote>
{
public:

	static jni::ref<java::rmi::activation::ActivationGroup_Stub> new_object(jni::ref<java::rmi::server::RemoteRef> p1) { return base_::new_object(p1); }
	jni::ref<java::rmi::MarshalledObject> newInstance(jni::ref<java::rmi::activation::ActivationID> p1, jni::ref<java::rmi::activation::ActivationDesc> p2) { return call_method<"newInstance", jni::ref<java::rmi::MarshalledObject>>(p1, p2); }

protected:

	ActivationGroup_Stub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUP_STUB
