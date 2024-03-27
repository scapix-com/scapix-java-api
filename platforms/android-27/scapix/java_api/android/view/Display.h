// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class Display; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::Display>
{
	static constexpr fixed_string class_name = "android/view/Display";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY)
#define SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Point.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/util/DisplayMetrics.h>
#include <scapix/java_api/android/view/Display_HdrCapabilities.h>
#include <scapix/java_api/android/view/Display_Mode.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::Display : public jni::object_base<"android/view/Display",
	java::lang::Object>
{
public:

	using HdrCapabilities = Display_HdrCapabilities;
	using Mode = Display_Mode;

	static jint DEFAULT_DISPLAY() { return get_static_field<"DEFAULT_DISPLAY", jint>(); }
	static jint FLAG_PRESENTATION() { return get_static_field<"FLAG_PRESENTATION", jint>(); }
	static jint FLAG_PRIVATE() { return get_static_field<"FLAG_PRIVATE", jint>(); }
	static jint FLAG_ROUND() { return get_static_field<"FLAG_ROUND", jint>(); }
	static jint FLAG_SECURE() { return get_static_field<"FLAG_SECURE", jint>(); }
	static jint FLAG_SUPPORTS_PROTECTED_BUFFERS() { return get_static_field<"FLAG_SUPPORTS_PROTECTED_BUFFERS", jint>(); }
	static jint INVALID_DISPLAY() { return get_static_field<"INVALID_DISPLAY", jint>(); }
	static jint STATE_DOZE() { return get_static_field<"STATE_DOZE", jint>(); }
	static jint STATE_DOZE_SUSPEND() { return get_static_field<"STATE_DOZE_SUSPEND", jint>(); }
	static jint STATE_OFF() { return get_static_field<"STATE_OFF", jint>(); }
	static jint STATE_ON() { return get_static_field<"STATE_ON", jint>(); }
	static jint STATE_UNKNOWN() { return get_static_field<"STATE_UNKNOWN", jint>(); }
	static jint STATE_VR() { return get_static_field<"STATE_VR", jint>(); }

	jint getDisplayId() { return call_method<"getDisplayId", jint>(); }
	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	jint getFlags() { return call_method<"getFlags", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void getSize(jni::ref<android::graphics::Point> outSize) { return call_method<"getSize", void>(outSize); }
	void getRectSize(jni::ref<android::graphics::Rect> outSize) { return call_method<"getRectSize", void>(outSize); }
	void getCurrentSizeRange(jni::ref<android::graphics::Point> outSmallestSize, jni::ref<android::graphics::Point> outLargestSize) { return call_method<"getCurrentSizeRange", void>(outSmallestSize, outLargestSize); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jint getRotation() { return call_method<"getRotation", jint>(); }
	jint getOrientation() { return call_method<"getOrientation", jint>(); }
	jint getPixelFormat() { return call_method<"getPixelFormat", jint>(); }
	jfloat getRefreshRate() { return call_method<"getRefreshRate", jfloat>(); }
	jni::ref<jni::array<jfloat>> getSupportedRefreshRates() { return call_method<"getSupportedRefreshRates", jni::ref<jni::array<jfloat>>>(); }
	jni::ref<android::view::Display_Mode> getMode() { return call_method<"getMode", jni::ref<android::view::Display_Mode>>(); }
	jni::ref<jni::array<android::view::Display_Mode>> getSupportedModes() { return call_method<"getSupportedModes", jni::ref<jni::array<android::view::Display_Mode>>>(); }
	jni::ref<android::view::Display_HdrCapabilities> getHdrCapabilities() { return call_method<"getHdrCapabilities", jni::ref<android::view::Display_HdrCapabilities>>(); }
	jboolean isHdr() { return call_method<"isHdr", jboolean>(); }
	jboolean isWideColorGamut() { return call_method<"isWideColorGamut", jboolean>(); }
	jlong getAppVsyncOffsetNanos() { return call_method<"getAppVsyncOffsetNanos", jlong>(); }
	jlong getPresentationDeadlineNanos() { return call_method<"getPresentationDeadlineNanos", jlong>(); }
	void getMetrics(jni::ref<android::util::DisplayMetrics> outMetrics) { return call_method<"getMetrics", void>(outMetrics); }
	void getRealSize(jni::ref<android::graphics::Point> outSize) { return call_method<"getRealSize", void>(outSize); }
	void getRealMetrics(jni::ref<android::util::DisplayMetrics> outMetrics) { return call_method<"getRealMetrics", void>(outMetrics); }
	jint getState() { return call_method<"getState", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Display(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY
