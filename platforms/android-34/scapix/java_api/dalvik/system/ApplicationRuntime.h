// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_DALVIK_SYSTEM_APPLICATIONRUNTIME_FWD
#define SCAPIX_JAVA_API_DALVIK_SYSTEM_APPLICATIONRUNTIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::dalvik::system { class ApplicationRuntime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::dalvik::system::ApplicationRuntime>
{
	static constexpr fixed_string class_name = "dalvik/system/ApplicationRuntime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_SYSTEM_APPLICATIONRUNTIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_DALVIK_SYSTEM_APPLICATIONRUNTIME)
#define SCAPIX_JAVA_API_DALVIK_SYSTEM_APPLICATIONRUNTIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/dalvik/system/DexFile_OptimizationInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class dalvik::system::ApplicationRuntime : public jni::object_base<"dalvik/system/ApplicationRuntime",
	java::lang::Object>
{
public:

	static jni::ref<dalvik::system::DexFile_OptimizationInfo> getBaseApkOptimizationInfo() { return call_static_method<"getBaseApkOptimizationInfo", jni::ref<dalvik::system::DexFile_OptimizationInfo>>(); }

protected:

	ApplicationRuntime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_SYSTEM_APPLICATIONRUNTIME
