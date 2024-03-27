// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/tv/BroadcastInfoResponse.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TSRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TSRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TsResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TsResponse>
{
	static constexpr fixed_string class_name = "android/media/tv/TsResponse";
	using base_classes = std::tuple<scapix::java_api::android::media::tv::BroadcastInfoResponse, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TSRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TSRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TSRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TsResponse : public jni::object_base<"android/media/tv/TsResponse",
	android::media::tv::BroadcastInfoResponse,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::media::tv::TsResponse> new_object(jint requestId, jint sequence, jint responseResult, jni::ref<java::lang::String> sharedFilterToken) { return base_::new_object(requestId, sequence, responseResult, sharedFilterToken); }
	jni::ref<java::lang::String> getSharedFilterToken() { return call_method<"getSharedFilterToken", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	TsResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TSRESPONSE
