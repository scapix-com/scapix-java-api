// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDAFORM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDAFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class LambdaForm; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::LambdaForm>
{
	static constexpr fixed_string class_name = "java/lang/invoke/LambdaForm";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDAFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDAFORM)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDAFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::LambdaForm : public jni::object_base<"java/lang/invoke/LambdaForm",
	java::lang::Object>
{
public:

	static jint VOID_RESULT() { return get_static_field<"VOID_RESULT", jint>(); }
	static jint LAST_RESULT() { return get_static_field<"LAST_RESULT", jint>(); }

	void prepare() { return call_method<"prepare", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::invoke::LambdaForm> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<java::lang::String> basicTypeSignature(jni::ref<java::lang::invoke::MethodType> p1) { return call_static_method<"basicTypeSignature", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> shortenSignature(jni::ref<java::lang::String> p1) { return call_static_method<"shortenSignature", jni::ref<java::lang::String>>(p1); }

protected:

	LambdaForm(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAMBDAFORM