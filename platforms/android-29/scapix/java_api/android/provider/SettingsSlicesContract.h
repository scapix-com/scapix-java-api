// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGSSLICESCONTRACT_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGSSLICESCONTRACT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class SettingsSlicesContract; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::SettingsSlicesContract>
{
	static constexpr fixed_string class_name = "android/provider/SettingsSlicesContract";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGSSLICESCONTRACT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGSSLICESCONTRACT)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGSSLICESCONTRACT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::SettingsSlicesContract : public jni::object_base<"android/provider/SettingsSlicesContract",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> AUTHORITY() { return get_static_field<"AUTHORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> BASE_URI() { return get_static_field<"BASE_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> KEY_AIRPLANE_MODE() { return get_static_field<"KEY_AIRPLANE_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_BATTERY_SAVER() { return get_static_field<"KEY_BATTERY_SAVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_BLUETOOTH() { return get_static_field<"KEY_BLUETOOTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_LOCATION() { return get_static_field<"KEY_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_WIFI() { return get_static_field<"KEY_WIFI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PATH_SETTING_ACTION() { return get_static_field<"PATH_SETTING_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PATH_SETTING_INTENT() { return get_static_field<"PATH_SETTING_INTENT", jni::ref<java::lang::String>>(); }


protected:

	SettingsSlicesContract(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGSSLICESCONTRACT