// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaExtractor_CasInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaExtractor_CasInfo>
{
	static constexpr fixed_string class_name = "android/media/MediaExtractor$CasInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCas_Session.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaExtractor_CasInfo : public jni::object_base<"android/media/MediaExtractor$CasInfo",
	java::lang::Object>
{
public:

	jint getSystemId() { return call_method<"getSystemId", jint>(); }
	jni::ref<android::media::MediaCas_Session> getSession() { return call_method<"getSession", jni::ref<android::media::MediaCas_Session>>(); }

protected:

	MediaExtractor_CasInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO
