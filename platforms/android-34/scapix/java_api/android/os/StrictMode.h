// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class StrictMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::StrictMode>
{
	static constexpr fixed_string class_name = "android/os/StrictMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE)
#define SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/StrictMode_ThreadPolicy.h>
#include <scapix/java_api/android/os/StrictMode_VmPolicy.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/os/StrictMode_OnVmViolationListener.h>
#include <scapix/java_api/android/os/StrictMode_OnThreadViolationListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::StrictMode : public jni::object_base<"android/os/StrictMode",
	java::lang::Object>
{
public:

	using VmPolicy = StrictMode_VmPolicy;
	using ThreadPolicy = StrictMode_ThreadPolicy;
	using OnVmViolationListener = StrictMode_OnVmViolationListener;
	using OnThreadViolationListener = StrictMode_OnThreadViolationListener;

	static void setThreadPolicy(jni::ref<android::os::StrictMode_ThreadPolicy> policy) { return call_static_method<"setThreadPolicy", void>(policy); }
	static jni::ref<android::os::StrictMode_ThreadPolicy> getThreadPolicy() { return call_static_method<"getThreadPolicy", jni::ref<android::os::StrictMode_ThreadPolicy>>(); }
	static jni::ref<android::os::StrictMode_ThreadPolicy> allowThreadDiskWrites() { return call_static_method<"allowThreadDiskWrites", jni::ref<android::os::StrictMode_ThreadPolicy>>(); }
	static jni::ref<android::os::StrictMode_ThreadPolicy> allowThreadDiskReads() { return call_static_method<"allowThreadDiskReads", jni::ref<android::os::StrictMode_ThreadPolicy>>(); }
	static void setVmPolicy(jni::ref<android::os::StrictMode_VmPolicy> policy) { return call_static_method<"setVmPolicy", void>(policy); }
	static jni::ref<android::os::StrictMode_VmPolicy> getVmPolicy() { return call_static_method<"getVmPolicy", jni::ref<android::os::StrictMode_VmPolicy>>(); }
	static void enableDefaults() { return call_static_method<"enableDefaults", void>(); }
	static void noteSlowCall(jni::ref<java::lang::String> name) { return call_static_method<"noteSlowCall", void>(name); }

protected:

	StrictMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE
