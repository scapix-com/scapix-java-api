// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_CONTROL_STATELESSBUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_CONTROL_STATELESSBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::controls { class Control_StatelessBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::controls::Control_StatelessBuilder>
{
	static constexpr fixed_string class_name = "android/service/controls/Control$StatelessBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_CONTROL_STATELESSBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_CONTROL_STATELESSBUILDER)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_CONTROL_STATELESSBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/service/controls/Control.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::controls::Control_StatelessBuilder : public jni::object_base<"android/service/controls/Control$StatelessBuilder",
	java::lang::Object>
{
public:

	static jni::ref<android::service::controls::Control_StatelessBuilder> new_object(jni::ref<java::lang::String> controlId, jni::ref<android::app::PendingIntent> appIntent) { return base_::new_object(controlId, appIntent); }
	static jni::ref<android::service::controls::Control_StatelessBuilder> new_object(jni::ref<android::service::controls::Control> control) { return base_::new_object(control); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setControlId(jni::ref<java::lang::String> controlId) { return call_method<"setControlId", jni::ref<android::service::controls::Control_StatelessBuilder>>(controlId); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setDeviceType(jint deviceType) { return call_method<"setDeviceType", jni::ref<android::service::controls::Control_StatelessBuilder>>(deviceType); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setTitle", jni::ref<android::service::controls::Control_StatelessBuilder>>(title); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setSubtitle(jni::ref<java::lang::CharSequence> subtitle) { return call_method<"setSubtitle", jni::ref<android::service::controls::Control_StatelessBuilder>>(subtitle); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setStructure(jni::ref<java::lang::CharSequence> structure) { return call_method<"setStructure", jni::ref<android::service::controls::Control_StatelessBuilder>>(structure); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setZone(jni::ref<java::lang::CharSequence> zone) { return call_method<"setZone", jni::ref<android::service::controls::Control_StatelessBuilder>>(zone); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setAppIntent(jni::ref<android::app::PendingIntent> appIntent) { return call_method<"setAppIntent", jni::ref<android::service::controls::Control_StatelessBuilder>>(appIntent); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setCustomIcon(jni::ref<android::graphics::drawable::Icon> customIcon) { return call_method<"setCustomIcon", jni::ref<android::service::controls::Control_StatelessBuilder>>(customIcon); }
	jni::ref<android::service::controls::Control_StatelessBuilder> setCustomColor(jni::ref<android::content::res::ColorStateList> customColor) { return call_method<"setCustomColor", jni::ref<android::service::controls::Control_StatelessBuilder>>(customColor); }
	jni::ref<android::service::controls::Control> build() { return call_method<"build", jni::ref<android::service::controls::Control>>(); }

protected:

	Control_StatelessBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_CONTROL_STATELESSBUILDER