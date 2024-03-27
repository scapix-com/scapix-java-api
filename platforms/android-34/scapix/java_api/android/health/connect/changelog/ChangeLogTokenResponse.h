// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::changelog { class ChangeLogTokenResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::changelog::ChangeLogTokenResponse>
{
	static constexpr fixed_string class_name = "android/health/connect/changelog/ChangeLogTokenResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::changelog::ChangeLogTokenResponse : public jni::object_base<"android/health/connect/changelog/ChangeLogTokenResponse",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> getToken() { return call_method<"getToken", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	ChangeLogTokenResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENRESPONSE
