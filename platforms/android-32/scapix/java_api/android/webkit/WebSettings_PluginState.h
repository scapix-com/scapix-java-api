// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebSettings_PluginState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebSettings_PluginState>
{
	static constexpr fixed_string class_name = "android/webkit/WebSettings$PluginState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebSettings_PluginState : public jni::object_base<"android/webkit/WebSettings$PluginState",
	java::lang::Enum>
{
public:

	static jni::ref<android::webkit::WebSettings_PluginState> ON() { return get_static_field<"ON", jni::ref<android::webkit::WebSettings_PluginState>>(); }
	static jni::ref<android::webkit::WebSettings_PluginState> ON_DEMAND() { return get_static_field<"ON_DEMAND", jni::ref<android::webkit::WebSettings_PluginState>>(); }
	static jni::ref<android::webkit::WebSettings_PluginState> OFF() { return get_static_field<"OFF", jni::ref<android::webkit::WebSettings_PluginState>>(); }

	static jni::ref<jni::array<android::webkit::WebSettings_PluginState>> values() { return call_static_method<"values", jni::ref<jni::array<android::webkit::WebSettings_PluginState>>>(); }
	static jni::ref<android::webkit::WebSettings_PluginState> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::webkit::WebSettings_PluginState>>(name); }

protected:

	WebSettings_PluginState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE
