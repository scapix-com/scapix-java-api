// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSAUTOMATICGAINCONTROL_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSAUTOMATICGAINCONTROL_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssAutomaticGainControl_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssAutomaticGainControl_Builder>
{
	static constexpr fixed_string class_name = "android/location/GnssAutomaticGainControl$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSAUTOMATICGAINCONTROL_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSAUTOMATICGAINCONTROL_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSAUTOMATICGAINCONTROL_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/location/GnssAutomaticGainControl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssAutomaticGainControl_Builder : public jni::object_base<"android/location/GnssAutomaticGainControl$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::location::GnssAutomaticGainControl_Builder> new_object() { return base_::new_object(); }
	static jni::ref<android::location::GnssAutomaticGainControl_Builder> new_object(jni::ref<android::location::GnssAutomaticGainControl> agc) { return base_::new_object(agc); }
	jni::ref<android::location::GnssAutomaticGainControl_Builder> setLevelDb(jdouble levelDb) { return call_method<"setLevelDb", jni::ref<android::location::GnssAutomaticGainControl_Builder>>(levelDb); }
	jni::ref<android::location::GnssAutomaticGainControl_Builder> setConstellationType(jint constellationType) { return call_method<"setConstellationType", jni::ref<android::location::GnssAutomaticGainControl_Builder>>(constellationType); }
	jni::ref<android::location::GnssAutomaticGainControl_Builder> setCarrierFrequencyHz(jlong carrierFrequencyHz) { return call_method<"setCarrierFrequencyHz", jni::ref<android::location::GnssAutomaticGainControl_Builder>>(carrierFrequencyHz); }
	jni::ref<android::location::GnssAutomaticGainControl> build() { return call_method<"build", jni::ref<android::location::GnssAutomaticGainControl>>(); }

protected:

	GnssAutomaticGainControl_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSAUTOMATICGAINCONTROL_BUILDER