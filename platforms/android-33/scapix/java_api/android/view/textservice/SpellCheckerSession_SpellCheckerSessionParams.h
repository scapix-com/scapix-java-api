// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textservice { class SpellCheckerSession_SpellCheckerSessionParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams>
{
	static constexpr fixed_string class_name = "android/view/textservice/SpellCheckerSession$SpellCheckerSessionParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/android/view/textservice/SpellCheckerSession_SpellCheckerSessionParams_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams : public jni::object_base<"android/view/textservice/SpellCheckerSession$SpellCheckerSessionParams",
	java::lang::Object>
{
public:

	using Builder = SpellCheckerSession_SpellCheckerSessionParams_Builder;

	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	jboolean shouldReferToSpellCheckerLanguageSettings() { return call_method<"shouldReferToSpellCheckerLanguageSettings", jboolean>(); }
	jint getSupportedAttributes() { return call_method<"getSupportedAttributes", jint>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }

protected:

	SpellCheckerSession_SpellCheckerSessionParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_SPELLCHECKERSESSIONPARAMS
