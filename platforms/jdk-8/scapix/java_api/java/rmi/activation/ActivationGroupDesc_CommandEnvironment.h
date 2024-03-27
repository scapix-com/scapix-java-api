// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUPDESC_COMMANDENVIRONMENT_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUPDESC_COMMANDENVIRONMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::activation { class ActivationGroupDesc_CommandEnvironment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::activation::ActivationGroupDesc_CommandEnvironment>
{
	static constexpr fixed_string class_name = "java/rmi/activation/ActivationGroupDesc$CommandEnvironment";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUPDESC_COMMANDENVIRONMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUPDESC_COMMANDENVIRONMENT)
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUPDESC_COMMANDENVIRONMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::activation::ActivationGroupDesc_CommandEnvironment : public jni::object_base<"java/rmi/activation/ActivationGroupDesc$CommandEnvironment",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::rmi::activation::ActivationGroupDesc_CommandEnvironment> new_object(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getCommandPath() { return call_method<"getCommandPath", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getCommandOptions() { return call_method<"getCommandOptions", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ActivationGroupDesc_CommandEnvironment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONGROUPDESC_COMMANDENVIRONMENT
