// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ApplicationErrorReport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ApplicationErrorReport>
{
	static constexpr fixed_string class_name = "android/app/ApplicationErrorReport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT)
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/ApplicationErrorReport_AnrInfo.h>
#include <scapix/java_api/android/app/ApplicationErrorReport_BatteryInfo.h>
#include <scapix/java_api/android/app/ApplicationErrorReport_CrashInfo.h>
#include <scapix/java_api/android/app/ApplicationErrorReport_RunningServiceInfo.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ApplicationErrorReport : public jni::object_base<"android/app/ApplicationErrorReport",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using RunningServiceInfo = ApplicationErrorReport_RunningServiceInfo;
	using BatteryInfo = ApplicationErrorReport_BatteryInfo;
	using AnrInfo = ApplicationErrorReport_AnrInfo;
	using CrashInfo = ApplicationErrorReport_CrashInfo;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint TYPE_ANR() { return get_static_field<"TYPE_ANR", jint>(); }
	static jint TYPE_BATTERY() { return get_static_field<"TYPE_BATTERY", jint>(); }
	static jint TYPE_CRASH() { return get_static_field<"TYPE_CRASH", jint>(); }
	static jint TYPE_NONE() { return get_static_field<"TYPE_NONE", jint>(); }
	static jint TYPE_RUNNING_SERVICE() { return get_static_field<"TYPE_RUNNING_SERVICE", jint>(); }
	jni::ref<android::app::ApplicationErrorReport_AnrInfo> anrInfo() { return get_field<"anrInfo", jni::ref<android::app::ApplicationErrorReport_AnrInfo>>(); }
	void anrInfo(jni::ref<android::app::ApplicationErrorReport_AnrInfo> v) { set_field<"anrInfo", jni::ref<android::app::ApplicationErrorReport_AnrInfo>>(v); }
	jni::ref<android::app::ApplicationErrorReport_BatteryInfo> batteryInfo() { return get_field<"batteryInfo", jni::ref<android::app::ApplicationErrorReport_BatteryInfo>>(); }
	void batteryInfo(jni::ref<android::app::ApplicationErrorReport_BatteryInfo> v) { set_field<"batteryInfo", jni::ref<android::app::ApplicationErrorReport_BatteryInfo>>(v); }
	jni::ref<android::app::ApplicationErrorReport_CrashInfo> crashInfo() { return get_field<"crashInfo", jni::ref<android::app::ApplicationErrorReport_CrashInfo>>(); }
	void crashInfo(jni::ref<android::app::ApplicationErrorReport_CrashInfo> v) { set_field<"crashInfo", jni::ref<android::app::ApplicationErrorReport_CrashInfo>>(v); }
	jni::ref<java::lang::String> installerPackageName() { return get_field<"installerPackageName", jni::ref<java::lang::String>>(); }
	void installerPackageName(jni::ref<java::lang::String> v) { set_field<"installerPackageName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> packageName() { return get_field<"packageName", jni::ref<java::lang::String>>(); }
	void packageName(jni::ref<java::lang::String> v) { set_field<"packageName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> processName() { return get_field<"processName", jni::ref<java::lang::String>>(); }
	void processName(jni::ref<java::lang::String> v) { set_field<"processName", jni::ref<java::lang::String>>(v); }
	jni::ref<android::app::ApplicationErrorReport_RunningServiceInfo> runningServiceInfo() { return get_field<"runningServiceInfo", jni::ref<android::app::ApplicationErrorReport_RunningServiceInfo>>(); }
	void runningServiceInfo(jni::ref<android::app::ApplicationErrorReport_RunningServiceInfo> v) { set_field<"runningServiceInfo", jni::ref<android::app::ApplicationErrorReport_RunningServiceInfo>>(v); }
	jboolean systemApp() { return get_field<"systemApp", jboolean>(); }
	void systemApp(jboolean v) { set_field<"systemApp", jboolean>(v); }
	jlong time() { return get_field<"time", jlong>(); }
	void time(jlong v) { set_field<"time", jlong>(v); }
	jint type() { return get_field<"type", jint>(); }
	void type(jint v) { set_field<"type", jint>(v); }

	static jni::ref<android::app::ApplicationErrorReport> new_object() { return base_::new_object(); }
	static jni::ref<android::content::ComponentName> getErrorReportReceiver(jni::ref<android::content::Context> context, jni::ref<java::lang::String> packageName, jint appFlags) { return call_static_method<"getErrorReportReceiver", jni::ref<android::content::ComponentName>>(context, packageName, appFlags); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	void readFromParcel(jni::ref<android::os::Parcel> in) { return call_method<"readFromParcel", void>(in); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }

protected:

	ApplicationErrorReport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT
