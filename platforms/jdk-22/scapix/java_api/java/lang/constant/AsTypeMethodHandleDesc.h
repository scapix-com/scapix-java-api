// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/constant/DynamicConstantDesc.h>
#include <scapix/java_api/java/lang/constant/MethodHandleDesc.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_ASTYPEMETHODHANDLEDESC_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_ASTYPEMETHODHANDLEDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class AsTypeMethodHandleDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::AsTypeMethodHandleDesc>
{
	static constexpr fixed_string class_name = "java/lang/constant/AsTypeMethodHandleDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::constant::DynamicConstantDesc, scapix::java_api::java::lang::constant::MethodHandleDesc>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_ASTYPEMETHODHANDLEDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_ASTYPEMETHODHANDLEDESC)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_ASTYPEMETHODHANDLEDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodHandles_Lookup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::constant::AsTypeMethodHandleDesc : public jni::object_base<"java/lang/constant/AsTypeMethodHandleDesc",
	java::lang::constant::DynamicConstantDesc,
	java::lang::constant::MethodHandleDesc>
{
public:

	jni::ref<java::lang::constant::MethodTypeDesc> invocationType() { return call_method<"invocationType", jni::ref<java::lang::constant::MethodTypeDesc>>(); }
	jni::ref<java::lang::invoke::MethodHandle> resolveConstantDesc(jni::ref<java::lang::invoke::MethodHandles_Lookup> lookup) { return call_method<"resolveConstantDesc", jni::ref<java::lang::invoke::MethodHandle>>(lookup); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AsTypeMethodHandleDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_ASTYPEMETHODHANDLEDESC