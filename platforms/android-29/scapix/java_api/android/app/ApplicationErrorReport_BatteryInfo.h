// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ApplicationErrorReport_BatteryInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ApplicationErrorReport_BatteryInfo>
{
	static constexpr fixed_string class_name = "android/app/ApplicationErrorReport$BatteryInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO)
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ApplicationErrorReport_BatteryInfo : public jni::object_base<"android/app/ApplicationErrorReport$BatteryInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> checkinDetails() { return get_field<"checkinDetails", jni::ref<java::lang::String>>(); }
	void checkinDetails(jni::ref<java::lang::String> v) { set_field<"checkinDetails", jni::ref<java::lang::String>>(v); }
	jlong durationMicros() { return get_field<"durationMicros", jlong>(); }
	void durationMicros(jlong v) { set_field<"durationMicros", jlong>(v); }
	jni::ref<java::lang::String> usageDetails() { return get_field<"usageDetails", jni::ref<java::lang::String>>(); }
	void usageDetails(jni::ref<java::lang::String> v) { set_field<"usageDetails", jni::ref<java::lang::String>>(v); }
	jint usagePercent() { return get_field<"usagePercent", jint>(); }
	void usagePercent(jint v) { set_field<"usagePercent", jint>(v); }

	static jni::ref<android::app::ApplicationErrorReport_BatteryInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::app::ApplicationErrorReport_BatteryInfo> new_object(jni::ref<android::os::Parcel> in) { return base_::new_object(in); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }

protected:

	ApplicationErrorReport_BatteryInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO
