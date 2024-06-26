// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_USAGE_CONFIGURATIONSTATS_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_USAGE_CONFIGURATIONSTATS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::usage { class ConfigurationStats; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::usage::ConfigurationStats>
{
	static constexpr fixed_string class_name = "android/app/usage/ConfigurationStats";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_USAGE_CONFIGURATIONSTATS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_USAGE_CONFIGURATIONSTATS)
#define SCAPIX_JAVA_API_ANDROID_APP_USAGE_CONFIGURATIONSTATS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::usage::ConfigurationStats : public jni::object_base<"android/app/usage/ConfigurationStats",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::app::usage::ConfigurationStats> new_object(jni::ref<android::app::usage::ConfigurationStats> stats) { return base_::new_object(stats); }
	jni::ref<android::content::res::Configuration> getConfiguration() { return call_method<"getConfiguration", jni::ref<android::content::res::Configuration>>(); }
	jlong getFirstTimeStamp() { return call_method<"getFirstTimeStamp", jlong>(); }
	jlong getLastTimeStamp() { return call_method<"getLastTimeStamp", jlong>(); }
	jlong getLastTimeActive() { return call_method<"getLastTimeActive", jlong>(); }
	jlong getTotalTimeActive() { return call_method<"getTotalTimeActive", jlong>(); }
	jint getActivationCount() { return call_method<"getActivationCount", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	ConfigurationStats(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_USAGE_CONFIGURATIONSTATS
