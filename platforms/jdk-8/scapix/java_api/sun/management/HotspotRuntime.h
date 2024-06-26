// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/HotspotRuntimeMBean.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTRUNTIME_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTRUNTIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class HotspotRuntime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::HotspotRuntime>
{
	static constexpr fixed_string class_name = "sun/management/HotspotRuntime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::HotspotRuntimeMBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTRUNTIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTRUNTIME)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTRUNTIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::HotspotRuntime : public jni::object_base<"sun/management/HotspotRuntime",
	java::lang::Object,
	sun::management::HotspotRuntimeMBean>
{
public:

	jlong getSafepointCount() { return call_method<"getSafepointCount", jlong>(); }
	jlong getTotalSafepointTime() { return call_method<"getTotalSafepointTime", jlong>(); }
	jlong getSafepointSyncTime() { return call_method<"getSafepointSyncTime", jlong>(); }
	jni::ref<java::util::List> getInternalRuntimeCounters() { return call_method<"getInternalRuntimeCounters", jni::ref<java::util::List>>(); }

protected:

	HotspotRuntime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTRUNTIME
