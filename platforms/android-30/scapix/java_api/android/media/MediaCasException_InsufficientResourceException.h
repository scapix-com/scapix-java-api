// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/MediaCasException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_INSUFFICIENTRESOURCEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_INSUFFICIENTRESOURCEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCasException_InsufficientResourceException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCasException_InsufficientResourceException>
{
	static constexpr fixed_string class_name = "android/media/MediaCasException$InsufficientResourceException";
	using base_classes = std::tuple<scapix::java_api::android::media::MediaCasException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_INSUFFICIENTRESOURCEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_INSUFFICIENTRESOURCEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_INSUFFICIENTRESOURCEEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCasException_InsufficientResourceException : public jni::object_base<"android/media/MediaCasException$InsufficientResourceException",
	android::media::MediaCasException>
{
public:


protected:

	MediaCasException_InsufficientResourceException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_INSUFFICIENTRESOURCEEXCEPTION