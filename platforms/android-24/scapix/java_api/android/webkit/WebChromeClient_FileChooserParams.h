// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebChromeClient_FileChooserParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebChromeClient_FileChooserParams>
{
	static constexpr fixed_string class_name = "android/webkit/WebChromeClient$FileChooserParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebChromeClient_FileChooserParams : public jni::object_base<"android/webkit/WebChromeClient$FileChooserParams",
	java::lang::Object>
{
public:

	static jint MODE_OPEN() { return get_static_field<"MODE_OPEN", jint>(); }
	static jint MODE_OPEN_MULTIPLE() { return get_static_field<"MODE_OPEN_MULTIPLE", jint>(); }
	static jint MODE_SAVE() { return get_static_field<"MODE_SAVE", jint>(); }

	static jni::ref<android::webkit::WebChromeClient_FileChooserParams> new_object() { return base_::new_object(); }
	static jni::ref<jni::array<android::net::Uri>> parseResult(jint resultCode, jni::ref<android::content::Intent> data) { return call_static_method<"parseResult", jni::ref<jni::array<android::net::Uri>>>(resultCode, data); }
	jint getMode() { return call_method<"getMode", jint>(); }
	jni::ref<jni::array<java::lang::String>> getAcceptTypes() { return call_method<"getAcceptTypes", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean isCaptureEnabled() { return call_method<"isCaptureEnabled", jboolean>(); }
	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> getFilenameHint() { return call_method<"getFilenameHint", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::Intent> createIntent() { return call_method<"createIntent", jni::ref<android::content::Intent>>(); }

protected:

	WebChromeClient_FileChooserParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS
