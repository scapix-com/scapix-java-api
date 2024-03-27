// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::textservice { class SpellCheckerService_Session; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::textservice::SpellCheckerService_Session>
{
	static constexpr fixed_string class_name = "android/service/textservice/SpellCheckerService$Session";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/textservice/SentenceSuggestionsInfo.h>
#include <scapix/java_api/android/view/textservice/SuggestionsInfo.h>
#include <scapix/java_api/android/view/textservice/TextInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::textservice::SpellCheckerService_Session : public jni::object_base<"android/service/textservice/SpellCheckerService$Session",
	java::lang::Object>
{
public:

	static jni::ref<android::service::textservice::SpellCheckerService_Session> new_object() { return base_::new_object(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	jni::ref<android::view::textservice::SuggestionsInfo> onGetSuggestions(jni::ref<android::view::textservice::TextInfo> p1, jint p2) { return call_method<"onGetSuggestions", jni::ref<android::view::textservice::SuggestionsInfo>>(p1, p2); }
	jni::ref<jni::array<android::view::textservice::SuggestionsInfo>> onGetSuggestionsMultiple(jni::ref<jni::array<android::view::textservice::TextInfo>> textInfos, jint suggestionsLimit, jboolean sequentialWords) { return call_method<"onGetSuggestionsMultiple", jni::ref<jni::array<android::view::textservice::SuggestionsInfo>>>(textInfos, suggestionsLimit, sequentialWords); }
	jni::ref<jni::array<android::view::textservice::SentenceSuggestionsInfo>> onGetSentenceSuggestionsMultiple(jni::ref<jni::array<android::view::textservice::TextInfo>> textInfos, jint suggestionsLimit) { return call_method<"onGetSentenceSuggestionsMultiple", jni::ref<jni::array<android::view::textservice::SentenceSuggestionsInfo>>>(textInfos, suggestionsLimit); }
	void onCancel() { return call_method<"onCancel", void>(); }
	void onClose() { return call_method<"onClose", void>(); }
	jni::ref<java::lang::String> getLocale() { return call_method<"getLocale", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::Bundle> getBundle() { return call_method<"getBundle", jni::ref<android::os::Bundle>>(); }

protected:

	SpellCheckerService_Session(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION
