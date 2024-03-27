// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/service/controls/templates/ControlTemplate.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_TEMPERATURECONTROLTEMPLATE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_TEMPERATURECONTROLTEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::controls::templates { class TemperatureControlTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::controls::templates::TemperatureControlTemplate>
{
	static constexpr fixed_string class_name = "android/service/controls/templates/TemperatureControlTemplate";
	using base_classes = std::tuple<scapix::java_api::android::service::controls::templates::ControlTemplate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_TEMPERATURECONTROLTEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_TEMPERATURECONTROLTEMPLATE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_TEMPERATURECONTROLTEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::controls::templates::TemperatureControlTemplate : public jni::object_base<"android/service/controls/templates/TemperatureControlTemplate",
	android::service::controls::templates::ControlTemplate>
{
public:

	static jint FLAG_MODE_COOL() { return get_static_field<"FLAG_MODE_COOL", jint>(); }
	static jint FLAG_MODE_ECO() { return get_static_field<"FLAG_MODE_ECO", jint>(); }
	static jint FLAG_MODE_HEAT() { return get_static_field<"FLAG_MODE_HEAT", jint>(); }
	static jint FLAG_MODE_HEAT_COOL() { return get_static_field<"FLAG_MODE_HEAT_COOL", jint>(); }
	static jint FLAG_MODE_OFF() { return get_static_field<"FLAG_MODE_OFF", jint>(); }
	static jint MODE_COOL() { return get_static_field<"MODE_COOL", jint>(); }
	static jint MODE_ECO() { return get_static_field<"MODE_ECO", jint>(); }
	static jint MODE_HEAT() { return get_static_field<"MODE_HEAT", jint>(); }
	static jint MODE_HEAT_COOL() { return get_static_field<"MODE_HEAT_COOL", jint>(); }
	static jint MODE_OFF() { return get_static_field<"MODE_OFF", jint>(); }
	static jint MODE_UNKNOWN() { return get_static_field<"MODE_UNKNOWN", jint>(); }

	static jni::ref<android::service::controls::templates::TemperatureControlTemplate> new_object(jni::ref<java::lang::String> templateId, jni::ref<android::service::controls::templates::ControlTemplate> controlTemplate, jint currentMode, jint currentActiveMode, jint modesFlag) { return base_::new_object(templateId, controlTemplate, currentMode, currentActiveMode, modesFlag); }
	jni::ref<android::service::controls::templates::ControlTemplate> getTemplate() { return call_method<"getTemplate", jni::ref<android::service::controls::templates::ControlTemplate>>(); }
	jint getCurrentMode() { return call_method<"getCurrentMode", jint>(); }
	jint getCurrentActiveMode() { return call_method<"getCurrentActiveMode", jint>(); }
	jint getModes() { return call_method<"getModes", jint>(); }
	jint getTemplateType() { return call_method<"getTemplateType", jint>(); }

protected:

	TemperatureControlTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_TEMPLATES_TEMPERATURECONTROLTEMPLATE