// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/LazyCompositeData.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_MEMORYNOTIFINFOCOMPOSITEDATA_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MEMORYNOTIFINFOCOMPOSITEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class MemoryNotifInfoCompositeData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::MemoryNotifInfoCompositeData>
{
	static constexpr fixed_string class_name = "sun/management/MemoryNotifInfoCompositeData";
	using base_classes = std::tuple<scapix::java_api::sun::management::LazyCompositeData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MEMORYNOTIFINFOCOMPOSITEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_MEMORYNOTIFINFOCOMPOSITEDATA)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MEMORYNOTIFINFOCOMPOSITEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/management/MemoryNotificationInfo.h>
#include <scapix/java_api/java/lang/management/MemoryUsage.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::MemoryNotifInfoCompositeData : public jni::object_base<"sun/management/MemoryNotifInfoCompositeData",
	sun::management::LazyCompositeData>
{
public:

	jni::ref<java::lang::management::MemoryNotificationInfo> getMemoryNotifInfo() { return call_method<"getMemoryNotifInfo", jni::ref<java::lang::management::MemoryNotificationInfo>>(); }
	static jni::ref<javax::management::openmbean::CompositeData> toCompositeData(jni::ref<java::lang::management::MemoryNotificationInfo> p1) { return call_static_method<"toCompositeData", jni::ref<javax::management::openmbean::CompositeData>>(p1); }
	static jni::ref<java::lang::String> getPoolName(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getPoolName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::management::MemoryUsage> getUsage(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getUsage", jni::ref<java::lang::management::MemoryUsage>>(p1); }
	static jlong getCount(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getCount", jlong>(p1); }
	static void validateCompositeData(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"validateCompositeData", void>(p1); }

protected:

	MemoryNotifInfoCompositeData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MEMORYNOTIFINFOCOMPOSITEDATA