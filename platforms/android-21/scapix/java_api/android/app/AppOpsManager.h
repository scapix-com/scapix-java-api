// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class AppOpsManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::AppOpsManager>
{
	static constexpr fixed_string class_name = "android/app/AppOpsManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/AppOpsManager_OnOpChangedListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::AppOpsManager : public jni::object_base<"android/app/AppOpsManager",
	java::lang::Object>
{
public:

	using OnOpChangedListener = AppOpsManager_OnOpChangedListener;

	static jint MODE_ALLOWED() { return get_static_field<"MODE_ALLOWED", jint>(); }
	static jint MODE_DEFAULT() { return get_static_field<"MODE_DEFAULT", jint>(); }
	static jint MODE_ERRORED() { return get_static_field<"MODE_ERRORED", jint>(); }
	static jint MODE_IGNORED() { return get_static_field<"MODE_IGNORED", jint>(); }
	static jni::ref<java::lang::String> OPSTR_COARSE_LOCATION() { return get_static_field<"OPSTR_COARSE_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OPSTR_FINE_LOCATION() { return get_static_field<"OPSTR_FINE_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OPSTR_GET_USAGE_STATS() { return get_static_field<"OPSTR_GET_USAGE_STATS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OPSTR_MONITOR_HIGH_POWER_LOCATION() { return get_static_field<"OPSTR_MONITOR_HIGH_POWER_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OPSTR_MONITOR_LOCATION() { return get_static_field<"OPSTR_MONITOR_LOCATION", jni::ref<java::lang::String>>(); }

	void startWatchingMode(jni::ref<java::lang::String> op, jni::ref<java::lang::String> packageName, jni::ref<android::app::AppOpsManager_OnOpChangedListener> callback) { return call_method<"startWatchingMode", void>(op, packageName, callback); }
	void stopWatchingMode(jni::ref<android::app::AppOpsManager_OnOpChangedListener> callback) { return call_method<"stopWatchingMode", void>(callback); }
	jint checkOp(jni::ref<java::lang::String> op, jint uid, jni::ref<java::lang::String> packageName) { return call_method<"checkOp", jint>(op, uid, packageName); }
	jint checkOpNoThrow(jni::ref<java::lang::String> op, jint uid, jni::ref<java::lang::String> packageName) { return call_method<"checkOpNoThrow", jint>(op, uid, packageName); }
	jint noteOp(jni::ref<java::lang::String> op, jint uid, jni::ref<java::lang::String> packageName) { return call_method<"noteOp", jint>(op, uid, packageName); }
	jint noteOpNoThrow(jni::ref<java::lang::String> op, jint uid, jni::ref<java::lang::String> packageName) { return call_method<"noteOpNoThrow", jint>(op, uid, packageName); }
	jint startOp(jni::ref<java::lang::String> op, jint uid, jni::ref<java::lang::String> packageName) { return call_method<"startOp", jint>(op, uid, packageName); }
	jint startOpNoThrow(jni::ref<java::lang::String> op, jint uid, jni::ref<java::lang::String> packageName) { return call_method<"startOpNoThrow", jint>(op, uid, packageName); }
	void finishOp(jni::ref<java::lang::String> op, jint uid, jni::ref<java::lang::String> packageName) { return call_method<"finishOp", void>(op, uid, packageName); }
	void checkPackage(jint uid, jni::ref<java::lang::String> packageName) { return call_method<"checkPackage", void>(uid, packageName); }

protected:

	AppOpsManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER