// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_SEEKPOINT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_SEEKPOINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaParser_SeekPoint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaParser_SeekPoint>
{
	static constexpr fixed_string class_name = "android/media/MediaParser$SeekPoint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_SEEKPOINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_SEEKPOINT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_SEEKPOINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaParser_SeekPoint : public jni::object_base<"android/media/MediaParser$SeekPoint",
	java::lang::Object>
{
public:

	static jni::ref<android::media::MediaParser_SeekPoint> START() { return get_static_field<"START", jni::ref<android::media::MediaParser_SeekPoint>>(); }
	jlong position() { return get_field<"position", jlong>(); }
	jlong timeMicros() { return get_field<"timeMicros", jlong>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	MediaParser_SeekPoint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_SEEKPOINT
