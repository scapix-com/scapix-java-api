// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_THREADINFO_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_THREADINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class ThreadInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::ThreadInfo>
{
	static constexpr fixed_string class_name = "java/lang/management/ThreadInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_THREADINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_THREADINFO)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_THREADINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/StackTraceElement.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread_State.h>
#include <scapix/java_api/java/lang/management/LockInfo.h>
#include <scapix/java_api/java/lang/management/MonitorInfo.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::management::ThreadInfo : public jni::object_base<"java/lang/management/ThreadInfo",
	java::lang::Object>
{
public:

	jlong getThreadId() { return call_method<"getThreadId", jlong>(); }
	jni::ref<java::lang::String> getThreadName() { return call_method<"getThreadName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Thread_State> getThreadState() { return call_method<"getThreadState", jni::ref<java::lang::Thread_State>>(); }
	jlong getBlockedTime() { return call_method<"getBlockedTime", jlong>(); }
	jlong getBlockedCount() { return call_method<"getBlockedCount", jlong>(); }
	jlong getWaitedTime() { return call_method<"getWaitedTime", jlong>(); }
	jlong getWaitedCount() { return call_method<"getWaitedCount", jlong>(); }
	jni::ref<java::lang::management::LockInfo> getLockInfo() { return call_method<"getLockInfo", jni::ref<java::lang::management::LockInfo>>(); }
	jni::ref<java::lang::String> getLockName() { return call_method<"getLockName", jni::ref<java::lang::String>>(); }
	jlong getLockOwnerId() { return call_method<"getLockOwnerId", jlong>(); }
	jni::ref<java::lang::String> getLockOwnerName() { return call_method<"getLockOwnerName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::StackTraceElement>> getStackTrace() { return call_method<"getStackTrace", jni::ref<jni::array<java::lang::StackTraceElement>>>(); }
	jboolean isSuspended() { return call_method<"isSuspended", jboolean>(); }
	jboolean isInNative() { return call_method<"isInNative", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::management::ThreadInfo> from(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"from", jni::ref<java::lang::management::ThreadInfo>>(p1); }
	jni::ref<jni::array<java::lang::management::MonitorInfo>> getLockedMonitors() { return call_method<"getLockedMonitors", jni::ref<jni::array<java::lang::management::MonitorInfo>>>(); }
	jni::ref<jni::array<java::lang::management::LockInfo>> getLockedSynchronizers() { return call_method<"getLockedSynchronizers", jni::ref<jni::array<java::lang::management::LockInfo>>>(); }

protected:

	ThreadInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_THREADINFO