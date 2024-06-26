// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class LambdaConversionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::LambdaConversionException>
{
	static constexpr fixed_string class_name = "java/lang/invoke/LambdaConversionException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::LambdaConversionException : public jni::object_base<"java/lang/invoke/LambdaConversionException",
	java::lang::Exception>
{
public:

	static jni::ref<java::lang::invoke::LambdaConversionException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::invoke::LambdaConversionException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::invoke::LambdaConversionException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::lang::invoke::LambdaConversionException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::invoke::LambdaConversionException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2, jboolean p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	LambdaConversionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION
