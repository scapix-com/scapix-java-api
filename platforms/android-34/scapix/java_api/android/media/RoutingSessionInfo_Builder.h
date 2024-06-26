// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTINGSESSIONINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTINGSESSIONINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class RoutingSessionInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::RoutingSessionInfo_Builder>
{
	static constexpr fixed_string class_name = "android/media/RoutingSessionInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTINGSESSIONINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTINGSESSIONINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTINGSESSIONINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/RoutingSessionInfo.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::RoutingSessionInfo_Builder : public jni::object_base<"android/media/RoutingSessionInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::RoutingSessionInfo_Builder> new_object(jni::ref<java::lang::String> id, jni::ref<java::lang::String> clientPackageName) { return base_::new_object(id, clientPackageName); }
	static jni::ref<android::media::RoutingSessionInfo_Builder> new_object(jni::ref<android::media::RoutingSessionInfo> sessionInfo) { return base_::new_object(sessionInfo); }
	jni::ref<android::media::RoutingSessionInfo_Builder> setName(jni::ref<java::lang::CharSequence> name) { return call_method<"setName", jni::ref<android::media::RoutingSessionInfo_Builder>>(name); }
	jni::ref<android::media::RoutingSessionInfo_Builder> clearSelectedRoutes() { return call_method<"clearSelectedRoutes", jni::ref<android::media::RoutingSessionInfo_Builder>>(); }
	jni::ref<android::media::RoutingSessionInfo_Builder> addSelectedRoute(jni::ref<java::lang::String> routeId) { return call_method<"addSelectedRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> removeSelectedRoute(jni::ref<java::lang::String> routeId) { return call_method<"removeSelectedRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> clearSelectableRoutes() { return call_method<"clearSelectableRoutes", jni::ref<android::media::RoutingSessionInfo_Builder>>(); }
	jni::ref<android::media::RoutingSessionInfo_Builder> addSelectableRoute(jni::ref<java::lang::String> routeId) { return call_method<"addSelectableRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> removeSelectableRoute(jni::ref<java::lang::String> routeId) { return call_method<"removeSelectableRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> clearDeselectableRoutes() { return call_method<"clearDeselectableRoutes", jni::ref<android::media::RoutingSessionInfo_Builder>>(); }
	jni::ref<android::media::RoutingSessionInfo_Builder> addDeselectableRoute(jni::ref<java::lang::String> routeId) { return call_method<"addDeselectableRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> removeDeselectableRoute(jni::ref<java::lang::String> routeId) { return call_method<"removeDeselectableRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> clearTransferableRoutes() { return call_method<"clearTransferableRoutes", jni::ref<android::media::RoutingSessionInfo_Builder>>(); }
	jni::ref<android::media::RoutingSessionInfo_Builder> addTransferableRoute(jni::ref<java::lang::String> routeId) { return call_method<"addTransferableRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> removeTransferableRoute(jni::ref<java::lang::String> routeId) { return call_method<"removeTransferableRoute", jni::ref<android::media::RoutingSessionInfo_Builder>>(routeId); }
	jni::ref<android::media::RoutingSessionInfo_Builder> setVolumeHandling(jint volumeHandling) { return call_method<"setVolumeHandling", jni::ref<android::media::RoutingSessionInfo_Builder>>(volumeHandling); }
	jni::ref<android::media::RoutingSessionInfo_Builder> setVolumeMax(jint volumeMax) { return call_method<"setVolumeMax", jni::ref<android::media::RoutingSessionInfo_Builder>>(volumeMax); }
	jni::ref<android::media::RoutingSessionInfo_Builder> setVolume(jint volume) { return call_method<"setVolume", jni::ref<android::media::RoutingSessionInfo_Builder>>(volume); }
	jni::ref<android::media::RoutingSessionInfo_Builder> setControlHints(jni::ref<android::os::Bundle> controlHints) { return call_method<"setControlHints", jni::ref<android::media::RoutingSessionInfo_Builder>>(controlHints); }
	jni::ref<android::media::RoutingSessionInfo> build() { return call_method<"build", jni::ref<android::media::RoutingSessionInfo>>(); }

protected:

	RoutingSessionInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTINGSESSIONINFO_BUILDER
