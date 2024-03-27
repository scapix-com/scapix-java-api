// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebSettings_TextSize; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebSettings_TextSize>
{
	static constexpr fixed_string class_name = "android/webkit/WebSettings$TextSize";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebSettings_TextSize : public jni::object_base<"android/webkit/WebSettings$TextSize",
	java::lang::Enum>
{
public:

	static jni::ref<android::webkit::WebSettings_TextSize> SMALLEST() { return get_static_field<"SMALLEST", jni::ref<android::webkit::WebSettings_TextSize>>(); }
	static jni::ref<android::webkit::WebSettings_TextSize> SMALLER() { return get_static_field<"SMALLER", jni::ref<android::webkit::WebSettings_TextSize>>(); }
	static jni::ref<android::webkit::WebSettings_TextSize> NORMAL() { return get_static_field<"NORMAL", jni::ref<android::webkit::WebSettings_TextSize>>(); }
	static jni::ref<android::webkit::WebSettings_TextSize> LARGER() { return get_static_field<"LARGER", jni::ref<android::webkit::WebSettings_TextSize>>(); }
	static jni::ref<android::webkit::WebSettings_TextSize> LARGEST() { return get_static_field<"LARGEST", jni::ref<android::webkit::WebSettings_TextSize>>(); }

	static jni::ref<jni::array<android::webkit::WebSettings_TextSize>> values() { return call_static_method<"values", jni::ref<jni::array<android::webkit::WebSettings_TextSize>>>(); }
	static jni::ref<android::webkit::WebSettings_TextSize> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::webkit::WebSettings_TextSize>>(name); }

protected:

	WebSettings_TextSize(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE