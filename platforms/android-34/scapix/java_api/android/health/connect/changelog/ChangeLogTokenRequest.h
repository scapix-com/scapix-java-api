// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::changelog { class ChangeLogTokenRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::changelog::ChangeLogTokenRequest>
{
	static constexpr fixed_string class_name = "android/health/connect/changelog/ChangeLogTokenRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENREQUEST)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/health/connect/changelog/ChangeLogTokenRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::changelog::ChangeLogTokenRequest : public jni::object_base<"android/health/connect/changelog/ChangeLogTokenRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = ChangeLogTokenRequest_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::util::Set> getDataOriginFilters() { return call_method<"getDataOriginFilters", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getRecordTypes() { return call_method<"getRecordTypes", jni::ref<java::util::Set>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	ChangeLogTokenRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGTOKENREQUEST
