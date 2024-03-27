// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWCONFIGURATION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewConfiguration>
{
	static constexpr fixed_string class_name = "android/view/ViewConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWCONFIGURATION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewConfiguration : public jni::object_base<"android/view/ViewConfiguration",
	java::lang::Object>
{
public:

	static jni::ref<android::view::ViewConfiguration> new_object() { return base_::new_object(); }
	static jni::ref<android::view::ViewConfiguration> get(jni::ref<android::content::Context> context) { return call_static_method<"get", jni::ref<android::view::ViewConfiguration>>(context); }
	static jint getScrollBarSize() { return call_static_method<"getScrollBarSize", jint>(); }
	jint getScaledScrollBarSize() { return call_method<"getScaledScrollBarSize", jint>(); }
	static jint getScrollBarFadeDuration() { return call_static_method<"getScrollBarFadeDuration", jint>(); }
	static jint getScrollDefaultDelay() { return call_static_method<"getScrollDefaultDelay", jint>(); }
	static jint getFadingEdgeLength() { return call_static_method<"getFadingEdgeLength", jint>(); }
	jint getScaledFadingEdgeLength() { return call_method<"getScaledFadingEdgeLength", jint>(); }
	static jint getPressedStateDuration() { return call_static_method<"getPressedStateDuration", jint>(); }
	static jint getLongPressTimeout() { return call_static_method<"getLongPressTimeout", jint>(); }
	static jint getKeyRepeatTimeout() { return call_static_method<"getKeyRepeatTimeout", jint>(); }
	static jint getKeyRepeatDelay() { return call_static_method<"getKeyRepeatDelay", jint>(); }
	static jint getTapTimeout() { return call_static_method<"getTapTimeout", jint>(); }
	static jint getJumpTapTimeout() { return call_static_method<"getJumpTapTimeout", jint>(); }
	static jint getDoubleTapTimeout() { return call_static_method<"getDoubleTapTimeout", jint>(); }
	static jint getEdgeSlop() { return call_static_method<"getEdgeSlop", jint>(); }
	jint getScaledEdgeSlop() { return call_method<"getScaledEdgeSlop", jint>(); }
	static jint getTouchSlop() { return call_static_method<"getTouchSlop", jint>(); }
	jint getScaledTouchSlop() { return call_method<"getScaledTouchSlop", jint>(); }
	jint getScaledPagingTouchSlop() { return call_method<"getScaledPagingTouchSlop", jint>(); }
	jint getScaledDoubleTapSlop() { return call_method<"getScaledDoubleTapSlop", jint>(); }
	static jint getWindowTouchSlop() { return call_static_method<"getWindowTouchSlop", jint>(); }
	jint getScaledWindowTouchSlop() { return call_method<"getScaledWindowTouchSlop", jint>(); }
	static jint getMinimumFlingVelocity() { return call_static_method<"getMinimumFlingVelocity", jint>(); }
	jint getScaledMinimumFlingVelocity() { return call_method<"getScaledMinimumFlingVelocity", jint>(); }
	static jint getMaximumFlingVelocity() { return call_static_method<"getMaximumFlingVelocity", jint>(); }
	jint getScaledMaximumFlingVelocity() { return call_method<"getScaledMaximumFlingVelocity", jint>(); }
	jfloat getScaledHorizontalScrollFactor() { return call_method<"getScaledHorizontalScrollFactor", jfloat>(); }
	jfloat getScaledVerticalScrollFactor() { return call_method<"getScaledVerticalScrollFactor", jfloat>(); }
	static jint getMaximumDrawingCacheSize() { return call_static_method<"getMaximumDrawingCacheSize", jint>(); }
	jint getScaledMaximumDrawingCacheSize() { return call_method<"getScaledMaximumDrawingCacheSize", jint>(); }
	jint getScaledOverscrollDistance() { return call_method<"getScaledOverscrollDistance", jint>(); }
	jint getScaledOverflingDistance() { return call_method<"getScaledOverflingDistance", jint>(); }
	static jlong getZoomControlsTimeout() { return call_static_method<"getZoomControlsTimeout", jlong>(); }
	static jlong getGlobalActionKeyTimeout() { return call_static_method<"getGlobalActionKeyTimeout", jlong>(); }
	static jfloat getScrollFriction() { return call_static_method<"getScrollFriction", jfloat>(); }
	static jlong getDefaultActionModeHideDuration() { return call_static_method<"getDefaultActionModeHideDuration", jlong>(); }
	jboolean hasPermanentMenuKey() { return call_method<"hasPermanentMenuKey", jboolean>(); }

protected:

	ViewConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWCONFIGURATION
