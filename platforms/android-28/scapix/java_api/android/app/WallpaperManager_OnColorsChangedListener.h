// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_ONCOLORSCHANGEDLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_ONCOLORSCHANGEDLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class WallpaperManager_OnColorsChangedListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::WallpaperManager_OnColorsChangedListener>
{
	static constexpr fixed_string class_name = "android/app/WallpaperManager$OnColorsChangedListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_ONCOLORSCHANGEDLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_ONCOLORSCHANGEDLISTENER)
#define SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_ONCOLORSCHANGEDLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/WallpaperColors.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::WallpaperManager_OnColorsChangedListener : public jni::object_base<"android/app/WallpaperManager$OnColorsChangedListener",
	java::lang::Object>
{
public:

	void onColorsChanged(jni::ref<android::app::WallpaperColors> p1, jint p2) { return call_method<"onColorsChanged", void>(p1, p2); }

protected:

	WallpaperManager_OnColorsChangedListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERMANAGER_ONCOLORSCHANGEDLISTENER
