// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/activation/ActivationException.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_UNKNOWNOBJECTEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_UNKNOWNOBJECTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::activation { class UnknownObjectException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::activation::UnknownObjectException>
{
	static constexpr fixed_string class_name = "java/rmi/activation/UnknownObjectException";
	using base_classes = std::tuple<scapix::java_api::java::rmi::activation::ActivationException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_UNKNOWNOBJECTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_UNKNOWNOBJECTEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_UNKNOWNOBJECTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::activation::UnknownObjectException : public jni::object_base<"java/rmi/activation/UnknownObjectException",
	java::rmi::activation::ActivationException>
{
public:

	static jni::ref<java::rmi::activation::UnknownObjectException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	UnknownObjectException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_ACTIVATION_UNKNOWNOBJECTEXCEPTION