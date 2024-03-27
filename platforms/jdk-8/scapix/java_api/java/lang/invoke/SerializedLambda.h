// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class SerializedLambda; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::SerializedLambda>
{
	static constexpr fixed_string class_name = "java/lang/invoke/SerializedLambda";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::SerializedLambda : public jni::object_base<"java/lang/invoke/SerializedLambda",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::lang::invoke::SerializedLambda> new_object(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jint p5, jni::ref<java::lang::String> p6, jni::ref<java::lang::String> p7, jni::ref<java::lang::String> p8, jni::ref<java::lang::String> p9, jni::ref<jni::array<java::lang::Object>> p10) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	jni::ref<java::lang::String> getCapturingClass() { return call_method<"getCapturingClass", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFunctionalInterfaceClass() { return call_method<"getFunctionalInterfaceClass", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFunctionalInterfaceMethodName() { return call_method<"getFunctionalInterfaceMethodName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFunctionalInterfaceMethodSignature() { return call_method<"getFunctionalInterfaceMethodSignature", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getImplClass() { return call_method<"getImplClass", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getImplMethodName() { return call_method<"getImplMethodName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getImplMethodSignature() { return call_method<"getImplMethodSignature", jni::ref<java::lang::String>>(); }
	jint getImplMethodKind() { return call_method<"getImplMethodKind", jint>(); }
	jni::ref<java::lang::String> getInstantiatedMethodType() { return call_method<"getInstantiatedMethodType", jni::ref<java::lang::String>>(); }
	jint getCapturedArgCount() { return call_method<"getCapturedArgCount", jint>(); }
	jni::ref<java::lang::Object> getCapturedArg(jint p1) { return call_method<"getCapturedArg", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SerializedLambda(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA