// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::chooser { class ChooserTargetService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::chooser::ChooserTargetService>
{
	static constexpr fixed_string class_name = "android/service/chooser/ChooserTargetService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::chooser::ChooserTargetService : public jni::object_base<"android/service/chooser/ChooserTargetService",
	android::app::Service>
{
public:

	static jni::ref<java::lang::String> BIND_PERMISSION() { return get_static_field<"BIND_PERMISSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> META_DATA_NAME() { return get_static_field<"META_DATA_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::chooser::ChooserTargetService> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> onGetChooserTargets(jni::ref<android::content::ComponentName> p1, jni::ref<android::content::IntentFilter> p2) { return call_method<"onGetChooserTargets", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }

protected:

	ChooserTargetService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE
