// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSREQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSREQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::lights { class LightsRequest_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::lights::LightsRequest_Builder>
{
	static constexpr fixed_string class_name = "android/hardware/lights/LightsRequest$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSREQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSREQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSREQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/lights/Light.h>
#include <scapix/java_api/android/hardware/lights/LightState.h>
#include <scapix/java_api/android/hardware/lights/LightsRequest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::lights::LightsRequest_Builder : public jni::object_base<"android/hardware/lights/LightsRequest$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::lights::LightsRequest_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::hardware::lights::LightsRequest_Builder> addLight(jni::ref<android::hardware::lights::Light> light, jni::ref<android::hardware::lights::LightState> state) { return call_method<"addLight", jni::ref<android::hardware::lights::LightsRequest_Builder>>(light, state); }
	jni::ref<android::hardware::lights::LightsRequest_Builder> clearLight(jni::ref<android::hardware::lights::Light> light) { return call_method<"clearLight", jni::ref<android::hardware::lights::LightsRequest_Builder>>(light); }
	jni::ref<android::hardware::lights::LightsRequest> build() { return call_method<"build", jni::ref<android::hardware::lights::LightsRequest>>(); }

protected:

	LightsRequest_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSREQUEST_BUILDER
