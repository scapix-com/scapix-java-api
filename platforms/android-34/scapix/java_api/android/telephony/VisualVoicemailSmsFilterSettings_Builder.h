// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class VisualVoicemailSmsFilterSettings_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::VisualVoicemailSmsFilterSettings_Builder>
{
	static constexpr fixed_string class_name = "android/telephony/VisualVoicemailSmsFilterSettings$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/VisualVoicemailSmsFilterSettings.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::VisualVoicemailSmsFilterSettings_Builder : public jni::object_base<"android/telephony/VisualVoicemailSmsFilterSettings$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::telephony::VisualVoicemailSmsFilterSettings_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::telephony::VisualVoicemailSmsFilterSettings> build() { return call_method<"build", jni::ref<android::telephony::VisualVoicemailSmsFilterSettings>>(); }
	jni::ref<android::telephony::VisualVoicemailSmsFilterSettings_Builder> setClientPrefix(jni::ref<java::lang::String> clientPrefix) { return call_method<"setClientPrefix", jni::ref<android::telephony::VisualVoicemailSmsFilterSettings_Builder>>(clientPrefix); }
	jni::ref<android::telephony::VisualVoicemailSmsFilterSettings_Builder> setOriginatingNumbers(jni::ref<java::util::List> originatingNumbers) { return call_method<"setOriginatingNumbers", jni::ref<android::telephony::VisualVoicemailSmsFilterSettings_Builder>>(originatingNumbers); }
	jni::ref<android::telephony::VisualVoicemailSmsFilterSettings_Builder> setDestinationPort(jint destinationPort) { return call_method<"setDestinationPort", jni::ref<android::telephony::VisualVoicemailSmsFilterSettings_Builder>>(destinationPort); }

protected:

	VisualVoicemailSmsFilterSettings_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS_BUILDER