// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::credentials { class BeginGetCredentialRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::credentials::BeginGetCredentialRequest>
{
	static constexpr fixed_string class_name = "android/service/credentials/BeginGetCredentialRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALREQUEST)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/service/credentials/CallingAppInfo.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/service/credentials/BeginGetCredentialRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::credentials::BeginGetCredentialRequest : public jni::object_base<"android/service/credentials/BeginGetCredentialRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = BeginGetCredentialRequest_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<android::service::credentials::CallingAppInfo> getCallingAppInfo() { return call_method<"getCallingAppInfo", jni::ref<android::service::credentials::CallingAppInfo>>(); }
	jni::ref<java::util::List> getBeginGetCredentialOptions() { return call_method<"getBeginGetCredentialOptions", jni::ref<java::util::List>>(); }

protected:

	BeginGetCredentialRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALREQUEST
