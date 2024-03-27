// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/JMRuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RUNTIMEOPERATIONSEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RUNTIMEOPERATIONSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class RuntimeOperationsException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::RuntimeOperationsException>
{
	static constexpr fixed_string class_name = "javax/management/RuntimeOperationsException";
	using base_classes = std::tuple<scapix::java_api::javax::management::JMRuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RUNTIMEOPERATIONSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RUNTIMEOPERATIONSEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RUNTIMEOPERATIONSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/RuntimeException.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::RuntimeOperationsException : public jni::object_base<"javax/management/RuntimeOperationsException",
	javax::management::JMRuntimeException>
{
public:

	static jni::ref<javax::management::RuntimeOperationsException> new_object(jni::ref<java::lang::RuntimeException> p1) { return base_::new_object(p1); }
	static jni::ref<javax::management::RuntimeOperationsException> new_object(jni::ref<java::lang::RuntimeException> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::RuntimeException> getTargetException() { return call_method<"getTargetException", jni::ref<java::lang::RuntimeException>>(); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	RuntimeOperationsException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RUNTIMEOPERATIONSEXCEPTION
