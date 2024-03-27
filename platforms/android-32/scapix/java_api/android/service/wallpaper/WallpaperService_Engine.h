// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::wallpaper { class WallpaperService_Engine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::wallpaper::WallpaperService_Engine>
{
	static constexpr fixed_string class_name = "android/service/wallpaper/WallpaperService$Engine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/WallpaperColors.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/service/wallpaper/WallpaperService.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/SurfaceHolder.h>
#include <scapix/java_api/android/view/WindowInsets.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::wallpaper::WallpaperService_Engine : public jni::object_base<"android/service/wallpaper/WallpaperService$Engine",
	java::lang::Object>
{
public:

	static jni::ref<android::service::wallpaper::WallpaperService_Engine> new_object(jni::ref<android::service::wallpaper::WallpaperService> this_0) { return base_::new_object(this_0); }
	jni::ref<android::view::SurfaceHolder> getSurfaceHolder() { return call_method<"getSurfaceHolder", jni::ref<android::view::SurfaceHolder>>(); }
	jint getDesiredMinimumWidth() { return call_method<"getDesiredMinimumWidth", jint>(); }
	jint getDesiredMinimumHeight() { return call_method<"getDesiredMinimumHeight", jint>(); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }
	jboolean isPreview() { return call_method<"isPreview", jboolean>(); }
	void setTouchEventsEnabled(jboolean enabled) { return call_method<"setTouchEventsEnabled", void>(enabled); }
	void setOffsetNotificationsEnabled(jboolean enabled) { return call_method<"setOffsetNotificationsEnabled", void>(enabled); }
	void onCreate(jni::ref<android::view::SurfaceHolder> surfaceHolder) { return call_method<"onCreate", void>(surfaceHolder); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	void onVisibilityChanged(jboolean visible) { return call_method<"onVisibilityChanged", void>(visible); }
	void onApplyWindowInsets(jni::ref<android::view::WindowInsets> insets) { return call_method<"onApplyWindowInsets", void>(insets); }
	void onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", void>(event); }
	void onOffsetsChanged(jfloat xOffset, jfloat yOffset, jfloat xOffsetStep, jfloat yOffsetStep, jint xPixelOffset, jint yPixelOffset) { return call_method<"onOffsetsChanged", void>(xOffset, yOffset, xOffsetStep, yOffsetStep, xPixelOffset, yPixelOffset); }
	jni::ref<android::os::Bundle> onCommand(jni::ref<java::lang::String> action, jint x, jint y, jint z, jni::ref<android::os::Bundle> extras, jboolean resultRequested) { return call_method<"onCommand", jni::ref<android::os::Bundle>>(action, x, y, z, extras, resultRequested); }
	void onDesiredSizeChanged(jint desiredWidth, jint desiredHeight) { return call_method<"onDesiredSizeChanged", void>(desiredWidth, desiredHeight); }
	void onSurfaceChanged(jni::ref<android::view::SurfaceHolder> holder, jint format, jint width, jint height) { return call_method<"onSurfaceChanged", void>(holder, format, width, height); }
	void onSurfaceRedrawNeeded(jni::ref<android::view::SurfaceHolder> holder) { return call_method<"onSurfaceRedrawNeeded", void>(holder); }
	void onSurfaceCreated(jni::ref<android::view::SurfaceHolder> holder) { return call_method<"onSurfaceCreated", void>(holder); }
	void onSurfaceDestroyed(jni::ref<android::view::SurfaceHolder> holder) { return call_method<"onSurfaceDestroyed", void>(holder); }
	void onZoomChanged(jfloat zoom) { return call_method<"onZoomChanged", void>(zoom); }
	void notifyColorsChanged() { return call_method<"notifyColorsChanged", void>(); }
	jni::ref<android::app::WallpaperColors> onComputeColors() { return call_method<"onComputeColors", jni::ref<android::app::WallpaperColors>>(); }
	jni::ref<android::content::Context> getDisplayContext() { return call_method<"getDisplayContext", jni::ref<android::content::Context>>(); }

protected:

	WallpaperService_Engine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE
