// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class FontsContract_FontRequestCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::FontsContract_FontRequestCallback>
{
	static constexpr fixed_string class_name = "android/provider/FontsContract$FontRequestCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Typeface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::FontsContract_FontRequestCallback : public jni::object_base<"android/provider/FontsContract$FontRequestCallback",
	java::lang::Object>
{
public:

	static jint FAIL_REASON_FONT_LOAD_ERROR() { return get_static_field<"FAIL_REASON_FONT_LOAD_ERROR", jint>(); }
	static jint FAIL_REASON_FONT_NOT_FOUND() { return get_static_field<"FAIL_REASON_FONT_NOT_FOUND", jint>(); }
	static jint FAIL_REASON_FONT_UNAVAILABLE() { return get_static_field<"FAIL_REASON_FONT_UNAVAILABLE", jint>(); }
	static jint FAIL_REASON_MALFORMED_QUERY() { return get_static_field<"FAIL_REASON_MALFORMED_QUERY", jint>(); }
	static jint FAIL_REASON_PROVIDER_NOT_FOUND() { return get_static_field<"FAIL_REASON_PROVIDER_NOT_FOUND", jint>(); }
	static jint FAIL_REASON_WRONG_CERTIFICATES() { return get_static_field<"FAIL_REASON_WRONG_CERTIFICATES", jint>(); }

	static jni::ref<android::provider::FontsContract_FontRequestCallback> new_object() { return base_::new_object(); }
	void onTypefaceRetrieved(jni::ref<android::graphics::Typeface> typeface) { return call_method<"onTypefaceRetrieved", void>(typeface); }
	void onTypefaceRequestFailed(jint reason) { return call_method<"onTypefaceRequestFailed", void>(reason); }

protected:

	FontsContract_FontRequestCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK
