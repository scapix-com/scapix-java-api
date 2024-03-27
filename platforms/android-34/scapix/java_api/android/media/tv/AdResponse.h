// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_ADRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_ADRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class AdResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::AdResponse>
{
	static constexpr fixed_string class_name = "android/media/tv/AdResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_ADRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_ADRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_ADRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::AdResponse : public jni::object_base<"android/media/tv/AdResponse",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint RESPONSE_TYPE_BUFFERING() { return get_static_field<"RESPONSE_TYPE_BUFFERING", jint>(); }
	static jint RESPONSE_TYPE_ERROR() { return get_static_field<"RESPONSE_TYPE_ERROR", jint>(); }
	static jint RESPONSE_TYPE_FINISHED() { return get_static_field<"RESPONSE_TYPE_FINISHED", jint>(); }
	static jint RESPONSE_TYPE_PLAYING() { return get_static_field<"RESPONSE_TYPE_PLAYING", jint>(); }
	static jint RESPONSE_TYPE_STOPPED() { return get_static_field<"RESPONSE_TYPE_STOPPED", jint>(); }

	static jni::ref<android::media::tv::AdResponse> new_object(jint id, jint responseType, jlong elapsedTime) { return base_::new_object(id, responseType, elapsedTime); }
	jint getId() { return call_method<"getId", jint>(); }
	jint getResponseType() { return call_method<"getResponseType", jint>(); }
	jlong getElapsedTimeMillis() { return call_method<"getElapsedTimeMillis", jlong>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	AdResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_ADRESPONSE