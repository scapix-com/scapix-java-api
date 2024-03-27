// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_VR_VRLISTENERSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VR_VRLISTENERSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::vr { class VrListenerService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::vr::VrListenerService>
{
	static constexpr fixed_string class_name = "android/service/vr/VrListenerService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VR_VRLISTENERSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_VR_VRLISTENERSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VR_VRLISTENERSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::vr::VrListenerService : public jni::object_base<"android/service/vr/VrListenerService",
	android::app::Service>
{
public:

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::vr::VrListenerService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void onCurrentVrActivityChanged(jni::ref<android::content::ComponentName> component) { return call_method<"onCurrentVrActivityChanged", void>(component); }
	static jboolean isVrModePackageEnabled(jni::ref<android::content::Context> context, jni::ref<android::content::ComponentName> requestedComponent) { return call_static_method<"isVrModePackageEnabled", jboolean>(context, requestedComponent); }

protected:

	VrListenerService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VR_VRLISTENERSERVICE
