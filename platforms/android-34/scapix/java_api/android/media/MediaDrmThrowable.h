// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMTHROWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMTHROWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaDrmThrowable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaDrmThrowable>
{
	static constexpr fixed_string class_name = "android/media/MediaDrmThrowable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMTHROWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMTHROWABLE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMTHROWABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaDrmThrowable : public jni::object_base<"android/media/MediaDrmThrowable",
	java::lang::Object>
{
public:

	jint getVendorError() { return call_method<"getVendorError", jint>(); }
	jint getOemError() { return call_method<"getOemError", jint>(); }
	jint getErrorContext() { return call_method<"getErrorContext", jint>(); }

protected:

	MediaDrmThrowable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRMTHROWABLE