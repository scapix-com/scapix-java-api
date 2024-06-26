// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodec_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodec_Callback>
{
	static constexpr fixed_string class_name = "android/media/MediaCodec$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCodec.h>
#include <scapix/java_api/android/media/MediaCodec_BufferInfo.h>
#include <scapix/java_api/android/media/MediaCodec_CodecException.h>
#include <scapix/java_api/android/media/MediaCodec_CryptoException.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodec_Callback : public jni::object_base<"android/media/MediaCodec$Callback",
	java::lang::Object>
{
public:

	static jni::ref<android::media::MediaCodec_Callback> new_object() { return base_::new_object(); }
	void onInputBufferAvailable(jni::ref<android::media::MediaCodec> p1, jint p2) { return call_method<"onInputBufferAvailable", void>(p1, p2); }
	void onOutputBufferAvailable(jni::ref<android::media::MediaCodec> p1, jint p2, jni::ref<android::media::MediaCodec_BufferInfo> p3) { return call_method<"onOutputBufferAvailable", void>(p1, p2, p3); }
	void onError(jni::ref<android::media::MediaCodec> p1, jni::ref<android::media::MediaCodec_CodecException> p2) { return call_method<"onError", void>(p1, p2); }
	void onCryptoError(jni::ref<android::media::MediaCodec> codec, jni::ref<android::media::MediaCodec_CryptoException> e) { return call_method<"onCryptoError", void>(codec, e); }
	void onOutputFormatChanged(jni::ref<android::media::MediaCodec> p1, jni::ref<android::media::MediaFormat> p2) { return call_method<"onOutputFormatChanged", void>(p1, p2); }

protected:

	MediaCodec_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_CALLBACK
