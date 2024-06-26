// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalStateException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMRESETEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMRESETEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaDrmResetException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaDrmResetException>
{
	static constexpr fixed_string class_name = "android/media/MediaDrmResetException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalStateException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMRESETEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMRESETEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMRESETEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaDrmResetException : public jni::object_base<"android/media/MediaDrmResetException",
	java::lang::IllegalStateException>
{
public:

	static jni::ref<android::media::MediaDrmResetException> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }

protected:

	MediaDrmResetException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMRESETEXCEPTION
