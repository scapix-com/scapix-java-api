// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodecInfo_VideoCapabilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodecInfo_VideoCapabilities>
{
	static constexpr fixed_string class_name = "android/media/MediaCodecInfo$VideoCapabilities";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/Range.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodecInfo_VideoCapabilities : public jni::object_base<"android/media/MediaCodecInfo$VideoCapabilities",
	java::lang::Object>
{
public:

	jni::ref<android::util::Range> getBitrateRange() { return call_method<"getBitrateRange", jni::ref<android::util::Range>>(); }
	jni::ref<android::util::Range> getSupportedWidths() { return call_method<"getSupportedWidths", jni::ref<android::util::Range>>(); }
	jni::ref<android::util::Range> getSupportedHeights() { return call_method<"getSupportedHeights", jni::ref<android::util::Range>>(); }
	jint getWidthAlignment() { return call_method<"getWidthAlignment", jint>(); }
	jint getHeightAlignment() { return call_method<"getHeightAlignment", jint>(); }
	jni::ref<android::util::Range> getSupportedFrameRates() { return call_method<"getSupportedFrameRates", jni::ref<android::util::Range>>(); }
	jni::ref<android::util::Range> getSupportedWidthsFor(jint height) { return call_method<"getSupportedWidthsFor", jni::ref<android::util::Range>>(height); }
	jni::ref<android::util::Range> getSupportedHeightsFor(jint width) { return call_method<"getSupportedHeightsFor", jni::ref<android::util::Range>>(width); }
	jni::ref<android::util::Range> getSupportedFrameRatesFor(jint width, jint height) { return call_method<"getSupportedFrameRatesFor", jni::ref<android::util::Range>>(width, height); }
	jni::ref<android::util::Range> getAchievableFrameRatesFor(jint width, jint height) { return call_method<"getAchievableFrameRatesFor", jni::ref<android::util::Range>>(width, height); }
	jboolean areSizeAndRateSupported(jint width, jint height, jdouble frameRate) { return call_method<"areSizeAndRateSupported", jboolean>(width, height, frameRate); }
	jboolean isSizeSupported(jint width, jint height) { return call_method<"isSizeSupported", jboolean>(width, height); }

protected:

	MediaCodecInfo_VideoCapabilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES
