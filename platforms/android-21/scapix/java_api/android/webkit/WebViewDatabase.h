// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWDATABASE_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWDATABASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebViewDatabase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebViewDatabase>
{
	static constexpr fixed_string class_name = "android/webkit/WebViewDatabase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWDATABASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWDATABASE)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWDATABASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebViewDatabase : public jni::object_base<"android/webkit/WebViewDatabase",
	java::lang::Object>
{
public:

	static jni::ref<android::webkit::WebViewDatabase> getInstance(jni::ref<android::content::Context> context) { return call_static_method<"getInstance", jni::ref<android::webkit::WebViewDatabase>>(context); }
	jboolean hasUsernamePassword() { return call_method<"hasUsernamePassword", jboolean>(); }
	void clearUsernamePassword() { return call_method<"clearUsernamePassword", void>(); }
	jboolean hasHttpAuthUsernamePassword() { return call_method<"hasHttpAuthUsernamePassword", jboolean>(); }
	void clearHttpAuthUsernamePassword() { return call_method<"clearHttpAuthUsernamePassword", void>(); }
	jboolean hasFormData() { return call_method<"hasFormData", jboolean>(); }
	void clearFormData() { return call_method<"clearFormData", void>(); }

protected:

	WebViewDatabase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWDATABASE
