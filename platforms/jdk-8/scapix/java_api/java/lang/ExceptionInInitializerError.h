// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/LinkageError.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_EXCEPTIONININITIALIZERERROR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_EXCEPTIONININITIALIZERERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ExceptionInInitializerError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ExceptionInInitializerError>
{
	static constexpr fixed_string class_name = "java/lang/ExceptionInInitializerError";
	using base_classes = std::tuple<scapix::java_api::java::lang::LinkageError>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_EXCEPTIONININITIALIZERERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_EXCEPTIONININITIALIZERERROR)
#define SCAPIX_JAVA_API_JAVA_LANG_EXCEPTIONININITIALIZERERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ExceptionInInitializerError : public jni::object_base<"java/lang/ExceptionInInitializerError",
	java::lang::LinkageError>
{
public:

	static jni::ref<java::lang::ExceptionInInitializerError> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::ExceptionInInitializerError> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::ExceptionInInitializerError> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Throwable> getException() { return call_method<"getException", jni::ref<java::lang::Throwable>>(); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	ExceptionInInitializerError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_EXCEPTIONININITIALIZERERROR
