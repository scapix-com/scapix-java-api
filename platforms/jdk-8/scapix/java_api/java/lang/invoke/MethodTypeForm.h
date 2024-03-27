// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPEFORM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPEFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodTypeForm; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodTypeForm>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodTypeForm";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPEFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPEFORM)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPEFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/LambdaForm.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::MethodTypeForm : public jni::object_base<"java/lang/invoke/MethodTypeForm",
	java::lang::Object>
{
public:

	static jint NO_CHANGE() { return get_static_field<"NO_CHANGE", jint>(); }
	static jint ERASE() { return get_static_field<"ERASE", jint>(); }
	static jint WRAP() { return get_static_field<"WRAP", jint>(); }
	static jint UNWRAP() { return get_static_field<"UNWRAP", jint>(); }
	static jint INTS() { return get_static_field<"INTS", jint>(); }
	static jint LONGS() { return get_static_field<"LONGS", jint>(); }
	static jint RAW_RETURN() { return get_static_field<"RAW_RETURN", jint>(); }

	jni::ref<java::lang::invoke::MethodType> erasedType() { return call_method<"erasedType", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodType> basicType() { return call_method<"basicType", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodHandle> cachedMethodHandle(jint p1) { return call_method<"cachedMethodHandle", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> setCachedMethodHandle(jint p1, jni::ref<java::lang::invoke::MethodHandle> p2) { return call_method<"setCachedMethodHandle", jni::ref<java::lang::invoke::MethodHandle>>(p1, p2); }
	jni::ref<java::lang::invoke::LambdaForm> cachedLambdaForm(jint p1) { return call_method<"cachedLambdaForm", jni::ref<java::lang::invoke::LambdaForm>>(p1); }
	jni::ref<java::lang::invoke::LambdaForm> setCachedLambdaForm(jint p1, jni::ref<java::lang::invoke::LambdaForm> p2) { return call_method<"setCachedLambdaForm", jni::ref<java::lang::invoke::LambdaForm>>(p1, p2); }
	jint parameterCount() { return call_method<"parameterCount", jint>(); }
	jint parameterSlotCount() { return call_method<"parameterSlotCount", jint>(); }
	jint returnCount() { return call_method<"returnCount", jint>(); }
	jint returnSlotCount() { return call_method<"returnSlotCount", jint>(); }
	jint primitiveParameterCount() { return call_method<"primitiveParameterCount", jint>(); }
	jint longPrimitiveParameterCount() { return call_method<"longPrimitiveParameterCount", jint>(); }
	jint primitiveReturnCount() { return call_method<"primitiveReturnCount", jint>(); }
	jint longPrimitiveReturnCount() { return call_method<"longPrimitiveReturnCount", jint>(); }
	jboolean hasPrimitives() { return call_method<"hasPrimitives", jboolean>(); }
	jboolean hasNonVoidPrimitives() { return call_method<"hasNonVoidPrimitives", jboolean>(); }
	jboolean hasLongPrimitives() { return call_method<"hasLongPrimitives", jboolean>(); }
	jint parameterToArgSlot(jint p1) { return call_method<"parameterToArgSlot", jint>(p1); }
	jint argSlotToParameter(jint p1) { return call_method<"argSlotToParameter", jint>(p1); }
	static jni::ref<java::lang::invoke::MethodType> canonicalize(jni::ref<java::lang::invoke::MethodType> p1, jint p2, jint p3) { return call_static_method<"canonicalize", jni::ref<java::lang::invoke::MethodType>>(p1, p2, p3); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MethodTypeForm(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPEFORM
