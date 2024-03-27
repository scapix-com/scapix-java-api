// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalStateException.h>
#include <scapix/java_api/android/media/MediaDrmThrowable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaDrm_MediaDrmStateException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaDrm_MediaDrmStateException>
{
	static constexpr fixed_string class_name = "android/media/MediaDrm$MediaDrmStateException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalStateException, scapix::java_api::android::media::MediaDrmThrowable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaDrm_MediaDrmStateException : public jni::object_base<"android/media/MediaDrm$MediaDrmStateException",
	java::lang::IllegalStateException,
	android::media::MediaDrmThrowable>
{
public:

	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }
	jint getVendorError() { return call_method<"getVendorError", jint>(); }
	jint getOemError() { return call_method<"getOemError", jint>(); }
	jint getErrorContext() { return call_method<"getErrorContext", jint>(); }
	jboolean isTransient() { return call_method<"isTransient", jboolean>(); }
	jni::ref<java::lang::String> getDiagnosticInfo() { return call_method<"getDiagnosticInfo", jni::ref<java::lang::String>>(); }

protected:

	MediaDrm_MediaDrmStateException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION