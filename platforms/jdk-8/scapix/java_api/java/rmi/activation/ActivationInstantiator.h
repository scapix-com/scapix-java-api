// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/rmi/Remote.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONINSTANTIATOR_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONINSTANTIATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::activation { class ActivationInstantiator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::activation::ActivationInstantiator>
{
	static constexpr fixed_string class_name = "java/rmi/activation/ActivationInstantiator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::rmi::Remote>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONINSTANTIATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONINSTANTIATOR)
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONINSTANTIATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/MarshalledObject.h>
#include <scapix/java_api/java/rmi/activation/ActivationDesc.h>
#include <scapix/java_api/java/rmi/activation/ActivationID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::activation::ActivationInstantiator : public jni::object_base<"java/rmi/activation/ActivationInstantiator",
	java::lang::Object,
	java::rmi::Remote>
{
public:

	jni::ref<java::rmi::MarshalledObject> newInstance(jni::ref<java::rmi::activation::ActivationID> p1, jni::ref<java::rmi::activation::ActivationDesc> p2) { return call_method<"newInstance", jni::ref<java::rmi::MarshalledObject>>(p1, p2); }

protected:

	ActivationInstantiator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONINSTANTIATOR