// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssMeasurementsEvent_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssMeasurementsEvent_Callback>
{
	static constexpr fixed_string class_name = "android/location/GnssMeasurementsEvent$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/location/GnssMeasurementsEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssMeasurementsEvent_Callback : public jni::object_base<"android/location/GnssMeasurementsEvent$Callback",
	java::lang::Object>
{
public:

	static jint STATUS_LOCATION_DISABLED() { return get_static_field<"STATUS_LOCATION_DISABLED", jint>(); }
	static jint STATUS_NOT_ALLOWED() { return get_static_field<"STATUS_NOT_ALLOWED", jint>(); }
	static jint STATUS_NOT_SUPPORTED() { return get_static_field<"STATUS_NOT_SUPPORTED", jint>(); }
	static jint STATUS_READY() { return get_static_field<"STATUS_READY", jint>(); }

	static jni::ref<android::location::GnssMeasurementsEvent_Callback> new_object() { return base_::new_object(); }
	void onGnssMeasurementsReceived(jni::ref<android::location::GnssMeasurementsEvent> eventArgs) { return call_method<"onGnssMeasurementsReceived", void>(eventArgs); }
	void onStatusChanged(jint status) { return call_method<"onStatusChanged", void>(status); }

protected:

	GnssMeasurementsEvent_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK
