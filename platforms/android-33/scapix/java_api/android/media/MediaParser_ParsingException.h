// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_PARSINGEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_PARSINGEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaParser_ParsingException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaParser_ParsingException>
{
	static constexpr fixed_string class_name = "android/media/MediaParser$ParsingException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_PARSINGEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_PARSINGEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_PARSINGEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaParser_ParsingException : public jni::object_base<"android/media/MediaParser$ParsingException",
	java::io::IOException>
{
public:


protected:

	MediaParser_ParsingException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPARSER_PARSINGEXCEPTION
