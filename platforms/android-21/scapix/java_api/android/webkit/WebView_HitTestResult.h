// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebView_HitTestResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebView_HitTestResult>
{
	static constexpr fixed_string class_name = "android/webkit/WebView$HitTestResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebView_HitTestResult : public jni::object_base<"android/webkit/WebView$HitTestResult",
	java::lang::Object>
{
public:

	static jint ANCHOR_TYPE() { return get_static_field<"ANCHOR_TYPE", jint>(); }
	static jint EDIT_TEXT_TYPE() { return get_static_field<"EDIT_TEXT_TYPE", jint>(); }
	static jint EMAIL_TYPE() { return get_static_field<"EMAIL_TYPE", jint>(); }
	static jint GEO_TYPE() { return get_static_field<"GEO_TYPE", jint>(); }
	static jint IMAGE_ANCHOR_TYPE() { return get_static_field<"IMAGE_ANCHOR_TYPE", jint>(); }
	static jint IMAGE_TYPE() { return get_static_field<"IMAGE_TYPE", jint>(); }
	static jint PHONE_TYPE() { return get_static_field<"PHONE_TYPE", jint>(); }
	static jint SRC_ANCHOR_TYPE() { return get_static_field<"SRC_ANCHOR_TYPE", jint>(); }
	static jint SRC_IMAGE_ANCHOR_TYPE() { return get_static_field<"SRC_IMAGE_ANCHOR_TYPE", jint>(); }
	static jint UNKNOWN_TYPE() { return get_static_field<"UNKNOWN_TYPE", jint>(); }

	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getExtra() { return call_method<"getExtra", jni::ref<java::lang::String>>(); }

protected:

	WebView_HitTestResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT
