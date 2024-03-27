// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCasException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCasException>
{
	static constexpr fixed_string class_name = "android/media/MediaCasException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCasException_UnsupportedCasException.h>
#include <scapix/java_api/android/media/MediaCasException_ResourceBusyException.h>
#include <scapix/java_api/android/media/MediaCasException_NotProvisionedException.h>
#include <scapix/java_api/android/media/MediaCasException_InsufficientResourceException.h>
#include <scapix/java_api/android/media/MediaCasException_DeniedByServerException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCasException : public jni::object_base<"android/media/MediaCasException",
	java::lang::Exception>
{
public:

	using UnsupportedCasException = MediaCasException_UnsupportedCasException;
	using ResourceBusyException = MediaCasException_ResourceBusyException;
	using NotProvisionedException = MediaCasException_NotProvisionedException;
	using InsufficientResourceException = MediaCasException_InsufficientResourceException;
	using DeniedByServerException = MediaCasException_DeniedByServerException;


protected:

	MediaCasException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACASEXCEPTION
