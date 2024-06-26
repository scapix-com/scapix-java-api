// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioTrack_MetricsConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioTrack_MetricsConstants>
{
	static constexpr fixed_string class_name = "android/media/AudioTrack$MetricsConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioTrack_MetricsConstants : public jni::object_base<"android/media/AudioTrack$MetricsConstants",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CHANNELMASK() { return get_static_field<"CHANNELMASK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTENTTYPE() { return get_static_field<"CONTENTTYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SAMPLERATE() { return get_static_field<"SAMPLERATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STREAMTYPE() { return get_static_field<"STREAMTYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USAGE() { return get_static_field<"USAGE", jni::ref<java::lang::String>>(); }


protected:

	AudioTrack_MetricsConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS
