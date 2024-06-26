// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>
#include <scapix/java_api/android/media/MediaDrmThrowable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaDrm_SessionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaDrm_SessionException>
{
	static constexpr fixed_string class_name = "android/media/MediaDrm$SessionException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException, scapix::java_api::android::media::MediaDrmThrowable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaDrm_SessionException : public jni::object_base<"android/media/MediaDrm$SessionException",
	java::lang::RuntimeException,
	android::media::MediaDrmThrowable>
{
public:

	static jint ERROR_RESOURCE_CONTENTION() { return get_static_field<"ERROR_RESOURCE_CONTENTION", jint>(); }
	static jint ERROR_UNKNOWN() { return get_static_field<"ERROR_UNKNOWN", jint>(); }

	static jni::ref<android::media::MediaDrm_SessionException> new_object(jint errorCode, jni::ref<java::lang::String> detailMessage) { return base_::new_object(errorCode, detailMessage); }
	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }
	jint getVendorError() { return call_method<"getVendorError", jint>(); }
	jint getOemError() { return call_method<"getOemError", jint>(); }
	jint getErrorContext() { return call_method<"getErrorContext", jint>(); }
	jboolean isTransient() { return call_method<"isTransient", jboolean>(); }

protected:

	MediaDrm_SessionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION
