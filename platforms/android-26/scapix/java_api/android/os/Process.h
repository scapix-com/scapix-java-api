// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_PROCESS_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_PROCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Process; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Process>
{
	static constexpr fixed_string class_name = "android/os/Process";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PROCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_PROCESS)
#define SCAPIX_JAVA_API_ANDROID_OS_PROCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Process : public jni::object_base<"android/os/Process",
	java::lang::Object>
{
public:

	static jint FIRST_APPLICATION_UID() { return get_static_field<"FIRST_APPLICATION_UID", jint>(); }
	static jint LAST_APPLICATION_UID() { return get_static_field<"LAST_APPLICATION_UID", jint>(); }
	static jint PHONE_UID() { return get_static_field<"PHONE_UID", jint>(); }
	static jint SIGNAL_KILL() { return get_static_field<"SIGNAL_KILL", jint>(); }
	static jint SIGNAL_QUIT() { return get_static_field<"SIGNAL_QUIT", jint>(); }
	static jint SIGNAL_USR1() { return get_static_field<"SIGNAL_USR1", jint>(); }
	static jint SYSTEM_UID() { return get_static_field<"SYSTEM_UID", jint>(); }
	static jint THREAD_PRIORITY_AUDIO() { return get_static_field<"THREAD_PRIORITY_AUDIO", jint>(); }
	static jint THREAD_PRIORITY_BACKGROUND() { return get_static_field<"THREAD_PRIORITY_BACKGROUND", jint>(); }
	static jint THREAD_PRIORITY_DEFAULT() { return get_static_field<"THREAD_PRIORITY_DEFAULT", jint>(); }
	static jint THREAD_PRIORITY_DISPLAY() { return get_static_field<"THREAD_PRIORITY_DISPLAY", jint>(); }
	static jint THREAD_PRIORITY_FOREGROUND() { return get_static_field<"THREAD_PRIORITY_FOREGROUND", jint>(); }
	static jint THREAD_PRIORITY_LESS_FAVORABLE() { return get_static_field<"THREAD_PRIORITY_LESS_FAVORABLE", jint>(); }
	static jint THREAD_PRIORITY_LOWEST() { return get_static_field<"THREAD_PRIORITY_LOWEST", jint>(); }
	static jint THREAD_PRIORITY_MORE_FAVORABLE() { return get_static_field<"THREAD_PRIORITY_MORE_FAVORABLE", jint>(); }
	static jint THREAD_PRIORITY_URGENT_AUDIO() { return get_static_field<"THREAD_PRIORITY_URGENT_AUDIO", jint>(); }
	static jint THREAD_PRIORITY_URGENT_DISPLAY() { return get_static_field<"THREAD_PRIORITY_URGENT_DISPLAY", jint>(); }

	static jni::ref<android::os::Process> new_object() { return base_::new_object(); }
	static jlong getElapsedCpuTime() { return call_static_method<"getElapsedCpuTime", jlong>(); }
	static jlong getStartElapsedRealtime() { return call_static_method<"getStartElapsedRealtime", jlong>(); }
	static jlong getStartUptimeMillis() { return call_static_method<"getStartUptimeMillis", jlong>(); }
	static jboolean is64Bit() { return call_static_method<"is64Bit", jboolean>(); }
	static jint myPid() { return call_static_method<"myPid", jint>(); }
	static jint myTid() { return call_static_method<"myTid", jint>(); }
	static jint myUid() { return call_static_method<"myUid", jint>(); }
	static jni::ref<android::os::UserHandle> myUserHandle() { return call_static_method<"myUserHandle", jni::ref<android::os::UserHandle>>(); }
	static jboolean isApplicationUid(jint uid) { return call_static_method<"isApplicationUid", jboolean>(uid); }
	static jint getUidForName(jni::ref<java::lang::String> p1) { return call_static_method<"getUidForName", jint>(p1); }
	static jint getGidForName(jni::ref<java::lang::String> p1) { return call_static_method<"getGidForName", jint>(p1); }
	static void setThreadPriority(jint p1, jint p2) { return call_static_method<"setThreadPriority", void>(p1, p2); }
	static jni::ref<jni::array<jint>> getExclusiveCores() { return call_static_method<"getExclusiveCores", jni::ref<jni::array<jint>>>(); }
	static void setThreadPriority(jint p1) { return call_static_method<"setThreadPriority", void>(p1); }
	static jint getThreadPriority(jint p1) { return call_static_method<"getThreadPriority", jint>(p1); }
	static jboolean supportsProcesses() { return call_static_method<"supportsProcesses", jboolean>(); }
	static void killProcess(jint pid) { return call_static_method<"killProcess", void>(pid); }
	static void sendSignal(jint p1, jint p2) { return call_static_method<"sendSignal", void>(p1, p2); }

protected:

	Process(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PROCESS
