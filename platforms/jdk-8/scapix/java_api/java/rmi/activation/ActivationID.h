// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONID_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::activation { class ActivationID; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::activation::ActivationID>
{
	static constexpr fixed_string class_name = "java/rmi/activation/ActivationID";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONID)
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONID

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/rmi/activation/Activator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::activation::ActivationID : public jni::object_base<"java/rmi/activation/ActivationID",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::rmi::activation::ActivationID> new_object(jni::ref<java::rmi::activation::Activator> p1) { return base_::new_object(p1); }
	jni::ref<java::rmi::Remote> activate(jboolean p1) { return call_method<"activate", jni::ref<java::rmi::Remote>>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	ActivationID(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_ACTIVATIONID