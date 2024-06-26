// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTIMESTAMP_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTIMESTAMP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioTimestamp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioTimestamp>
{
	static constexpr fixed_string class_name = "android/media/AudioTimestamp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTIMESTAMP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTIMESTAMP)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTIMESTAMP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioTimestamp : public jni::object_base<"android/media/AudioTimestamp",
	java::lang::Object>
{
public:

	static jint TIMEBASE_BOOTTIME() { return get_static_field<"TIMEBASE_BOOTTIME", jint>(); }
	static jint TIMEBASE_MONOTONIC() { return get_static_field<"TIMEBASE_MONOTONIC", jint>(); }
	jlong framePosition() { return get_field<"framePosition", jlong>(); }
	void framePosition(jlong v) { set_field<"framePosition", jlong>(v); }
	jlong nanoTime() { return get_field<"nanoTime", jlong>(); }
	void nanoTime(jlong v) { set_field<"nanoTime", jlong>(v); }

	static jni::ref<android::media::AudioTimestamp> new_object() { return base_::new_object(); }

protected:

	AudioTimestamp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTIMESTAMP
