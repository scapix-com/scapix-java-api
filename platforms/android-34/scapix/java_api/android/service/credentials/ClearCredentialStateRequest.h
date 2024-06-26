// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CLEARCREDENTIALSTATEREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CLEARCREDENTIALSTATEREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::credentials { class ClearCredentialStateRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::credentials::ClearCredentialStateRequest>
{
	static constexpr fixed_string class_name = "android/service/credentials/ClearCredentialStateRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CLEARCREDENTIALSTATEREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CLEARCREDENTIALSTATEREQUEST)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CLEARCREDENTIALSTATEREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/service/credentials/CallingAppInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::credentials::ClearCredentialStateRequest : public jni::object_base<"android/service/credentials/ClearCredentialStateRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::service::credentials::ClearCredentialStateRequest> new_object(jni::ref<android::service::credentials::CallingAppInfo> callingAppInfo, jni::ref<android::os::Bundle> data) { return base_::new_object(callingAppInfo, data); }
	jni::ref<android::os::Bundle> getData() { return call_method<"getData", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::service::credentials::CallingAppInfo> getCallingAppInfo() { return call_method<"getCallingAppInfo", jni::ref<android::service::credentials::CallingAppInfo>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ClearCredentialStateRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CLEARCREDENTIALSTATEREQUEST
