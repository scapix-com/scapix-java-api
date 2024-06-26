// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBRESOURCEERROR_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBRESOURCEERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebResourceError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebResourceError>
{
	static constexpr fixed_string class_name = "android/webkit/WebResourceError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBRESOURCEERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBRESOURCEERROR)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBRESOURCEERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebResourceError : public jni::object_base<"android/webkit/WebResourceError",
	java::lang::Object>
{
public:

	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }
	jni::ref<java::lang::CharSequence> getDescription() { return call_method<"getDescription", jni::ref<java::lang::CharSequence>>(); }

protected:

	WebResourceError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBRESOURCEERROR
