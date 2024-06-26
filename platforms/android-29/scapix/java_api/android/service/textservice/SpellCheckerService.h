// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::textservice { class SpellCheckerService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::textservice::SpellCheckerService>
{
	static constexpr fixed_string class_name = "android/service/textservice/SpellCheckerService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/textservice/SpellCheckerService_Session.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::textservice::SpellCheckerService : public jni::object_base<"android/service/textservice/SpellCheckerService",
	android::app::Service>
{
public:

	using Session = SpellCheckerService_Session;

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::textservice::SpellCheckerService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	jni::ref<android::service::textservice::SpellCheckerService_Session> createSession() { return call_method<"createSession", jni::ref<android::service::textservice::SpellCheckerService_Session>>(); }

protected:

	SpellCheckerService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE
