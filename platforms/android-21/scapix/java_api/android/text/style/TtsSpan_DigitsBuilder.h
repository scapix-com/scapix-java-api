// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DIGITSBUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DIGITSBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class TtsSpan_DigitsBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::TtsSpan_DigitsBuilder>
{
	static constexpr fixed_string class_name = "android/text/style/TtsSpan$DigitsBuilder";
	using base_classes = std::tuple<scapix::java_api::android::text::style::TtsSpan_SemioticClassBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DIGITSBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DIGITSBUILDER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DIGITSBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::TtsSpan_DigitsBuilder : public jni::object_base<"android/text/style/TtsSpan$DigitsBuilder",
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static jni::ref<android::text::style::TtsSpan_DigitsBuilder> new_object() { return base_::new_object(); }
	static jni::ref<android::text::style::TtsSpan_DigitsBuilder> new_object(jni::ref<java::lang::String> digits) { return base_::new_object(digits); }
	jni::ref<android::text::style::TtsSpan_DigitsBuilder> setDigits(jni::ref<java::lang::String> digits) { return call_method<"setDigits", jni::ref<android::text::style::TtsSpan_DigitsBuilder>>(digits); }

protected:

	TtsSpan_DigitsBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_DIGITSBUILDER
