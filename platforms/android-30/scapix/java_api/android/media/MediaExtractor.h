// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaExtractor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaExtractor>
{
	static constexpr fixed_string class_name = "android/media/MediaExtractor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/media/DrmInitData.h>
#include <scapix/java_api/android/media/MediaCas.h>
#include <scapix/java_api/android/media/MediaCodec_CryptoInfo.h>
#include <scapix/java_api/android/media/MediaDataSource.h>
#include <scapix/java_api/android/media/MediaExtractor_CasInfo.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/android/media/MediaExtractor_MetricsConstants.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaExtractor : public jni::object_base<"android/media/MediaExtractor",
	java::lang::Object>
{
public:

	using MetricsConstants = MediaExtractor_MetricsConstants;
	using CasInfo = MediaExtractor_CasInfo;

	static jint SAMPLE_FLAG_ENCRYPTED() { return get_static_field<"SAMPLE_FLAG_ENCRYPTED", jint>(); }
	static jint SAMPLE_FLAG_PARTIAL_FRAME() { return get_static_field<"SAMPLE_FLAG_PARTIAL_FRAME", jint>(); }
	static jint SAMPLE_FLAG_SYNC() { return get_static_field<"SAMPLE_FLAG_SYNC", jint>(); }
	static jint SEEK_TO_CLOSEST_SYNC() { return get_static_field<"SEEK_TO_CLOSEST_SYNC", jint>(); }
	static jint SEEK_TO_NEXT_SYNC() { return get_static_field<"SEEK_TO_NEXT_SYNC", jint>(); }
	static jint SEEK_TO_PREVIOUS_SYNC() { return get_static_field<"SEEK_TO_PREVIOUS_SYNC", jint>(); }

	static jni::ref<android::media::MediaExtractor> new_object() { return base_::new_object(); }
	void setDataSource(jni::ref<android::media::MediaDataSource> p1) { return call_method<"setDataSource", void>(p1); }
	void setDataSource(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> uri, jni::ref<java::util::Map> headers) { return call_method<"setDataSource", void>(context, uri, headers); }
	void setDataSource(jni::ref<java::lang::String> path, jni::ref<java::util::Map> headers) { return call_method<"setDataSource", void>(path, headers); }
	void setDataSource(jni::ref<java::lang::String> path) { return call_method<"setDataSource", void>(path); }
	void setDataSource(jni::ref<android::content::res::AssetFileDescriptor> afd) { return call_method<"setDataSource", void>(afd); }
	void setDataSource(jni::ref<java::io::FileDescriptor> fd) { return call_method<"setDataSource", void>(fd); }
	void setDataSource(jni::ref<java::io::FileDescriptor> p1, jlong p2, jlong p3) { return call_method<"setDataSource", void>(p1, p2, p3); }
	void setMediaCas(jni::ref<android::media::MediaCas> mediaCas) { return call_method<"setMediaCas", void>(mediaCas); }
	jni::ref<android::media::MediaExtractor_CasInfo> getCasInfo(jint index) { return call_method<"getCasInfo", jni::ref<android::media::MediaExtractor_CasInfo>>(index); }
	void release() { return call_method<"release", void>(); }
	jint getTrackCount() { return call_method<"getTrackCount", jint>(); }
	jni::ref<android::media::DrmInitData> getDrmInitData() { return call_method<"getDrmInitData", jni::ref<android::media::DrmInitData>>(); }
	jni::ref<java::util::List> getAudioPresentations(jint trackIndex) { return call_method<"getAudioPresentations", jni::ref<java::util::List>>(trackIndex); }
	jni::ref<java::util::Map> getPsshInfo() { return call_method<"getPsshInfo", jni::ref<java::util::Map>>(); }
	jni::ref<android::media::MediaFormat> getTrackFormat(jint index) { return call_method<"getTrackFormat", jni::ref<android::media::MediaFormat>>(index); }
	void selectTrack(jint p1) { return call_method<"selectTrack", void>(p1); }
	void unselectTrack(jint p1) { return call_method<"unselectTrack", void>(p1); }
	void seekTo(jlong p1, jint p2) { return call_method<"seekTo", void>(p1, p2); }
	jboolean advance() { return call_method<"advance", jboolean>(); }
	jint readSampleData(jni::ref<java::nio::ByteBuffer> p1, jint p2) { return call_method<"readSampleData", jint>(p1, p2); }
	jint getSampleTrackIndex() { return call_method<"getSampleTrackIndex", jint>(); }
	jlong getSampleTime() { return call_method<"getSampleTime", jlong>(); }
	jlong getSampleSize() { return call_method<"getSampleSize", jlong>(); }
	jint getSampleFlags() { return call_method<"getSampleFlags", jint>(); }
	jboolean getSampleCryptoInfo(jni::ref<android::media::MediaCodec_CryptoInfo> p1) { return call_method<"getSampleCryptoInfo", jboolean>(p1); }
	jlong getCachedDuration() { return call_method<"getCachedDuration", jlong>(); }
	jboolean hasCacheReachedEndOfStream() { return call_method<"hasCacheReachedEndOfStream", jboolean>(); }
	jni::ref<android::os::PersistableBundle> getMetrics() { return call_method<"getMetrics", jni::ref<android::os::PersistableBundle>>(); }

protected:

	MediaExtractor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR
