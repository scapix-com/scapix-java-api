// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMUXER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMUXER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaMuxer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaMuxer>
{
	static constexpr fixed_string class_name = "android/media/MediaMuxer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMUXER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMUXER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMUXER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCodec_BufferInfo.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/android/media/MediaMuxer_OutputFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaMuxer : public jni::object_base<"android/media/MediaMuxer",
	java::lang::Object>
{
public:

	using OutputFormat = MediaMuxer_OutputFormat;

	static jni::ref<android::media::MediaMuxer> new_object(jni::ref<java::lang::String> path, jint format) { return base_::new_object(path, format); }
	static jni::ref<android::media::MediaMuxer> new_object(jni::ref<java::io::FileDescriptor> fd, jint format) { return base_::new_object(fd, format); }
	void setOrientationHint(jint degrees) { return call_method<"setOrientationHint", void>(degrees); }
	void setLocation(jfloat latitude, jfloat longitude) { return call_method<"setLocation", void>(latitude, longitude); }
	void start() { return call_method<"start", void>(); }
	void stop() { return call_method<"stop", void>(); }
	jint addTrack(jni::ref<android::media::MediaFormat> format) { return call_method<"addTrack", jint>(format); }
	void writeSampleData(jint trackIndex, jni::ref<java::nio::ByteBuffer> byteBuf, jni::ref<android::media::MediaCodec_BufferInfo> bufferInfo) { return call_method<"writeSampleData", void>(trackIndex, byteBuf, bufferInfo); }
	void release() { return call_method<"release", void>(); }

protected:

	MediaMuxer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMUXER
