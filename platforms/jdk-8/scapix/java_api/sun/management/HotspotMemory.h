// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/HotspotMemoryMBean.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTMEMORY_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTMEMORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class HotspotMemory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::HotspotMemory>
{
	static constexpr fixed_string class_name = "sun/management/HotspotMemory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::HotspotMemoryMBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTMEMORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTMEMORY)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTMEMORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::HotspotMemory : public jni::object_base<"sun/management/HotspotMemory",
	java::lang::Object,
	sun::management::HotspotMemoryMBean>
{
public:

	jni::ref<java::util::List> getInternalMemoryCounters() { return call_method<"getInternalMemoryCounters", jni::ref<java::util::List>>(); }

protected:

	HotspotMemory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTMEMORY