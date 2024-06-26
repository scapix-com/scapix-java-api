// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCOMPILATIONMBEAN_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCOMPILATIONMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class HotspotCompilationMBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::HotspotCompilationMBean>
{
	static constexpr fixed_string class_name = "sun/management/HotspotCompilationMBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCOMPILATIONMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCOMPILATIONMBEAN)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCOMPILATIONMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/management/MethodInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::HotspotCompilationMBean : public jni::object_base<"sun/management/HotspotCompilationMBean",
	java::lang::Object>
{
public:

	jint getCompilerThreadCount() { return call_method<"getCompilerThreadCount", jint>(); }
	jni::ref<java::util::List> getCompilerThreadStats() { return call_method<"getCompilerThreadStats", jni::ref<java::util::List>>(); }
	jlong getTotalCompileCount() { return call_method<"getTotalCompileCount", jlong>(); }
	jlong getBailoutCompileCount() { return call_method<"getBailoutCompileCount", jlong>(); }
	jlong getInvalidatedCompileCount() { return call_method<"getInvalidatedCompileCount", jlong>(); }
	jni::ref<sun::management::MethodInfo> getLastCompile() { return call_method<"getLastCompile", jni::ref<sun::management::MethodInfo>>(); }
	jni::ref<sun::management::MethodInfo> getFailedCompile() { return call_method<"getFailedCompile", jni::ref<sun::management::MethodInfo>>(); }
	jni::ref<sun::management::MethodInfo> getInvalidatedCompile() { return call_method<"getInvalidatedCompile", jni::ref<sun::management::MethodInfo>>(); }
	jlong getCompiledMethodCodeSize() { return call_method<"getCompiledMethodCodeSize", jlong>(); }
	jlong getCompiledMethodSize() { return call_method<"getCompiledMethodSize", jlong>(); }
	jni::ref<java::util::List> getInternalCompilerCounters() { return call_method<"getInternalCompilerCounters", jni::ref<java::util::List>>(); }

protected:

	HotspotCompilationMBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCOMPILATIONMBEAN
