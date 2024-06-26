// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RENDERSCRIPT_PRIORITY_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RENDERSCRIPT_PRIORITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class RenderScript_Priority; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::RenderScript_Priority>
{
	static constexpr fixed_string class_name = "android/renderscript/RenderScript$Priority";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RENDERSCRIPT_PRIORITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RENDERSCRIPT_PRIORITY)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RENDERSCRIPT_PRIORITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::RenderScript_Priority : public jni::object_base<"android/renderscript/RenderScript$Priority",
	java::lang::Enum>
{
public:

	static jni::ref<android::renderscript::RenderScript_Priority> LOW() { return get_static_field<"LOW", jni::ref<android::renderscript::RenderScript_Priority>>(); }
	static jni::ref<android::renderscript::RenderScript_Priority> NORMAL() { return get_static_field<"NORMAL", jni::ref<android::renderscript::RenderScript_Priority>>(); }

	static jni::ref<jni::array<android::renderscript::RenderScript_Priority>> values() { return call_static_method<"values", jni::ref<jni::array<android::renderscript::RenderScript_Priority>>>(); }
	static jni::ref<android::renderscript::RenderScript_Priority> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::renderscript::RenderScript_Priority>>(name); }

protected:

	RenderScript_Priority(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RENDERSCRIPT_PRIORITY
