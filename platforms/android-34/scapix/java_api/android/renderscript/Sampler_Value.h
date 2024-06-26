// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_VALUE_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_VALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Sampler_Value; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Sampler_Value>
{
	static constexpr fixed_string class_name = "android/renderscript/Sampler$Value";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_VALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_VALUE)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_VALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Sampler_Value : public jni::object_base<"android/renderscript/Sampler$Value",
	java::lang::Enum>
{
public:

	static jni::ref<android::renderscript::Sampler_Value> NEAREST() { return get_static_field<"NEAREST", jni::ref<android::renderscript::Sampler_Value>>(); }
	static jni::ref<android::renderscript::Sampler_Value> LINEAR() { return get_static_field<"LINEAR", jni::ref<android::renderscript::Sampler_Value>>(); }
	static jni::ref<android::renderscript::Sampler_Value> LINEAR_MIP_LINEAR() { return get_static_field<"LINEAR_MIP_LINEAR", jni::ref<android::renderscript::Sampler_Value>>(); }
	static jni::ref<android::renderscript::Sampler_Value> LINEAR_MIP_NEAREST() { return get_static_field<"LINEAR_MIP_NEAREST", jni::ref<android::renderscript::Sampler_Value>>(); }
	static jni::ref<android::renderscript::Sampler_Value> WRAP() { return get_static_field<"WRAP", jni::ref<android::renderscript::Sampler_Value>>(); }
	static jni::ref<android::renderscript::Sampler_Value> CLAMP() { return get_static_field<"CLAMP", jni::ref<android::renderscript::Sampler_Value>>(); }
	static jni::ref<android::renderscript::Sampler_Value> MIRRORED_REPEAT() { return get_static_field<"MIRRORED_REPEAT", jni::ref<android::renderscript::Sampler_Value>>(); }

	static jni::ref<jni::array<android::renderscript::Sampler_Value>> values() { return call_static_method<"values", jni::ref<jni::array<android::renderscript::Sampler_Value>>>(); }
	static jni::ref<android::renderscript::Sampler_Value> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::renderscript::Sampler_Value>>(name); }

protected:

	Sampler_Value(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_VALUE
