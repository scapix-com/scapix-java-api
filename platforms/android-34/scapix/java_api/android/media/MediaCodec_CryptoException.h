// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>
#include <scapix/java_api/android/media/MediaDrmThrowable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodec_CryptoException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodec_CryptoException>
{
	static constexpr fixed_string class_name = "android/media/MediaCodec$CryptoException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException, scapix::java_api::android::media::MediaDrmThrowable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCodec_CryptoInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodec_CryptoException : public jni::object_base<"android/media/MediaCodec$CryptoException",
	java::lang::RuntimeException,
	android::media::MediaDrmThrowable>
{
public:

	static jint ERROR_FRAME_TOO_LARGE() { return get_static_field<"ERROR_FRAME_TOO_LARGE", jint>(); }
	static jint ERROR_INSUFFICIENT_OUTPUT_PROTECTION() { return get_static_field<"ERROR_INSUFFICIENT_OUTPUT_PROTECTION", jint>(); }
	static jint ERROR_INSUFFICIENT_SECURITY() { return get_static_field<"ERROR_INSUFFICIENT_SECURITY", jint>(); }
	static jint ERROR_KEY_EXPIRED() { return get_static_field<"ERROR_KEY_EXPIRED", jint>(); }
	static jint ERROR_LOST_STATE() { return get_static_field<"ERROR_LOST_STATE", jint>(); }
	static jint ERROR_NO_KEY() { return get_static_field<"ERROR_NO_KEY", jint>(); }
	static jint ERROR_RESOURCE_BUSY() { return get_static_field<"ERROR_RESOURCE_BUSY", jint>(); }
	static jint ERROR_SESSION_NOT_OPENED() { return get_static_field<"ERROR_SESSION_NOT_OPENED", jint>(); }
	static jint ERROR_UNSUPPORTED_OPERATION() { return get_static_field<"ERROR_UNSUPPORTED_OPERATION", jint>(); }

	static jni::ref<android::media::MediaCodec_CryptoException> new_object(jint errorCode, jni::ref<java::lang::String> detailMessage) { return base_::new_object(errorCode, detailMessage); }
	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }
	jni::ref<android::media::MediaCodec_CryptoInfo> getCryptoInfo() { return call_method<"getCryptoInfo", jni::ref<android::media::MediaCodec_CryptoInfo>>(); }
	jint getVendorError() { return call_method<"getVendorError", jint>(); }
	jint getOemError() { return call_method<"getOemError", jint>(); }
	jint getErrorContext() { return call_method<"getErrorContext", jint>(); }

protected:

	MediaCodec_CryptoException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION
