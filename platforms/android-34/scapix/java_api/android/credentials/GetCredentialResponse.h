// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CREDENTIALS_GETCREDENTIALRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_CREDENTIALS_GETCREDENTIALRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::credentials { class GetCredentialResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::credentials::GetCredentialResponse>
{
	static constexpr fixed_string class_name = "android/credentials/GetCredentialResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CREDENTIALS_GETCREDENTIALRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CREDENTIALS_GETCREDENTIALRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_CREDENTIALS_GETCREDENTIALRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/credentials/Credential.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::credentials::GetCredentialResponse : public jni::object_base<"android/credentials/GetCredentialResponse",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::credentials::GetCredentialResponse> new_object(jni::ref<android::credentials::Credential> credential) { return base_::new_object(credential); }
	jni::ref<android::credentials::Credential> getCredential() { return call_method<"getCredential", jni::ref<android::credentials::Credential>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GetCredentialResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CREDENTIALS_GETCREDENTIALRESPONSE
