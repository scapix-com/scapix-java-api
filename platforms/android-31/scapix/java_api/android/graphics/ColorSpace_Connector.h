// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_CONNECTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_CONNECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ColorSpace_Connector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ColorSpace_Connector>
{
	static constexpr fixed_string class_name = "android/graphics/ColorSpace$Connector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_CONNECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_CONNECTOR)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_CONNECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/android/graphics/ColorSpace_RenderIntent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ColorSpace_Connector : public jni::object_base<"android/graphics/ColorSpace$Connector",
	java::lang::Object>
{
public:

	jni::ref<android::graphics::ColorSpace> getSource() { return call_method<"getSource", jni::ref<android::graphics::ColorSpace>>(); }
	jni::ref<android::graphics::ColorSpace> getDestination() { return call_method<"getDestination", jni::ref<android::graphics::ColorSpace>>(); }
	jni::ref<android::graphics::ColorSpace_RenderIntent> getRenderIntent() { return call_method<"getRenderIntent", jni::ref<android::graphics::ColorSpace_RenderIntent>>(); }
	jni::ref<jni::array<jfloat>> transform(jfloat r, jfloat g, jfloat b) { return call_method<"transform", jni::ref<jni::array<jfloat>>>(r, g, b); }
	jni::ref<jni::array<jfloat>> transform(jni::ref<jni::array<jfloat>> v) { return call_method<"transform", jni::ref<jni::array<jfloat>>>(v); }

protected:

	ColorSpace_Connector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_CONNECTOR
