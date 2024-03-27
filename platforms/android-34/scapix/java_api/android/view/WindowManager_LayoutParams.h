// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWMANAGER_LAYOUTPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWMANAGER_LAYOUTPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class WindowManager_LayoutParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::WindowManager_LayoutParams>
{
	static constexpr fixed_string class_name = "android/view/WindowManager$LayoutParams";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup_LayoutParams, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWMANAGER_LAYOUTPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWMANAGER_LAYOUTPARAMS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWMANAGER_LAYOUTPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::WindowManager_LayoutParams : public jni::object_base<"android/view/WindowManager$LayoutParams",
	android::view::ViewGroup_LayoutParams,
	android::os::Parcelable>
{
public:

	static jint ALPHA_CHANGED() { return get_static_field<"ALPHA_CHANGED", jint>(); }
	static jint ANIMATION_CHANGED() { return get_static_field<"ANIMATION_CHANGED", jint>(); }
	static jfloat BRIGHTNESS_OVERRIDE_FULL() { return get_static_field<"BRIGHTNESS_OVERRIDE_FULL", jfloat>(); }
	static jfloat BRIGHTNESS_OVERRIDE_NONE() { return get_static_field<"BRIGHTNESS_OVERRIDE_NONE", jfloat>(); }
	static jfloat BRIGHTNESS_OVERRIDE_OFF() { return get_static_field<"BRIGHTNESS_OVERRIDE_OFF", jfloat>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint DIM_AMOUNT_CHANGED() { return get_static_field<"DIM_AMOUNT_CHANGED", jint>(); }
	static jint DISPLAY_FLAG_DISABLE_HDR_CONVERSION() { return get_static_field<"DISPLAY_FLAG_DISABLE_HDR_CONVERSION", jint>(); }
	static jint FIRST_APPLICATION_WINDOW() { return get_static_field<"FIRST_APPLICATION_WINDOW", jint>(); }
	static jint FIRST_SUB_WINDOW() { return get_static_field<"FIRST_SUB_WINDOW", jint>(); }
	static jint FIRST_SYSTEM_WINDOW() { return get_static_field<"FIRST_SYSTEM_WINDOW", jint>(); }
	static jint FLAGS_CHANGED() { return get_static_field<"FLAGS_CHANGED", jint>(); }
	static jint FLAG_ALLOW_LOCK_WHILE_SCREEN_ON() { return get_static_field<"FLAG_ALLOW_LOCK_WHILE_SCREEN_ON", jint>(); }
	static jint FLAG_ALT_FOCUSABLE_IM() { return get_static_field<"FLAG_ALT_FOCUSABLE_IM", jint>(); }
	static jint FLAG_BLUR_BEHIND() { return get_static_field<"FLAG_BLUR_BEHIND", jint>(); }
	static jint FLAG_DIM_BEHIND() { return get_static_field<"FLAG_DIM_BEHIND", jint>(); }
	static jint FLAG_DISMISS_KEYGUARD() { return get_static_field<"FLAG_DISMISS_KEYGUARD", jint>(); }
	static jint FLAG_DITHER() { return get_static_field<"FLAG_DITHER", jint>(); }
	static jint FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS() { return get_static_field<"FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS", jint>(); }
	static jint FLAG_FORCE_NOT_FULLSCREEN() { return get_static_field<"FLAG_FORCE_NOT_FULLSCREEN", jint>(); }
	static jint FLAG_FULLSCREEN() { return get_static_field<"FLAG_FULLSCREEN", jint>(); }
	static jint FLAG_HARDWARE_ACCELERATED() { return get_static_field<"FLAG_HARDWARE_ACCELERATED", jint>(); }
	static jint FLAG_IGNORE_CHEEK_PRESSES() { return get_static_field<"FLAG_IGNORE_CHEEK_PRESSES", jint>(); }
	static jint FLAG_KEEP_SCREEN_ON() { return get_static_field<"FLAG_KEEP_SCREEN_ON", jint>(); }
	static jint FLAG_LAYOUT_ATTACHED_IN_DECOR() { return get_static_field<"FLAG_LAYOUT_ATTACHED_IN_DECOR", jint>(); }
	static jint FLAG_LAYOUT_INSET_DECOR() { return get_static_field<"FLAG_LAYOUT_INSET_DECOR", jint>(); }
	static jint FLAG_LAYOUT_IN_OVERSCAN() { return get_static_field<"FLAG_LAYOUT_IN_OVERSCAN", jint>(); }
	static jint FLAG_LAYOUT_IN_SCREEN() { return get_static_field<"FLAG_LAYOUT_IN_SCREEN", jint>(); }
	static jint FLAG_LAYOUT_NO_LIMITS() { return get_static_field<"FLAG_LAYOUT_NO_LIMITS", jint>(); }
	static jint FLAG_LOCAL_FOCUS_MODE() { return get_static_field<"FLAG_LOCAL_FOCUS_MODE", jint>(); }
	static jint FLAG_NOT_FOCUSABLE() { return get_static_field<"FLAG_NOT_FOCUSABLE", jint>(); }
	static jint FLAG_NOT_TOUCHABLE() { return get_static_field<"FLAG_NOT_TOUCHABLE", jint>(); }
	static jint FLAG_NOT_TOUCH_MODAL() { return get_static_field<"FLAG_NOT_TOUCH_MODAL", jint>(); }
	static jint FLAG_SCALED() { return get_static_field<"FLAG_SCALED", jint>(); }
	static jint FLAG_SECURE() { return get_static_field<"FLAG_SECURE", jint>(); }
	static jint FLAG_SHOW_WALLPAPER() { return get_static_field<"FLAG_SHOW_WALLPAPER", jint>(); }
	static jint FLAG_SHOW_WHEN_LOCKED() { return get_static_field<"FLAG_SHOW_WHEN_LOCKED", jint>(); }
	static jint FLAG_SPLIT_TOUCH() { return get_static_field<"FLAG_SPLIT_TOUCH", jint>(); }
	static jint FLAG_TOUCHABLE_WHEN_WAKING() { return get_static_field<"FLAG_TOUCHABLE_WHEN_WAKING", jint>(); }
	static jint FLAG_TRANSLUCENT_NAVIGATION() { return get_static_field<"FLAG_TRANSLUCENT_NAVIGATION", jint>(); }
	static jint FLAG_TRANSLUCENT_STATUS() { return get_static_field<"FLAG_TRANSLUCENT_STATUS", jint>(); }
	static jint FLAG_TURN_SCREEN_ON() { return get_static_field<"FLAG_TURN_SCREEN_ON", jint>(); }
	static jint FLAG_WATCH_OUTSIDE_TOUCH() { return get_static_field<"FLAG_WATCH_OUTSIDE_TOUCH", jint>(); }
	static jint FORMAT_CHANGED() { return get_static_field<"FORMAT_CHANGED", jint>(); }
	static jint LAST_APPLICATION_WINDOW() { return get_static_field<"LAST_APPLICATION_WINDOW", jint>(); }
	static jint LAST_SUB_WINDOW() { return get_static_field<"LAST_SUB_WINDOW", jint>(); }
	static jint LAST_SYSTEM_WINDOW() { return get_static_field<"LAST_SYSTEM_WINDOW", jint>(); }
	static jint LAYOUT_CHANGED() { return get_static_field<"LAYOUT_CHANGED", jint>(); }
	static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_ALWAYS() { return get_static_field<"LAYOUT_IN_DISPLAY_CUTOUT_MODE_ALWAYS", jint>(); }
	static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_DEFAULT() { return get_static_field<"LAYOUT_IN_DISPLAY_CUTOUT_MODE_DEFAULT", jint>(); }
	static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_NEVER() { return get_static_field<"LAYOUT_IN_DISPLAY_CUTOUT_MODE_NEVER", jint>(); }
	static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES() { return get_static_field<"LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES", jint>(); }
	static jint MEMORY_TYPE_CHANGED() { return get_static_field<"MEMORY_TYPE_CHANGED", jint>(); }
	static jint MEMORY_TYPE_GPU() { return get_static_field<"MEMORY_TYPE_GPU", jint>(); }
	static jint MEMORY_TYPE_HARDWARE() { return get_static_field<"MEMORY_TYPE_HARDWARE", jint>(); }
	static jint MEMORY_TYPE_NORMAL() { return get_static_field<"MEMORY_TYPE_NORMAL", jint>(); }
	static jint MEMORY_TYPE_PUSH_BUFFERS() { return get_static_field<"MEMORY_TYPE_PUSH_BUFFERS", jint>(); }
	static jint ROTATION_ANIMATION_CHANGED() { return get_static_field<"ROTATION_ANIMATION_CHANGED", jint>(); }
	static jint ROTATION_ANIMATION_CROSSFADE() { return get_static_field<"ROTATION_ANIMATION_CROSSFADE", jint>(); }
	static jint ROTATION_ANIMATION_JUMPCUT() { return get_static_field<"ROTATION_ANIMATION_JUMPCUT", jint>(); }
	static jint ROTATION_ANIMATION_ROTATE() { return get_static_field<"ROTATION_ANIMATION_ROTATE", jint>(); }
	static jint ROTATION_ANIMATION_SEAMLESS() { return get_static_field<"ROTATION_ANIMATION_SEAMLESS", jint>(); }
	static jint SCREEN_BRIGHTNESS_CHANGED() { return get_static_field<"SCREEN_BRIGHTNESS_CHANGED", jint>(); }
	static jint SCREEN_ORIENTATION_CHANGED() { return get_static_field<"SCREEN_ORIENTATION_CHANGED", jint>(); }
	static jint SOFT_INPUT_ADJUST_NOTHING() { return get_static_field<"SOFT_INPUT_ADJUST_NOTHING", jint>(); }
	static jint SOFT_INPUT_ADJUST_PAN() { return get_static_field<"SOFT_INPUT_ADJUST_PAN", jint>(); }
	static jint SOFT_INPUT_ADJUST_RESIZE() { return get_static_field<"SOFT_INPUT_ADJUST_RESIZE", jint>(); }
	static jint SOFT_INPUT_ADJUST_UNSPECIFIED() { return get_static_field<"SOFT_INPUT_ADJUST_UNSPECIFIED", jint>(); }
	static jint SOFT_INPUT_IS_FORWARD_NAVIGATION() { return get_static_field<"SOFT_INPUT_IS_FORWARD_NAVIGATION", jint>(); }
	static jint SOFT_INPUT_MASK_ADJUST() { return get_static_field<"SOFT_INPUT_MASK_ADJUST", jint>(); }
	static jint SOFT_INPUT_MASK_STATE() { return get_static_field<"SOFT_INPUT_MASK_STATE", jint>(); }
	static jint SOFT_INPUT_MODE_CHANGED() { return get_static_field<"SOFT_INPUT_MODE_CHANGED", jint>(); }
	static jint SOFT_INPUT_STATE_ALWAYS_HIDDEN() { return get_static_field<"SOFT_INPUT_STATE_ALWAYS_HIDDEN", jint>(); }
	static jint SOFT_INPUT_STATE_ALWAYS_VISIBLE() { return get_static_field<"SOFT_INPUT_STATE_ALWAYS_VISIBLE", jint>(); }
	static jint SOFT_INPUT_STATE_HIDDEN() { return get_static_field<"SOFT_INPUT_STATE_HIDDEN", jint>(); }
	static jint SOFT_INPUT_STATE_UNCHANGED() { return get_static_field<"SOFT_INPUT_STATE_UNCHANGED", jint>(); }
	static jint SOFT_INPUT_STATE_UNSPECIFIED() { return get_static_field<"SOFT_INPUT_STATE_UNSPECIFIED", jint>(); }
	static jint SOFT_INPUT_STATE_VISIBLE() { return get_static_field<"SOFT_INPUT_STATE_VISIBLE", jint>(); }
	static jint TITLE_CHANGED() { return get_static_field<"TITLE_CHANGED", jint>(); }
	static jint TYPE_ACCESSIBILITY_OVERLAY() { return get_static_field<"TYPE_ACCESSIBILITY_OVERLAY", jint>(); }
	static jint TYPE_APPLICATION() { return get_static_field<"TYPE_APPLICATION", jint>(); }
	static jint TYPE_APPLICATION_ATTACHED_DIALOG() { return get_static_field<"TYPE_APPLICATION_ATTACHED_DIALOG", jint>(); }
	static jint TYPE_APPLICATION_MEDIA() { return get_static_field<"TYPE_APPLICATION_MEDIA", jint>(); }
	static jint TYPE_APPLICATION_OVERLAY() { return get_static_field<"TYPE_APPLICATION_OVERLAY", jint>(); }
	static jint TYPE_APPLICATION_PANEL() { return get_static_field<"TYPE_APPLICATION_PANEL", jint>(); }
	static jint TYPE_APPLICATION_STARTING() { return get_static_field<"TYPE_APPLICATION_STARTING", jint>(); }
	static jint TYPE_APPLICATION_SUB_PANEL() { return get_static_field<"TYPE_APPLICATION_SUB_PANEL", jint>(); }
	static jint TYPE_BASE_APPLICATION() { return get_static_field<"TYPE_BASE_APPLICATION", jint>(); }
	static jint TYPE_CHANGED() { return get_static_field<"TYPE_CHANGED", jint>(); }
	static jint TYPE_DRAWN_APPLICATION() { return get_static_field<"TYPE_DRAWN_APPLICATION", jint>(); }
	static jint TYPE_INPUT_METHOD() { return get_static_field<"TYPE_INPUT_METHOD", jint>(); }
	static jint TYPE_INPUT_METHOD_DIALOG() { return get_static_field<"TYPE_INPUT_METHOD_DIALOG", jint>(); }
	static jint TYPE_KEYGUARD_DIALOG() { return get_static_field<"TYPE_KEYGUARD_DIALOG", jint>(); }
	static jint TYPE_PHONE() { return get_static_field<"TYPE_PHONE", jint>(); }
	static jint TYPE_PRIORITY_PHONE() { return get_static_field<"TYPE_PRIORITY_PHONE", jint>(); }
	static jint TYPE_PRIVATE_PRESENTATION() { return get_static_field<"TYPE_PRIVATE_PRESENTATION", jint>(); }
	static jint TYPE_SEARCH_BAR() { return get_static_field<"TYPE_SEARCH_BAR", jint>(); }
	static jint TYPE_STATUS_BAR() { return get_static_field<"TYPE_STATUS_BAR", jint>(); }
	static jint TYPE_SYSTEM_ALERT() { return get_static_field<"TYPE_SYSTEM_ALERT", jint>(); }
	static jint TYPE_SYSTEM_DIALOG() { return get_static_field<"TYPE_SYSTEM_DIALOG", jint>(); }
	static jint TYPE_SYSTEM_ERROR() { return get_static_field<"TYPE_SYSTEM_ERROR", jint>(); }
	static jint TYPE_SYSTEM_OVERLAY() { return get_static_field<"TYPE_SYSTEM_OVERLAY", jint>(); }
	static jint TYPE_TOAST() { return get_static_field<"TYPE_TOAST", jint>(); }
	static jint TYPE_WALLPAPER() { return get_static_field<"TYPE_WALLPAPER", jint>(); }
	jfloat alpha() { return get_field<"alpha", jfloat>(); }
	void alpha(jfloat v) { set_field<"alpha", jfloat>(v); }
	jfloat buttonBrightness() { return get_field<"buttonBrightness", jfloat>(); }
	void buttonBrightness(jfloat v) { set_field<"buttonBrightness", jfloat>(v); }
	jfloat dimAmount() { return get_field<"dimAmount", jfloat>(); }
	void dimAmount(jfloat v) { set_field<"dimAmount", jfloat>(v); }
	jint flags() { return get_field<"flags", jint>(); }
	void flags(jint v) { set_field<"flags", jint>(v); }
	jint format() { return get_field<"format", jint>(); }
	void format(jint v) { set_field<"format", jint>(v); }
	jint gravity() { return get_field<"gravity", jint>(); }
	void gravity(jint v) { set_field<"gravity", jint>(v); }
	jfloat horizontalMargin() { return get_field<"horizontalMargin", jfloat>(); }
	void horizontalMargin(jfloat v) { set_field<"horizontalMargin", jfloat>(v); }
	jfloat horizontalWeight() { return get_field<"horizontalWeight", jfloat>(); }
	void horizontalWeight(jfloat v) { set_field<"horizontalWeight", jfloat>(v); }
	jint layoutInDisplayCutoutMode() { return get_field<"layoutInDisplayCutoutMode", jint>(); }
	void layoutInDisplayCutoutMode(jint v) { set_field<"layoutInDisplayCutoutMode", jint>(v); }
	jint memoryType() { return get_field<"memoryType", jint>(); }
	void memoryType(jint v) { set_field<"memoryType", jint>(v); }
	jni::ref<java::lang::String> packageName() { return get_field<"packageName", jni::ref<java::lang::String>>(); }
	void packageName(jni::ref<java::lang::String> v) { set_field<"packageName", jni::ref<java::lang::String>>(v); }
	jboolean preferMinimalPostProcessing() { return get_field<"preferMinimalPostProcessing", jboolean>(); }
	void preferMinimalPostProcessing(jboolean v) { set_field<"preferMinimalPostProcessing", jboolean>(v); }
	jint preferredDisplayModeId() { return get_field<"preferredDisplayModeId", jint>(); }
	void preferredDisplayModeId(jint v) { set_field<"preferredDisplayModeId", jint>(v); }
	jfloat preferredRefreshRate() { return get_field<"preferredRefreshRate", jfloat>(); }
	void preferredRefreshRate(jfloat v) { set_field<"preferredRefreshRate", jfloat>(v); }
	jint rotationAnimation() { return get_field<"rotationAnimation", jint>(); }
	void rotationAnimation(jint v) { set_field<"rotationAnimation", jint>(v); }
	jfloat screenBrightness() { return get_field<"screenBrightness", jfloat>(); }
	void screenBrightness(jfloat v) { set_field<"screenBrightness", jfloat>(v); }
	jint screenOrientation() { return get_field<"screenOrientation", jint>(); }
	void screenOrientation(jint v) { set_field<"screenOrientation", jint>(v); }
	jint softInputMode() { return get_field<"softInputMode", jint>(); }
	void softInputMode(jint v) { set_field<"softInputMode", jint>(v); }
	jint systemUiVisibility() { return get_field<"systemUiVisibility", jint>(); }
	void systemUiVisibility(jint v) { set_field<"systemUiVisibility", jint>(v); }
	jni::ref<android::os::IBinder> token() { return get_field<"token", jni::ref<android::os::IBinder>>(); }
	void token(jni::ref<android::os::IBinder> v) { set_field<"token", jni::ref<android::os::IBinder>>(v); }
	jint type() { return get_field<"type", jint>(); }
	void type(jint v) { set_field<"type", jint>(v); }
	jfloat verticalMargin() { return get_field<"verticalMargin", jfloat>(); }
	void verticalMargin(jfloat v) { set_field<"verticalMargin", jfloat>(v); }
	jfloat verticalWeight() { return get_field<"verticalWeight", jfloat>(); }
	void verticalWeight(jfloat v) { set_field<"verticalWeight", jfloat>(v); }
	jint windowAnimations() { return get_field<"windowAnimations", jint>(); }
	void windowAnimations(jint v) { set_field<"windowAnimations", jint>(v); }
	jint x() { return get_field<"x", jint>(); }
	void x(jint v) { set_field<"x", jint>(v); }
	jint y() { return get_field<"y", jint>(); }
	void y(jint v) { set_field<"y", jint>(v); }

	static jni::ref<android::view::WindowManager_LayoutParams> new_object() { return base_::new_object(); }
	static jni::ref<android::view::WindowManager_LayoutParams> new_object(jint _type) { return base_::new_object(_type); }
	static jni::ref<android::view::WindowManager_LayoutParams> new_object(jint _type, jint _flags) { return base_::new_object(_type, _flags); }
	static jni::ref<android::view::WindowManager_LayoutParams> new_object(jint _type, jint _flags, jint _format) { return base_::new_object(_type, _flags, _format); }
	static jni::ref<android::view::WindowManager_LayoutParams> new_object(jint w, jint h, jint _type, jint _flags, jint _format) { return base_::new_object(w, h, _type, _flags, _format); }
	static jni::ref<android::view::WindowManager_LayoutParams> new_object(jint w, jint h, jint xpos, jint ypos, jint _type, jint _flags, jint _format) { return base_::new_object(w, h, xpos, ypos, _type, _flags, _format); }
	static jni::ref<android::view::WindowManager_LayoutParams> new_object(jni::ref<android::os::Parcel> in) { return base_::new_object(in); }
	static jboolean mayUseInputMethod(jint flags) { return call_static_method<"mayUseInputMethod", jboolean>(flags); }
	void setFitInsetsTypes(jint types) { return call_method<"setFitInsetsTypes", void>(types); }
	void setFitInsetsSides(jint sides) { return call_method<"setFitInsetsSides", void>(sides); }
	void setFitInsetsIgnoringVisibility(jboolean ignore) { return call_method<"setFitInsetsIgnoringVisibility", void>(ignore); }
	void setWallpaperTouchEventsEnabled(jboolean enable) { return call_method<"setWallpaperTouchEventsEnabled", void>(enable); }
	jboolean areWallpaperTouchEventsEnabled() { return call_method<"areWallpaperTouchEventsEnabled", jboolean>(); }
	void setCanPlayMoveAnimation(jboolean enable) { return call_method<"setCanPlayMoveAnimation", void>(enable); }
	jboolean canPlayMoveAnimation() { return call_method<"canPlayMoveAnimation", jboolean>(); }
	jint getFitInsetsTypes() { return call_method<"getFitInsetsTypes", jint>(); }
	jint getFitInsetsSides() { return call_method<"getFitInsetsSides", jint>(); }
	jboolean isFitInsetsIgnoringVisibility() { return call_method<"isFitInsetsIgnoringVisibility", jboolean>(); }
	void setTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setTitle", void>(title); }
	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	jboolean isHdrConversionEnabled() { return call_method<"isHdrConversionEnabled", jboolean>(); }
	void setHdrConversionEnabled(jboolean enabled) { return call_method<"setHdrConversionEnabled", void>(enabled); }
	void setColorMode(jint colorMode) { return call_method<"setColorMode", void>(colorMode); }
	jint getColorMode() { return call_method<"getColorMode", jint>(); }
	void setBlurBehindRadius(jint blurBehindRadius) { return call_method<"setBlurBehindRadius", void>(blurBehindRadius); }
	jint getBlurBehindRadius() { return call_method<"getBlurBehindRadius", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint parcelableFlags) { return call_method<"writeToParcel", void>(out, parcelableFlags); }
	jint copyFrom(jni::ref<android::view::WindowManager_LayoutParams> o) { return call_method<"copyFrom", jint>(o); }
	jni::ref<java::lang::String> debug(jni::ref<java::lang::String> output) { return call_method<"debug", jni::ref<java::lang::String>>(output); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	WindowManager_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWMANAGER_LAYOUTPARAMS
