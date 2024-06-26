// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class HardwareBufferRenderer_RenderResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::HardwareBufferRenderer_RenderResult>
{
	static constexpr fixed_string class_name = "android/graphics/HardwareBufferRenderer$RenderResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERRESULT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/SyncFence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::HardwareBufferRenderer_RenderResult : public jni::object_base<"android/graphics/HardwareBufferRenderer$RenderResult",
	java::lang::Object>
{
public:

	static jint ERROR_UNKNOWN() { return get_static_field<"ERROR_UNKNOWN", jint>(); }
	static jint SUCCESS() { return get_static_field<"SUCCESS", jint>(); }

	jni::ref<android::hardware::SyncFence> getFence() { return call_method<"getFence", jni::ref<android::hardware::SyncFence>>(); }
	jint getStatus() { return call_method<"getStatus", jint>(); }

protected:

	HardwareBufferRenderer_RenderResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERRESULT
