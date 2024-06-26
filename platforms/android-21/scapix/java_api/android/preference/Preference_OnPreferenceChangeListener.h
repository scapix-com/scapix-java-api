// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::preference { class Preference_OnPreferenceChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::preference::Preference_OnPreferenceChangeListener>
{
	static constexpr fixed_string class_name = "android/preference/Preference$OnPreferenceChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/preference/Preference.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::preference::Preference_OnPreferenceChangeListener : public jni::object_base<"android/preference/Preference$OnPreferenceChangeListener",
	java::lang::Object>
{
public:

	jboolean onPreferenceChange(jni::ref<android::preference::Preference> p1, jni::ref<java::lang::Object> p2) { return call_method<"onPreferenceChange", jboolean>(p1, p2); }

protected:

	Preference_OnPreferenceChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER
