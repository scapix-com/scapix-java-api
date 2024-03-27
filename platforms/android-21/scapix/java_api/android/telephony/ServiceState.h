// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_SERVICESTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SERVICESTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class ServiceState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ServiceState>
{
	static constexpr fixed_string class_name = "android/telephony/ServiceState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SERVICESTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_SERVICESTATE)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SERVICESTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ServiceState : public jni::object_base<"android/telephony/ServiceState",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint STATE_EMERGENCY_ONLY() { return get_static_field<"STATE_EMERGENCY_ONLY", jint>(); }
	static jint STATE_IN_SERVICE() { return get_static_field<"STATE_IN_SERVICE", jint>(); }
	static jint STATE_OUT_OF_SERVICE() { return get_static_field<"STATE_OUT_OF_SERVICE", jint>(); }
	static jint STATE_POWER_OFF() { return get_static_field<"STATE_POWER_OFF", jint>(); }

	static jni::ref<android::telephony::ServiceState> new_object() { return base_::new_object(); }
	static jni::ref<android::telephony::ServiceState> new_object(jni::ref<android::telephony::ServiceState> s) { return base_::new_object(s); }
	static jni::ref<android::telephony::ServiceState> new_object(jni::ref<android::os::Parcel> in) { return base_::new_object(in); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jint getState() { return call_method<"getState", jint>(); }
	jboolean getRoaming() { return call_method<"getRoaming", jboolean>(); }
	jni::ref<java::lang::String> getOperatorAlphaLong() { return call_method<"getOperatorAlphaLong", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getOperatorAlphaShort() { return call_method<"getOperatorAlphaShort", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getOperatorNumeric() { return call_method<"getOperatorNumeric", jni::ref<java::lang::String>>(); }
	jboolean getIsManualSelection() { return call_method<"getIsManualSelection", jboolean>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void setStateOutOfService() { return call_method<"setStateOutOfService", void>(); }
	void setStateOff() { return call_method<"setStateOff", void>(); }
	void setState(jint state) { return call_method<"setState", void>(state); }
	void setRoaming(jboolean roaming) { return call_method<"setRoaming", void>(roaming); }
	void setOperatorName(jni::ref<java::lang::String> longName, jni::ref<java::lang::String> shortName, jni::ref<java::lang::String> numeric) { return call_method<"setOperatorName", void>(longName, shortName, numeric); }
	void setIsManualSelection(jboolean isManual) { return call_method<"setIsManualSelection", void>(isManual); }

protected:

	ServiceState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SERVICESTATE