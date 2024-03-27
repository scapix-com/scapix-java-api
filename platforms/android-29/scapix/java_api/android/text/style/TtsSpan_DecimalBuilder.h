// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class TtsSpan_DecimalBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::TtsSpan_DecimalBuilder>
{
	static constexpr fixed_string class_name = "android/text/style/TtsSpan$DecimalBuilder";
	using base_classes = std::tuple<scapix::java_api::android::text::style::TtsSpan_SemioticClassBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::TtsSpan_DecimalBuilder : public jni::object_base<"android/text/style/TtsSpan$DecimalBuilder",
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static jni::ref<android::text::style::TtsSpan_DecimalBuilder> new_object() { return base_::new_object(); }
	static jni::ref<android::text::style::TtsSpan_DecimalBuilder> new_object(jdouble number, jint p2, jint minimumFractionDigits) { return base_::new_object(number, p2, minimumFractionDigits); }
	static jni::ref<android::text::style::TtsSpan_DecimalBuilder> new_object(jni::ref<java::lang::String> integerPart, jni::ref<java::lang::String> fractionalPart) { return base_::new_object(integerPart, fractionalPart); }
	jni::ref<android::text::style::TtsSpan_DecimalBuilder> setArgumentsFromDouble(jdouble number, jint p2, jint minimumFractionDigits) { return call_method<"setArgumentsFromDouble", jni::ref<android::text::style::TtsSpan_DecimalBuilder>>(number, p2, minimumFractionDigits); }
	jni::ref<android::text::style::TtsSpan_DecimalBuilder> setIntegerPart(jlong integerPart) { return call_method<"setIntegerPart", jni::ref<android::text::style::TtsSpan_DecimalBuilder>>(integerPart); }
	jni::ref<android::text::style::TtsSpan_DecimalBuilder> setIntegerPart(jni::ref<java::lang::String> integerPart) { return call_method<"setIntegerPart", jni::ref<android::text::style::TtsSpan_DecimalBuilder>>(integerPart); }
	jni::ref<android::text::style::TtsSpan_DecimalBuilder> setFractionalPart(jni::ref<java::lang::String> fractionalPart) { return call_method<"setFractionalPart", jni::ref<android::text::style::TtsSpan_DecimalBuilder>>(fractionalPart); }

protected:

	TtsSpan_DecimalBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DECIMALBUILDER
