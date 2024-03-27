// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_CARDEMULATION_CARDEMULATION_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_CARDEMULATION_CARDEMULATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::cardemulation { class CardEmulation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::cardemulation::CardEmulation>
{
	static constexpr fixed_string class_name = "android/nfc/cardemulation/CardEmulation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_CARDEMULATION_CARDEMULATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_CARDEMULATION_CARDEMULATION)
#define SCAPIX_JAVA_API_ANDROID_NFC_CARDEMULATION_CARDEMULATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/nfc/NfcAdapter.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::cardemulation::CardEmulation : public jni::object_base<"android/nfc/cardemulation/CardEmulation",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_CHANGE_DEFAULT() { return get_static_field<"ACTION_CHANGE_DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CATEGORY_OTHER() { return get_static_field<"CATEGORY_OTHER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CATEGORY_PAYMENT() { return get_static_field<"CATEGORY_PAYMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CATEGORY() { return get_static_field<"EXTRA_CATEGORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SERVICE_COMPONENT() { return get_static_field<"EXTRA_SERVICE_COMPONENT", jni::ref<java::lang::String>>(); }
	static jint SELECTION_MODE_ALWAYS_ASK() { return get_static_field<"SELECTION_MODE_ALWAYS_ASK", jint>(); }
	static jint SELECTION_MODE_ASK_IF_CONFLICT() { return get_static_field<"SELECTION_MODE_ASK_IF_CONFLICT", jint>(); }
	static jint SELECTION_MODE_PREFER_DEFAULT() { return get_static_field<"SELECTION_MODE_PREFER_DEFAULT", jint>(); }

	static jni::ref<android::nfc::cardemulation::CardEmulation> getInstance(jni::ref<android::nfc::NfcAdapter> adapter) { return call_static_method<"getInstance", jni::ref<android::nfc::cardemulation::CardEmulation>>(adapter); }
	jboolean isDefaultServiceForCategory(jni::ref<android::content::ComponentName> service, jni::ref<java::lang::String> category) { return call_method<"isDefaultServiceForCategory", jboolean>(service, category); }
	jboolean isDefaultServiceForAid(jni::ref<android::content::ComponentName> service, jni::ref<java::lang::String> aid) { return call_method<"isDefaultServiceForAid", jboolean>(service, aid); }
	jboolean categoryAllowsForegroundPreference(jni::ref<java::lang::String> category) { return call_method<"categoryAllowsForegroundPreference", jboolean>(category); }
	jint getSelectionModeForCategory(jni::ref<java::lang::String> category) { return call_method<"getSelectionModeForCategory", jint>(category); }
	jboolean registerAidsForService(jni::ref<android::content::ComponentName> service, jni::ref<java::lang::String> category, jni::ref<java::util::List> aids) { return call_method<"registerAidsForService", jboolean>(service, category, aids); }
	jboolean unsetOffHostForService(jni::ref<android::content::ComponentName> service) { return call_method<"unsetOffHostForService", jboolean>(service); }
	jboolean setOffHostForService(jni::ref<android::content::ComponentName> service, jni::ref<java::lang::String> offHostSecureElement) { return call_method<"setOffHostForService", jboolean>(service, offHostSecureElement); }
	jni::ref<java::util::List> getAidsForService(jni::ref<android::content::ComponentName> service, jni::ref<java::lang::String> category) { return call_method<"getAidsForService", jni::ref<java::util::List>>(service, category); }
	jboolean removeAidsForService(jni::ref<android::content::ComponentName> service, jni::ref<java::lang::String> category) { return call_method<"removeAidsForService", jboolean>(service, category); }
	jboolean setPreferredService(jni::ref<android::app::Activity> activity, jni::ref<android::content::ComponentName> service) { return call_method<"setPreferredService", jboolean>(activity, service); }
	jboolean unsetPreferredService(jni::ref<android::app::Activity> activity) { return call_method<"unsetPreferredService", jboolean>(activity); }
	jboolean supportsAidPrefixRegistration() { return call_method<"supportsAidPrefixRegistration", jboolean>(); }
	jni::ref<java::util::List> getAidsForPreferredPaymentService() { return call_method<"getAidsForPreferredPaymentService", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getRouteDestinationForPreferredPaymentService() { return call_method<"getRouteDestinationForPreferredPaymentService", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> getDescriptionForPreferredPaymentService() { return call_method<"getDescriptionForPreferredPaymentService", jni::ref<java::lang::CharSequence>>(); }

protected:

	CardEmulation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_CARDEMULATION_CARDEMULATION