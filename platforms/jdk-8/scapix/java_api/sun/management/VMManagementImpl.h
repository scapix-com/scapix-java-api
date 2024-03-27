// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/VMManagement.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_VMMANAGEMENTIMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_VMMANAGEMENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class VMManagementImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::VMManagementImpl>
{
	static constexpr fixed_string class_name = "sun/management/VMManagementImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::VMManagement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_VMMANAGEMENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_VMMANAGEMENTIMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_VMMANAGEMENTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::VMManagementImpl : public jni::object_base<"sun/management/VMManagementImpl",
	java::lang::Object,
	sun::management::VMManagement>
{
public:

	jboolean isCompilationTimeMonitoringSupported() { return call_method<"isCompilationTimeMonitoringSupported", jboolean>(); }
	jboolean isThreadContentionMonitoringSupported() { return call_method<"isThreadContentionMonitoringSupported", jboolean>(); }
	jboolean isCurrentThreadCpuTimeSupported() { return call_method<"isCurrentThreadCpuTimeSupported", jboolean>(); }
	jboolean isOtherThreadCpuTimeSupported() { return call_method<"isOtherThreadCpuTimeSupported", jboolean>(); }
	jboolean isBootClassPathSupported() { return call_method<"isBootClassPathSupported", jboolean>(); }
	jboolean isObjectMonitorUsageSupported() { return call_method<"isObjectMonitorUsageSupported", jboolean>(); }
	jboolean isSynchronizerUsageSupported() { return call_method<"isSynchronizerUsageSupported", jboolean>(); }
	jboolean isThreadAllocatedMemorySupported() { return call_method<"isThreadAllocatedMemorySupported", jboolean>(); }
	jboolean isGcNotificationSupported() { return call_method<"isGcNotificationSupported", jboolean>(); }
	jboolean isRemoteDiagnosticCommandsSupported() { return call_method<"isRemoteDiagnosticCommandsSupported", jboolean>(); }
	jboolean isThreadContentionMonitoringEnabled() { return call_method<"isThreadContentionMonitoringEnabled", jboolean>(); }
	jboolean isThreadCpuTimeEnabled() { return call_method<"isThreadCpuTimeEnabled", jboolean>(); }
	jboolean isThreadAllocatedMemoryEnabled() { return call_method<"isThreadAllocatedMemoryEnabled", jboolean>(); }
	jint getLoadedClassCount() { return call_method<"getLoadedClassCount", jint>(); }
	jlong getTotalClassCount() { return call_method<"getTotalClassCount", jlong>(); }
	jlong getUnloadedClassCount() { return call_method<"getUnloadedClassCount", jlong>(); }
	jboolean getVerboseClass() { return call_method<"getVerboseClass", jboolean>(); }
	jboolean getVerboseGC() { return call_method<"getVerboseGC", jboolean>(); }
	jni::ref<java::lang::String> getManagementVersion() { return call_method<"getManagementVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmId() { return call_method<"getVmId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmName() { return call_method<"getVmName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmVendor() { return call_method<"getVmVendor", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmVersion() { return call_method<"getVmVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmSpecName() { return call_method<"getVmSpecName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmSpecVendor() { return call_method<"getVmSpecVendor", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmSpecVersion() { return call_method<"getVmSpecVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getClassPath() { return call_method<"getClassPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLibraryPath() { return call_method<"getLibraryPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getBootClassPath() { return call_method<"getBootClassPath", jni::ref<java::lang::String>>(); }
	jlong getUptime() { return call_method<"getUptime", jlong>(); }
	jni::ref<java::util::List> getVmArguments() { return call_method<"getVmArguments", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<java::lang::String>> getVmArguments0() { return call_method<"getVmArguments0", jni::ref<jni::array<java::lang::String>>>(); }
	jlong getStartupTime() { return call_method<"getStartupTime", jlong>(); }
	jint getAvailableProcessors() { return call_method<"getAvailableProcessors", jint>(); }
	jni::ref<java::lang::String> getCompilerName() { return call_method<"getCompilerName", jni::ref<java::lang::String>>(); }
	jlong getTotalCompileTime() { return call_method<"getTotalCompileTime", jlong>(); }
	jlong getTotalThreadCount() { return call_method<"getTotalThreadCount", jlong>(); }
	jint getLiveThreadCount() { return call_method<"getLiveThreadCount", jint>(); }
	jint getPeakThreadCount() { return call_method<"getPeakThreadCount", jint>(); }
	jint getDaemonThreadCount() { return call_method<"getDaemonThreadCount", jint>(); }
	jni::ref<java::lang::String> getOsName() { return call_method<"getOsName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getOsArch() { return call_method<"getOsArch", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getOsVersion() { return call_method<"getOsVersion", jni::ref<java::lang::String>>(); }
	jlong getSafepointCount() { return call_method<"getSafepointCount", jlong>(); }
	jlong getTotalSafepointTime() { return call_method<"getTotalSafepointTime", jlong>(); }
	jlong getSafepointSyncTime() { return call_method<"getSafepointSyncTime", jlong>(); }
	jlong getTotalApplicationNonStoppedTime() { return call_method<"getTotalApplicationNonStoppedTime", jlong>(); }
	jlong getLoadedClassSize() { return call_method<"getLoadedClassSize", jlong>(); }
	jlong getUnloadedClassSize() { return call_method<"getUnloadedClassSize", jlong>(); }
	jlong getClassLoadingTime() { return call_method<"getClassLoadingTime", jlong>(); }
	jlong getMethodDataSize() { return call_method<"getMethodDataSize", jlong>(); }
	jlong getInitializedClassCount() { return call_method<"getInitializedClassCount", jlong>(); }
	jlong getClassInitializationTime() { return call_method<"getClassInitializationTime", jlong>(); }
	jlong getClassVerificationTime() { return call_method<"getClassVerificationTime", jlong>(); }
	jni::ref<java::util::List> getInternalCounters(jni::ref<java::lang::String> p1) { return call_method<"getInternalCounters", jni::ref<java::util::List>>(p1); }

protected:

	VMManagementImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_VMMANAGEMENTIMPL
