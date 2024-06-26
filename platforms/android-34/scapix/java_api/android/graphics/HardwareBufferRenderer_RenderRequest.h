// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class HardwareBufferRenderer_RenderRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::HardwareBufferRenderer_RenderRequest>
{
	static constexpr fixed_string class_name = "android/graphics/HardwareBufferRenderer$RenderRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERREQUEST)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::HardwareBufferRenderer_RenderRequest : public jni::object_base<"android/graphics/HardwareBufferRenderer$RenderRequest",
	java::lang::Object>
{
public:

	void draw(jni::ref<java::util::concurrent::Executor> executor, jni::ref<java::util::function::Consumer> renderCallback) { return call_method<"draw", void>(executor, renderCallback); }
	jni::ref<android::graphics::HardwareBufferRenderer_RenderRequest> setColorSpace(jni::ref<android::graphics::ColorSpace> colorSpace) { return call_method<"setColorSpace", jni::ref<android::graphics::HardwareBufferRenderer_RenderRequest>>(colorSpace); }
	jni::ref<android::graphics::HardwareBufferRenderer_RenderRequest> setBufferTransform(jint bufferTransform) { return call_method<"setBufferTransform", jni::ref<android::graphics::HardwareBufferRenderer_RenderRequest>>(bufferTransform); }

protected:

	HardwareBufferRenderer_RenderRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_HARDWAREBUFFERRENDERER_RENDERREQUEST
