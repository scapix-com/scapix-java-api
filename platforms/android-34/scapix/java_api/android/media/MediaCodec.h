// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodec>
{
	static constexpr fixed_string class_name = "android/media/MediaCodec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/HardwareBuffer.h>
#include <scapix/java_api/android/media/AudioPresentation.h>
#include <scapix/java_api/android/media/Image.h>
#include <scapix/java_api/android/media/MediaCodec_BufferInfo.h>
#include <scapix/java_api/android/media/MediaCodec_Callback.h>
#include <scapix/java_api/android/media/MediaCodec_CryptoInfo.h>
#include <scapix/java_api/android/media/MediaCodec_OnFirstTunnelFrameReadyListener.h>
#include <scapix/java_api/android/media/MediaCodec_OnFrameRenderedListener.h>
#include <scapix/java_api/android/media/MediaCodec_OutputFrame.h>
#include <scapix/java_api/android/media/MediaCodec_ParameterDescriptor.h>
#include <scapix/java_api/android/media/MediaCodec_QueueRequest.h>
#include <scapix/java_api/android/media/MediaCodecInfo.h>
#include <scapix/java_api/android/media/MediaCrypto.h>
#include <scapix/java_api/android/media/MediaDescrambler.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/media/MediaCodec_MetricsConstants.h>
#include <scapix/java_api/android/media/MediaCodec_LinearBlock.h>
#include <scapix/java_api/android/media/MediaCodec_InvalidBufferFlagsException.h>
#include <scapix/java_api/android/media/MediaCodec_IncompatibleWithBlockModelException.h>
#include <scapix/java_api/android/media/MediaCodec_CryptoException.h>
#include <scapix/java_api/android/media/MediaCodec_CodecException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodec : public jni::object_base<"android/media/MediaCodec",
	java::lang::Object>
{
public:

	using QueueRequest = MediaCodec_QueueRequest;
	using ParameterDescriptor = MediaCodec_ParameterDescriptor;
	using OutputFrame = MediaCodec_OutputFrame;
	using OnFrameRenderedListener = MediaCodec_OnFrameRenderedListener;
	using OnFirstTunnelFrameReadyListener = MediaCodec_OnFirstTunnelFrameReadyListener;
	using MetricsConstants = MediaCodec_MetricsConstants;
	using LinearBlock = MediaCodec_LinearBlock;
	using InvalidBufferFlagsException = MediaCodec_InvalidBufferFlagsException;
	using IncompatibleWithBlockModelException = MediaCodec_IncompatibleWithBlockModelException;
	using CryptoInfo = MediaCodec_CryptoInfo;
	using CryptoException = MediaCodec_CryptoException;
	using CodecException = MediaCodec_CodecException;
	using Callback = MediaCodec_Callback;
	using BufferInfo = MediaCodec_BufferInfo;

	static jint BUFFER_FLAG_CODEC_CONFIG() { return get_static_field<"BUFFER_FLAG_CODEC_CONFIG", jint>(); }
	static jint BUFFER_FLAG_DECODE_ONLY() { return get_static_field<"BUFFER_FLAG_DECODE_ONLY", jint>(); }
	static jint BUFFER_FLAG_END_OF_STREAM() { return get_static_field<"BUFFER_FLAG_END_OF_STREAM", jint>(); }
	static jint BUFFER_FLAG_KEY_FRAME() { return get_static_field<"BUFFER_FLAG_KEY_FRAME", jint>(); }
	static jint BUFFER_FLAG_PARTIAL_FRAME() { return get_static_field<"BUFFER_FLAG_PARTIAL_FRAME", jint>(); }
	static jint BUFFER_FLAG_SYNC_FRAME() { return get_static_field<"BUFFER_FLAG_SYNC_FRAME", jint>(); }
	static jint CONFIGURE_FLAG_ENCODE() { return get_static_field<"CONFIGURE_FLAG_ENCODE", jint>(); }
	static jint CONFIGURE_FLAG_USE_BLOCK_MODEL() { return get_static_field<"CONFIGURE_FLAG_USE_BLOCK_MODEL", jint>(); }
	static jint CONFIGURE_FLAG_USE_CRYPTO_ASYNC() { return get_static_field<"CONFIGURE_FLAG_USE_CRYPTO_ASYNC", jint>(); }
	static jint CRYPTO_MODE_AES_CBC() { return get_static_field<"CRYPTO_MODE_AES_CBC", jint>(); }
	static jint CRYPTO_MODE_AES_CTR() { return get_static_field<"CRYPTO_MODE_AES_CTR", jint>(); }
	static jint CRYPTO_MODE_UNENCRYPTED() { return get_static_field<"CRYPTO_MODE_UNENCRYPTED", jint>(); }
	static jint INFO_OUTPUT_BUFFERS_CHANGED() { return get_static_field<"INFO_OUTPUT_BUFFERS_CHANGED", jint>(); }
	static jint INFO_OUTPUT_FORMAT_CHANGED() { return get_static_field<"INFO_OUTPUT_FORMAT_CHANGED", jint>(); }
	static jint INFO_TRY_AGAIN_LATER() { return get_static_field<"INFO_TRY_AGAIN_LATER", jint>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_HDR10_PLUS_INFO() { return get_static_field<"PARAMETER_KEY_HDR10_PLUS_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_LOW_LATENCY() { return get_static_field<"PARAMETER_KEY_LOW_LATENCY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_OFFSET_TIME() { return get_static_field<"PARAMETER_KEY_OFFSET_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_REQUEST_SYNC_FRAME() { return get_static_field<"PARAMETER_KEY_REQUEST_SYNC_FRAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_SUSPEND() { return get_static_field<"PARAMETER_KEY_SUSPEND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_SUSPEND_TIME() { return get_static_field<"PARAMETER_KEY_SUSPEND_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_TUNNEL_PEEK() { return get_static_field<"PARAMETER_KEY_TUNNEL_PEEK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARAMETER_KEY_VIDEO_BITRATE() { return get_static_field<"PARAMETER_KEY_VIDEO_BITRATE", jni::ref<java::lang::String>>(); }
	static jint VIDEO_SCALING_MODE_SCALE_TO_FIT() { return get_static_field<"VIDEO_SCALING_MODE_SCALE_TO_FIT", jint>(); }
	static jint VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING() { return get_static_field<"VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING", jint>(); }

	static jni::ref<android::media::MediaCodec> createDecoderByType(jni::ref<java::lang::String> type) { return call_static_method<"createDecoderByType", jni::ref<android::media::MediaCodec>>(type); }
	static jni::ref<android::media::MediaCodec> createEncoderByType(jni::ref<java::lang::String> type) { return call_static_method<"createEncoderByType", jni::ref<android::media::MediaCodec>>(type); }
	static jni::ref<android::media::MediaCodec> createByCodecName(jni::ref<java::lang::String> name) { return call_static_method<"createByCodecName", jni::ref<android::media::MediaCodec>>(name); }
	void reset() { return call_method<"reset", void>(); }
	void release() { return call_method<"release", void>(); }
	void configure(jni::ref<android::media::MediaFormat> format, jni::ref<android::view::Surface> surface, jni::ref<android::media::MediaCrypto> crypto, jint flags) { return call_method<"configure", void>(format, surface, crypto, flags); }
	void configure(jni::ref<android::media::MediaFormat> format, jni::ref<android::view::Surface> surface, jint flags, jni::ref<android::media::MediaDescrambler> descrambler) { return call_method<"configure", void>(format, surface, flags, descrambler); }
	void setOutputSurface(jni::ref<android::view::Surface> surface) { return call_method<"setOutputSurface", void>(surface); }
	static jni::ref<android::view::Surface> createPersistentInputSurface() { return call_static_method<"createPersistentInputSurface", jni::ref<android::view::Surface>>(); }
	void setInputSurface(jni::ref<android::view::Surface> surface) { return call_method<"setInputSurface", void>(surface); }
	jni::ref<android::view::Surface> createInputSurface() { return call_method<"createInputSurface", jni::ref<android::view::Surface>>(); }
	void start() { return call_method<"start", void>(); }
	void stop() { return call_method<"stop", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void queueInputBuffer(jint index, jint offset, jint size, jlong presentationTimeUs, jint p5) { return call_method<"queueInputBuffer", void>(index, offset, size, presentationTimeUs, p5); }
	void queueSecureInputBuffer(jint index, jint offset, jni::ref<android::media::MediaCodec_CryptoInfo> info, jlong presentationTimeUs, jint p5) { return call_method<"queueSecureInputBuffer", void>(index, offset, info, presentationTimeUs, p5); }
	jint dequeueInputBuffer(jlong timeoutUs) { return call_method<"dequeueInputBuffer", jint>(timeoutUs); }
	static jni::ref<android::media::Image> mapHardwareBuffer(jni::ref<android::hardware::HardwareBuffer> hardwareBuffer) { return call_static_method<"mapHardwareBuffer", jni::ref<android::media::Image>>(hardwareBuffer); }
	jni::ref<android::media::MediaCodec_QueueRequest> getQueueRequest(jint index) { return call_method<"getQueueRequest", jni::ref<android::media::MediaCodec_QueueRequest>>(index); }
	jint dequeueOutputBuffer(jni::ref<android::media::MediaCodec_BufferInfo> info, jlong timeoutUs) { return call_method<"dequeueOutputBuffer", jint>(info, timeoutUs); }
	void releaseOutputBuffer(jint index, jboolean render) { return call_method<"releaseOutputBuffer", void>(index, render); }
	void releaseOutputBuffer(jint index, jlong renderTimestampNs) { return call_method<"releaseOutputBuffer", void>(index, renderTimestampNs); }
	void signalEndOfInputStream() { return call_method<"signalEndOfInputStream", void>(); }
	jni::ref<android::media::MediaFormat> getOutputFormat() { return call_method<"getOutputFormat", jni::ref<android::media::MediaFormat>>(); }
	jni::ref<android::media::MediaFormat> getInputFormat() { return call_method<"getInputFormat", jni::ref<android::media::MediaFormat>>(); }
	jni::ref<android::media::MediaFormat> getOutputFormat(jint index) { return call_method<"getOutputFormat", jni::ref<android::media::MediaFormat>>(index); }
	jni::ref<jni::array<java::nio::ByteBuffer>> getInputBuffers() { return call_method<"getInputBuffers", jni::ref<jni::array<java::nio::ByteBuffer>>>(); }
	jni::ref<jni::array<java::nio::ByteBuffer>> getOutputBuffers() { return call_method<"getOutputBuffers", jni::ref<jni::array<java::nio::ByteBuffer>>>(); }
	jni::ref<java::nio::ByteBuffer> getInputBuffer(jint index) { return call_method<"getInputBuffer", jni::ref<java::nio::ByteBuffer>>(index); }
	jni::ref<android::media::Image> getInputImage(jint index) { return call_method<"getInputImage", jni::ref<android::media::Image>>(index); }
	jni::ref<java::nio::ByteBuffer> getOutputBuffer(jint index) { return call_method<"getOutputBuffer", jni::ref<java::nio::ByteBuffer>>(index); }
	jni::ref<android::media::Image> getOutputImage(jint index) { return call_method<"getOutputImage", jni::ref<android::media::Image>>(index); }
	jni::ref<android::media::MediaCodec_OutputFrame> getOutputFrame(jint index) { return call_method<"getOutputFrame", jni::ref<android::media::MediaCodec_OutputFrame>>(index); }
	void setVideoScalingMode(jint p1) { return call_method<"setVideoScalingMode", void>(p1); }
	void setAudioPresentation(jni::ref<android::media::AudioPresentation> presentation) { return call_method<"setAudioPresentation", void>(presentation); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCanonicalName() { return call_method<"getCanonicalName", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::PersistableBundle> getMetrics() { return call_method<"getMetrics", jni::ref<android::os::PersistableBundle>>(); }
	void setParameters(jni::ref<android::os::Bundle> params) { return call_method<"setParameters", void>(params); }
	void setCallback(jni::ref<android::media::MediaCodec_Callback> cb, jni::ref<android::os::Handler> handler) { return call_method<"setCallback", void>(cb, handler); }
	void setCallback(jni::ref<android::media::MediaCodec_Callback> cb) { return call_method<"setCallback", void>(cb); }
	void setOnFirstTunnelFrameReadyListener(jni::ref<android::os::Handler> handler, jni::ref<android::media::MediaCodec_OnFirstTunnelFrameReadyListener> listener) { return call_method<"setOnFirstTunnelFrameReadyListener", void>(handler, listener); }
	void setOnFrameRenderedListener(jni::ref<android::media::MediaCodec_OnFrameRenderedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnFrameRenderedListener", void>(listener, handler); }
	jni::ref<java::util::List> getSupportedVendorParameters() { return call_method<"getSupportedVendorParameters", jni::ref<java::util::List>>(); }
	jni::ref<android::media::MediaCodec_ParameterDescriptor> getParameterDescriptor(jni::ref<java::lang::String> name) { return call_method<"getParameterDescriptor", jni::ref<android::media::MediaCodec_ParameterDescriptor>>(name); }
	void subscribeToVendorParameters(jni::ref<java::util::List> names) { return call_method<"subscribeToVendorParameters", void>(names); }
	void unsubscribeFromVendorParameters(jni::ref<java::util::List> names) { return call_method<"unsubscribeFromVendorParameters", void>(names); }
	jni::ref<android::media::MediaCodecInfo> getCodecInfo() { return call_method<"getCodecInfo", jni::ref<android::media::MediaCodecInfo>>(); }

protected:

	MediaCodec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODEC
