// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_INPUTREADER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_INPUTREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaParser_InputReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaParser_InputReader>
{
	static constexpr fixed_string class_name = "android/media/MediaParser$InputReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_INPUTREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_INPUTREADER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_INPUTREADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaParser_InputReader : public jni::object_base<"android/media/MediaParser$InputReader",
	java::lang::Object>
{
public:

	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jlong getPosition() { return call_method<"getPosition", jlong>(); }
	jlong getLength() { return call_method<"getLength", jlong>(); }

protected:

	MediaParser_InputReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_INPUTREADER
