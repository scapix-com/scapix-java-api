// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_RUNTIME_RUNTIMEUTIL_FWD
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_RUNTIMEUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::runtime { class RuntimeUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::runtime::RuntimeUtil>
{
	static constexpr fixed_string class_name = "sun/rmi/runtime/RuntimeUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_RUNTIMEUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_RUNTIME_RUNTIMEUTIL)
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_RUNTIMEUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <scapix/java_api/sun/rmi/runtime/RuntimeUtil_GetInstanceAction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::runtime::RuntimeUtil : public jni::object_base<"sun/rmi/runtime/RuntimeUtil",
	java::lang::Object>
{
public:

	using GetInstanceAction = RuntimeUtil_GetInstanceAction;

	jni::ref<java::util::concurrent::ScheduledThreadPoolExecutor> getScheduler() { return call_method<"getScheduler", jni::ref<java::util::concurrent::ScheduledThreadPoolExecutor>>(); }

protected:

	RuntimeUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_RUNTIMEUTIL
