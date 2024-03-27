// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::preference { class PreferenceManager_OnActivityStopListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::preference::PreferenceManager_OnActivityStopListener>
{
	static constexpr fixed_string class_name = "android/preference/PreferenceManager$OnActivityStopListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER)
#define SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::preference::PreferenceManager_OnActivityStopListener : public jni::object_base<"android/preference/PreferenceManager$OnActivityStopListener",
	java::lang::Object>
{
public:

	void onActivityStop() { return call_method<"onActivityStop", void>(); }

protected:

	PreferenceManager_OnActivityStopListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER