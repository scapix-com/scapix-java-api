// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/tv/BroadcastInfoResponse.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TABLERESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TABLERESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TableResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TableResponse>
{
	static constexpr fixed_string class_name = "android/media/tv/TableResponse";
	using base_classes = std::tuple<scapix::java_api::android::media::tv::BroadcastInfoResponse, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TABLERESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TABLERESPONSE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TABLERESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TableResponse : public jni::object_base<"android/media/tv/TableResponse",
	android::media::tv::BroadcastInfoResponse,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::media::tv::TableResponse> new_object(jint requestId, jint sequence, jint responseResult, jni::ref<android::net::Uri> tableUri, jint version, jint size) { return base_::new_object(requestId, sequence, responseResult, tableUri, version, size); }
	jni::ref<android::net::Uri> getTableUri() { return call_method<"getTableUri", jni::ref<android::net::Uri>>(); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jint getSize() { return call_method<"getSize", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	TableResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TABLERESPONSE
