// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class WallpaperManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::WallpaperManager>
{
	static constexpr fixed_string class_name = "android/app/WallpaperManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/WallpaperInfo.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::WallpaperManager : public jni::object_base<"android/app/WallpaperManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_CHANGE_LIVE_WALLPAPER() { return get_static_field<"ACTION_CHANGE_LIVE_WALLPAPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_CROP_AND_SET_WALLPAPER() { return get_static_field<"ACTION_CROP_AND_SET_WALLPAPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_LIVE_WALLPAPER_CHOOSER() { return get_static_field<"ACTION_LIVE_WALLPAPER_CHOOSER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_DROP() { return get_static_field<"COMMAND_DROP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_SECONDARY_TAP() { return get_static_field<"COMMAND_SECONDARY_TAP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_TAP() { return get_static_field<"COMMAND_TAP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LIVE_WALLPAPER_COMPONENT() { return get_static_field<"EXTRA_LIVE_WALLPAPER_COMPONENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WALLPAPER_PREVIEW_META_DATA() { return get_static_field<"WALLPAPER_PREVIEW_META_DATA", jni::ref<java::lang::String>>(); }

	static jni::ref<android::app::WallpaperManager> getInstance(jni::ref<android::content::Context> context) { return call_static_method<"getInstance", jni::ref<android::app::WallpaperManager>>(context); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable() { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> getBuiltInDrawable() { return call_method<"getBuiltInDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> getBuiltInDrawable(jint outWidth, jint outHeight, jboolean scaleToFit, jfloat horizontalAlignment, jfloat verticalAlignment) { return call_method<"getBuiltInDrawable", jni::ref<android::graphics::drawable::Drawable>>(outWidth, outHeight, scaleToFit, horizontalAlignment, verticalAlignment); }
	jni::ref<android::graphics::drawable::Drawable> peekDrawable() { return call_method<"peekDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> getFastDrawable() { return call_method<"getFastDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> peekFastDrawable() { return call_method<"peekFastDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void forgetLoadedWallpaper() { return call_method<"forgetLoadedWallpaper", void>(); }
	jni::ref<android::app::WallpaperInfo> getWallpaperInfo() { return call_method<"getWallpaperInfo", jni::ref<android::app::WallpaperInfo>>(); }
	jni::ref<android::content::Intent> getCropAndSetWallpaperIntent(jni::ref<android::net::Uri> imageUri) { return call_method<"getCropAndSetWallpaperIntent", jni::ref<android::content::Intent>>(imageUri); }
	void setResource(jint resid) { return call_method<"setResource", void>(resid); }
	void setBitmap(jni::ref<android::graphics::Bitmap> bitmap) { return call_method<"setBitmap", void>(bitmap); }
	void setStream(jni::ref<java::io::InputStream> data) { return call_method<"setStream", void>(data); }
	jboolean hasResourceWallpaper(jint resid) { return call_method<"hasResourceWallpaper", jboolean>(resid); }
	jint getDesiredMinimumWidth() { return call_method<"getDesiredMinimumWidth", jint>(); }
	jint getDesiredMinimumHeight() { return call_method<"getDesiredMinimumHeight", jint>(); }
	void suggestDesiredDimensions(jint minimumWidth, jint minimumHeight) { return call_method<"suggestDesiredDimensions", void>(minimumWidth, minimumHeight); }
	void setWallpaperOffsets(jni::ref<android::os::IBinder> windowToken, jfloat xOffset, jfloat yOffset) { return call_method<"setWallpaperOffsets", void>(windowToken, xOffset, yOffset); }
	void setWallpaperOffsetSteps(jfloat xStep, jfloat yStep) { return call_method<"setWallpaperOffsetSteps", void>(xStep, yStep); }
	void sendWallpaperCommand(jni::ref<android::os::IBinder> windowToken, jni::ref<java::lang::String> action, jint x, jint y, jint z, jni::ref<android::os::Bundle> extras) { return call_method<"sendWallpaperCommand", void>(windowToken, action, x, y, z, extras); }
	void clearWallpaperOffsets(jni::ref<android::os::IBinder> windowToken) { return call_method<"clearWallpaperOffsets", void>(windowToken); }
	void clear() { return call_method<"clear", void>(); }

protected:

	WallpaperManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER
