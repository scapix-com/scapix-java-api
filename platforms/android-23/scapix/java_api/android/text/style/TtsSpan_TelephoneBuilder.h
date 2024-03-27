// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class TtsSpan_TelephoneBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::TtsSpan_TelephoneBuilder>
{
	static constexpr fixed_string class_name = "android/text/style/TtsSpan$TelephoneBuilder";
	using base_classes = std::tuple<scapix::java_api::android::text::style::TtsSpan_SemioticClassBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::TtsSpan_TelephoneBuilder : public jni::object_base<"android/text/style/TtsSpan$TelephoneBuilder",
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static jni::ref<android::text::style::TtsSpan_TelephoneBuilder> new_object() { return base_::new_object(); }
	static jni::ref<android::text::style::TtsSpan_TelephoneBuilder> new_object(jni::ref<java::lang::String> numberParts) { return base_::new_object(numberParts); }
	jni::ref<android::text::style::TtsSpan_TelephoneBuilder> setCountryCode(jni::ref<java::lang::String> countryCode) { return call_method<"setCountryCode", jni::ref<android::text::style::TtsSpan_TelephoneBuilder>>(countryCode); }
	jni::ref<android::text::style::TtsSpan_TelephoneBuilder> setNumberParts(jni::ref<java::lang::String> numberParts) { return call_method<"setNumberParts", jni::ref<android::text::style::TtsSpan_TelephoneBuilder>>(numberParts); }
	jni::ref<android::text::style::TtsSpan_TelephoneBuilder> setExtension(jni::ref<java::lang::String> extension) { return call_method<"setExtension", jni::ref<android::text::style::TtsSpan_TelephoneBuilder>>(extension); }

protected:

	TtsSpan_TelephoneBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER
