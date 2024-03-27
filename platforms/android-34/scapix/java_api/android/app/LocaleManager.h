// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_LOCALEMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_LOCALEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class LocaleManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::LocaleManager>
{
	static constexpr fixed_string class_name = "android/app/LocaleManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LOCALEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_LOCALEMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_LOCALEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/LocaleConfig.h>
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::LocaleManager : public jni::object_base<"android/app/LocaleManager",
	java::lang::Object>
{
public:

	void setApplicationLocales(jni::ref<android::os::LocaleList> locales) { return call_method<"setApplicationLocales", void>(locales); }
	jni::ref<android::os::LocaleList> getApplicationLocales() { return call_method<"getApplicationLocales", jni::ref<android::os::LocaleList>>(); }
	jni::ref<android::os::LocaleList> getApplicationLocales(jni::ref<java::lang::String> appPackageName) { return call_method<"getApplicationLocales", jni::ref<android::os::LocaleList>>(appPackageName); }
	jni::ref<android::os::LocaleList> getSystemLocales() { return call_method<"getSystemLocales", jni::ref<android::os::LocaleList>>(); }
	void setOverrideLocaleConfig(jni::ref<android::app::LocaleConfig> localeConfig) { return call_method<"setOverrideLocaleConfig", void>(localeConfig); }
	jni::ref<android::app::LocaleConfig> getOverrideLocaleConfig() { return call_method<"getOverrideLocaleConfig", jni::ref<android::app::LocaleConfig>>(); }

protected:

	LocaleManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LOCALEMANAGER
