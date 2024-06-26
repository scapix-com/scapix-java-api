// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_DEBUG_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_DEBUG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Debug; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Debug>
{
	static constexpr fixed_string class_name = "android/os/Debug";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DEBUG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_DEBUG)
#define SCAPIX_JAVA_API_ANDROID_OS_DEBUG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Debug_MemoryInfo.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/android/os/Debug_InstructionCount.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Debug : public jni::object_base<"android/os/Debug",
	java::lang::Object>
{
public:

	using InstructionCount = Debug_InstructionCount;
	using MemoryInfo = Debug_MemoryInfo;

	static jint SHOW_CLASSLOADER() { return get_static_field<"SHOW_CLASSLOADER", jint>(); }
	static jint SHOW_FULL_DETAIL() { return get_static_field<"SHOW_FULL_DETAIL", jint>(); }
	static jint SHOW_INITIALIZED() { return get_static_field<"SHOW_INITIALIZED", jint>(); }
	static jint TRACE_COUNT_ALLOCS() { return get_static_field<"TRACE_COUNT_ALLOCS", jint>(); }

	static void waitForDebugger() { return call_static_method<"waitForDebugger", void>(); }
	static jboolean waitingForDebugger() { return call_static_method<"waitingForDebugger", jboolean>(); }
	static jboolean isDebuggerConnected() { return call_static_method<"isDebuggerConnected", jboolean>(); }
	static void changeDebugPort(jint port) { return call_static_method<"changeDebugPort", void>(port); }
	static void startNativeTracing() { return call_static_method<"startNativeTracing", void>(); }
	static void stopNativeTracing() { return call_static_method<"stopNativeTracing", void>(); }
	static void enableEmulatorTraceOutput() { return call_static_method<"enableEmulatorTraceOutput", void>(); }
	static void startMethodTracing() { return call_static_method<"startMethodTracing", void>(); }
	static void startMethodTracing(jni::ref<java::lang::String> tracePath) { return call_static_method<"startMethodTracing", void>(tracePath); }
	static void startMethodTracing(jni::ref<java::lang::String> tracePath, jint bufferSize) { return call_static_method<"startMethodTracing", void>(tracePath, bufferSize); }
	static void startMethodTracing(jni::ref<java::lang::String> tracePath, jint bufferSize, jint flags) { return call_static_method<"startMethodTracing", void>(tracePath, bufferSize, flags); }
	static void startMethodTracingSampling(jni::ref<java::lang::String> tracePath, jint bufferSize, jint intervalUs) { return call_static_method<"startMethodTracingSampling", void>(tracePath, bufferSize, intervalUs); }
	static void stopMethodTracing() { return call_static_method<"stopMethodTracing", void>(); }
	static jlong threadCpuTimeNanos() { return call_static_method<"threadCpuTimeNanos", jlong>(); }
	static void startAllocCounting() { return call_static_method<"startAllocCounting", void>(); }
	static void stopAllocCounting() { return call_static_method<"stopAllocCounting", void>(); }
	static jint getGlobalAllocCount() { return call_static_method<"getGlobalAllocCount", jint>(); }
	static void resetGlobalAllocCount() { return call_static_method<"resetGlobalAllocCount", void>(); }
	static jint getGlobalAllocSize() { return call_static_method<"getGlobalAllocSize", jint>(); }
	static void resetGlobalAllocSize() { return call_static_method<"resetGlobalAllocSize", void>(); }
	static jint getGlobalFreedCount() { return call_static_method<"getGlobalFreedCount", jint>(); }
	static void resetGlobalFreedCount() { return call_static_method<"resetGlobalFreedCount", void>(); }
	static jint getGlobalFreedSize() { return call_static_method<"getGlobalFreedSize", jint>(); }
	static void resetGlobalFreedSize() { return call_static_method<"resetGlobalFreedSize", void>(); }
	static jint getGlobalGcInvocationCount() { return call_static_method<"getGlobalGcInvocationCount", jint>(); }
	static void resetGlobalGcInvocationCount() { return call_static_method<"resetGlobalGcInvocationCount", void>(); }
	static jint getGlobalClassInitCount() { return call_static_method<"getGlobalClassInitCount", jint>(); }
	static void resetGlobalClassInitCount() { return call_static_method<"resetGlobalClassInitCount", void>(); }
	static jint getGlobalClassInitTime() { return call_static_method<"getGlobalClassInitTime", jint>(); }
	static void resetGlobalClassInitTime() { return call_static_method<"resetGlobalClassInitTime", void>(); }
	static jint getGlobalExternalAllocCount() { return call_static_method<"getGlobalExternalAllocCount", jint>(); }
	static void resetGlobalExternalAllocSize() { return call_static_method<"resetGlobalExternalAllocSize", void>(); }
	static void resetGlobalExternalAllocCount() { return call_static_method<"resetGlobalExternalAllocCount", void>(); }
	static jint getGlobalExternalAllocSize() { return call_static_method<"getGlobalExternalAllocSize", jint>(); }
	static jint getGlobalExternalFreedCount() { return call_static_method<"getGlobalExternalFreedCount", jint>(); }
	static void resetGlobalExternalFreedCount() { return call_static_method<"resetGlobalExternalFreedCount", void>(); }
	static jint getGlobalExternalFreedSize() { return call_static_method<"getGlobalExternalFreedSize", jint>(); }
	static void resetGlobalExternalFreedSize() { return call_static_method<"resetGlobalExternalFreedSize", void>(); }
	static jint getThreadAllocCount() { return call_static_method<"getThreadAllocCount", jint>(); }
	static void resetThreadAllocCount() { return call_static_method<"resetThreadAllocCount", void>(); }
	static jint getThreadAllocSize() { return call_static_method<"getThreadAllocSize", jint>(); }
	static void resetThreadAllocSize() { return call_static_method<"resetThreadAllocSize", void>(); }
	static jint getThreadExternalAllocCount() { return call_static_method<"getThreadExternalAllocCount", jint>(); }
	static void resetThreadExternalAllocCount() { return call_static_method<"resetThreadExternalAllocCount", void>(); }
	static jint getThreadExternalAllocSize() { return call_static_method<"getThreadExternalAllocSize", jint>(); }
	static void resetThreadExternalAllocSize() { return call_static_method<"resetThreadExternalAllocSize", void>(); }
	static jint getThreadGcInvocationCount() { return call_static_method<"getThreadGcInvocationCount", jint>(); }
	static void resetThreadGcInvocationCount() { return call_static_method<"resetThreadGcInvocationCount", void>(); }
	static void resetAllCounts() { return call_static_method<"resetAllCounts", void>(); }
	static jni::ref<java::lang::String> getRuntimeStat(jni::ref<java::lang::String> statName) { return call_static_method<"getRuntimeStat", jni::ref<java::lang::String>>(statName); }
	static jni::ref<java::util::Map> getRuntimeStats() { return call_static_method<"getRuntimeStats", jni::ref<java::util::Map>>(); }
	static jlong getNativeHeapSize() { return call_static_method<"getNativeHeapSize", jlong>(); }
	static jlong getNativeHeapAllocatedSize() { return call_static_method<"getNativeHeapAllocatedSize", jlong>(); }
	static jlong getNativeHeapFreeSize() { return call_static_method<"getNativeHeapFreeSize", jlong>(); }
	static void getMemoryInfo(jni::ref<android::os::Debug_MemoryInfo> p1) { return call_static_method<"getMemoryInfo", void>(p1); }
	static jlong getPss() { return call_static_method<"getPss", jlong>(); }
	static jint setAllocationLimit(jint limit) { return call_static_method<"setAllocationLimit", jint>(limit); }
	static jint setGlobalAllocationLimit(jint limit) { return call_static_method<"setGlobalAllocationLimit", jint>(limit); }
	static void printLoadedClasses(jint flags) { return call_static_method<"printLoadedClasses", void>(flags); }
	static jint getLoadedClassCount() { return call_static_method<"getLoadedClassCount", jint>(); }
	static void dumpHprofData(jni::ref<java::lang::String> fileName) { return call_static_method<"dumpHprofData", void>(fileName); }
	static jint getBinderSentTransactions() { return call_static_method<"getBinderSentTransactions", jint>(); }
	static jint getBinderReceivedTransactions() { return call_static_method<"getBinderReceivedTransactions", jint>(); }
	static jint getBinderLocalObjectCount() { return call_static_method<"getBinderLocalObjectCount", jint>(); }
	static jint getBinderProxyObjectCount() { return call_static_method<"getBinderProxyObjectCount", jint>(); }
	static jint getBinderDeathObjectCount() { return call_static_method<"getBinderDeathObjectCount", jint>(); }
	static jboolean dumpService(jni::ref<java::lang::String> name, jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<java::lang::String>> args) { return call_static_method<"dumpService", jboolean>(name, fd, args); }

protected:

	Debug(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DEBUG
