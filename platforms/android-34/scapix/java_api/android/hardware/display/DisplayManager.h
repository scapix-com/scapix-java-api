// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::display { class DisplayManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::display::DisplayManager>
{
	static constexpr fixed_string class_name = "android/hardware/display/DisplayManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/display/DisplayManager_DisplayListener.h>
#include <scapix/java_api/android/hardware/display/HdrConversionMode.h>
#include <scapix/java_api/android/hardware/display/VirtualDisplay.h>
#include <scapix/java_api/android/hardware/display/VirtualDisplay_Callback.h>
#include <scapix/java_api/android/hardware/display/VirtualDisplayConfig.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/Display.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::display::DisplayManager : public jni::object_base<"android/hardware/display/DisplayManager",
	java::lang::Object>
{
public:

	using DisplayListener = DisplayManager_DisplayListener;

	static jni::ref<java::lang::String> DISPLAY_CATEGORY_PRESENTATION() { return get_static_field<"DISPLAY_CATEGORY_PRESENTATION", jni::ref<java::lang::String>>(); }
	static jint MATCH_CONTENT_FRAMERATE_ALWAYS() { return get_static_field<"MATCH_CONTENT_FRAMERATE_ALWAYS", jint>(); }
	static jint MATCH_CONTENT_FRAMERATE_NEVER() { return get_static_field<"MATCH_CONTENT_FRAMERATE_NEVER", jint>(); }
	static jint MATCH_CONTENT_FRAMERATE_SEAMLESSS_ONLY() { return get_static_field<"MATCH_CONTENT_FRAMERATE_SEAMLESSS_ONLY", jint>(); }
	static jint MATCH_CONTENT_FRAMERATE_UNKNOWN() { return get_static_field<"MATCH_CONTENT_FRAMERATE_UNKNOWN", jint>(); }
	static jint VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR() { return get_static_field<"VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR", jint>(); }
	static jint VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY() { return get_static_field<"VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY", jint>(); }
	static jint VIRTUAL_DISPLAY_FLAG_PRESENTATION() { return get_static_field<"VIRTUAL_DISPLAY_FLAG_PRESENTATION", jint>(); }
	static jint VIRTUAL_DISPLAY_FLAG_PUBLIC() { return get_static_field<"VIRTUAL_DISPLAY_FLAG_PUBLIC", jint>(); }
	static jint VIRTUAL_DISPLAY_FLAG_SECURE() { return get_static_field<"VIRTUAL_DISPLAY_FLAG_SECURE", jint>(); }

	jni::ref<android::view::Display> getDisplay(jint displayId) { return call_method<"getDisplay", jni::ref<android::view::Display>>(displayId); }
	jni::ref<jni::array<android::view::Display>> getDisplays() { return call_method<"getDisplays", jni::ref<jni::array<android::view::Display>>>(); }
	jni::ref<jni::array<android::view::Display>> getDisplays(jni::ref<java::lang::String> category) { return call_method<"getDisplays", jni::ref<jni::array<android::view::Display>>>(category); }
	void registerDisplayListener(jni::ref<android::hardware::display::DisplayManager_DisplayListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"registerDisplayListener", void>(listener, handler); }
	void unregisterDisplayListener(jni::ref<android::hardware::display::DisplayManager_DisplayListener> listener) { return call_method<"unregisterDisplayListener", void>(listener); }
	jni::ref<android::hardware::display::VirtualDisplay> createVirtualDisplay(jni::ref<java::lang::String> name, jint width, jint height, jint densityDpi, jni::ref<android::view::Surface> surface, jint flags) { return call_method<"createVirtualDisplay", jni::ref<android::hardware::display::VirtualDisplay>>(name, width, height, densityDpi, surface, flags); }
	jni::ref<android::hardware::display::VirtualDisplay> createVirtualDisplay(jni::ref<java::lang::String> name, jint width, jint height, jint densityDpi, jni::ref<android::view::Surface> surface, jint flags, jni::ref<android::hardware::display::VirtualDisplay_Callback> callback, jni::ref<android::os::Handler> handler) { return call_method<"createVirtualDisplay", jni::ref<android::hardware::display::VirtualDisplay>>(name, width, height, densityDpi, surface, flags, callback, handler); }
	jni::ref<android::hardware::display::VirtualDisplay> createVirtualDisplay(jni::ref<android::hardware::display::VirtualDisplayConfig> config) { return call_method<"createVirtualDisplay", jni::ref<android::hardware::display::VirtualDisplay>>(config); }
	jni::ref<android::hardware::display::VirtualDisplay> createVirtualDisplay(jni::ref<android::hardware::display::VirtualDisplayConfig> config, jni::ref<android::os::Handler> handler, jni::ref<android::hardware::display::VirtualDisplay_Callback> callback) { return call_method<"createVirtualDisplay", jni::ref<android::hardware::display::VirtualDisplay>>(config, handler, callback); }
	jni::ref<android::hardware::display::HdrConversionMode> getHdrConversionMode() { return call_method<"getHdrConversionMode", jni::ref<android::hardware::display::HdrConversionMode>>(); }
	jint getMatchContentFrameRateUserPreference() { return call_method<"getMatchContentFrameRateUserPreference", jint>(); }

protected:

	DisplayManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER
