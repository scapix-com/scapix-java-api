// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textservice { class SpellCheckerSession_SpellCheckerSessionParams_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder>
{
	static constexpr fixed_string class_name = "android/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/textservice/SpellCheckerSession_SpellCheckerSessionParams.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder : public jni::object_base<"android/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams> build() { return call_method<"build", jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams>>(); }
	jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder> setLocale(jni::ref<java::util::Locale> locale) { return call_method<"setLocale", jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder>>(locale); }
	jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder> setShouldReferToSpellCheckerLanguageSettings(jboolean shouldReferToSpellCheckerLanguageSettings) { return call_method<"setShouldReferToSpellCheckerLanguageSettings", jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder>>(shouldReferToSpellCheckerLanguageSettings); }
	jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder> setSupportedAttributes(jint supportedAttributes) { return call_method<"setSupportedAttributes", jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder>>(supportedAttributes); }
	jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder> setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", jni::ref<android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder>>(extras); }

protected:

	SpellCheckerSession_SpellCheckerSessionParams_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_BUILDER