// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/MediaCasException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCasException_ResourceBusyException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCasException_ResourceBusyException>
{
	static constexpr fixed_string class_name = "android/media/MediaCasException$ResourceBusyException";
	using base_classes = std::tuple<scapix::java_api::android::media::MediaCasException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCasException_ResourceBusyException : public jni::object_base<"android/media/MediaCasException$ResourceBusyException",
	android::media::MediaCasException>
{
public:


protected:

	MediaCasException_ResourceBusyException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION
