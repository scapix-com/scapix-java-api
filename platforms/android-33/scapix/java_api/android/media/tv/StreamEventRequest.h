// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/tv/BroadcastInfoRequest.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_STREAMEVENTREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_STREAMEVENTREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class StreamEventRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::StreamEventRequest>
{
	static constexpr fixed_string class_name = "android/media/tv/StreamEventRequest";
	using base_classes = std::tuple<scapix::java_api::android::media::tv::BroadcastInfoRequest, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_STREAMEVENTREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_STREAMEVENTREQUEST)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_STREAMEVENTREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::StreamEventRequest : public jni::object_base<"android/media/tv/StreamEventRequest",
	android::media::tv::BroadcastInfoRequest,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::media::tv::StreamEventRequest> new_object(jint requestId, jint option, jni::ref<android::net::Uri> targetUri, jni::ref<java::lang::String> eventName) { return base_::new_object(requestId, option, targetUri, eventName); }
	jni::ref<android::net::Uri> getTargetUri() { return call_method<"getTargetUri", jni::ref<android::net::Uri>>(); }
	jni::ref<java::lang::String> getEventName() { return call_method<"getEventName", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	StreamEventRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_STREAMEVENTREQUEST
