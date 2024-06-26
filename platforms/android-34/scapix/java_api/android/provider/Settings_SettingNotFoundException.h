// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/util/AndroidException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Settings_SettingNotFoundException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Settings_SettingNotFoundException>
{
	static constexpr fixed_string class_name = "android/provider/Settings$SettingNotFoundException";
	using base_classes = std::tuple<scapix::java_api::android::util::AndroidException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Settings_SettingNotFoundException : public jni::object_base<"android/provider/Settings$SettingNotFoundException",
	android::util::AndroidException>
{
public:

	static jni::ref<android::provider::Settings_SettingNotFoundException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }

protected:

	Settings_SettingNotFoundException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SETTINGNOTFOUNDEXCEPTION
