// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_METHODHANDLEDESC_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_METHODHANDLEDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class MethodHandleDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::MethodHandleDesc>
{
	static constexpr fixed_string class_name = "java/lang/constant/MethodHandleDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::constant::ConstantDesc>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_METHODHANDLEDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_METHODHANDLEDESC)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_METHODHANDLEDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/lang/constant/DirectMethodHandleDesc.h>
#include <scapix/java_api/java/lang/constant/DirectMethodHandleDesc_Kind.h>
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::constant::MethodHandleDesc : public jni::object_base<"java/lang/constant/MethodHandleDesc",
	java::lang::Object,
	java::lang::constant::ConstantDesc>
{
public:

	static jni::ref<java::lang::constant::DirectMethodHandleDesc> of(jni::ref<java::lang::constant::DirectMethodHandleDesc_Kind> kind, jni::ref<java::lang::constant::ClassDesc> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> lookupDescriptor) { return call_static_method<"of", jni::ref<java::lang::constant::DirectMethodHandleDesc>>(kind, owner, name, lookupDescriptor); }
	static jni::ref<java::lang::constant::DirectMethodHandleDesc> ofMethod(jni::ref<java::lang::constant::DirectMethodHandleDesc_Kind> kind, jni::ref<java::lang::constant::ClassDesc> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::constant::MethodTypeDesc> lookupMethodType) { return call_static_method<"ofMethod", jni::ref<java::lang::constant::DirectMethodHandleDesc>>(kind, owner, name, lookupMethodType); }
	static jni::ref<java::lang::constant::DirectMethodHandleDesc> ofField(jni::ref<java::lang::constant::DirectMethodHandleDesc_Kind> kind, jni::ref<java::lang::constant::ClassDesc> owner, jni::ref<java::lang::String> fieldName, jni::ref<java::lang::constant::ClassDesc> fieldType) { return call_static_method<"ofField", jni::ref<java::lang::constant::DirectMethodHandleDesc>>(kind, owner, fieldName, fieldType); }
	static jni::ref<java::lang::constant::DirectMethodHandleDesc> ofConstructor(jni::ref<java::lang::constant::ClassDesc> owner, jni::ref<jni::array<java::lang::constant::ClassDesc>> paramTypes) { return call_static_method<"ofConstructor", jni::ref<java::lang::constant::DirectMethodHandleDesc>>(owner, paramTypes); }
	jni::ref<java::lang::constant::MethodHandleDesc> asType(jni::ref<java::lang::constant::MethodTypeDesc> type) { return call_method<"asType", jni::ref<java::lang::constant::MethodHandleDesc>>(type); }
	jni::ref<java::lang::constant::MethodTypeDesc> invocationType() { return call_method<"invocationType", jni::ref<java::lang::constant::MethodTypeDesc>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	MethodHandleDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_METHODHANDLEDESC
