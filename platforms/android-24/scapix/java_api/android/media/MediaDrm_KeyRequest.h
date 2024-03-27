// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_KEYREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_KEYREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaDrm_KeyRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaDrm_KeyRequest>
{
	static constexpr fixed_string class_name = "android/media/MediaDrm$KeyRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_KEYREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_KEYREQUEST)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_KEYREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaDrm_KeyRequest : public jni::object_base<"android/media/MediaDrm$KeyRequest",
	java::lang::Object>
{
public:

	static jint REQUEST_TYPE_INITIAL() { return get_static_field<"REQUEST_TYPE_INITIAL", jint>(); }
	static jint REQUEST_TYPE_RELEASE() { return get_static_field<"REQUEST_TYPE_RELEASE", jint>(); }
	static jint REQUEST_TYPE_RENEWAL() { return get_static_field<"REQUEST_TYPE_RENEWAL", jint>(); }

	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getDefaultUrl() { return call_method<"getDefaultUrl", jni::ref<java::lang::String>>(); }
	jint getRequestType() { return call_method<"getRequestType", jint>(); }

protected:

	MediaDrm_KeyRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_KEYREQUEST