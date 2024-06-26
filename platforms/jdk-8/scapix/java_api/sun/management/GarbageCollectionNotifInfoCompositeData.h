// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/LazyCompositeData.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTIONNOTIFINFOCOMPOSITEDATA_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTIONNOTIFINFOCOMPOSITEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class GarbageCollectionNotifInfoCompositeData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::GarbageCollectionNotifInfoCompositeData>
{
	static constexpr fixed_string class_name = "sun/management/GarbageCollectionNotifInfoCompositeData";
	using base_classes = std::tuple<scapix::java_api::sun::management::LazyCompositeData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTIONNOTIFINFOCOMPOSITEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTIONNOTIFINFOCOMPOSITEDATA)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTIONNOTIFINFOCOMPOSITEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/management/GarbageCollectionNotificationInfo.h>
#include <scapix/java_api/com/sun/management/GcInfo.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::GarbageCollectionNotifInfoCompositeData : public jni::object_base<"sun/management/GarbageCollectionNotifInfoCompositeData",
	sun::management::LazyCompositeData>
{
public:

	static jni::ref<sun::management::GarbageCollectionNotifInfoCompositeData> new_object(jni::ref<com::sun::management::GarbageCollectionNotificationInfo> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::management::GarbageCollectionNotificationInfo> getGarbageCollectionNotifInfo() { return call_method<"getGarbageCollectionNotifInfo", jni::ref<com::sun::management::GarbageCollectionNotificationInfo>>(); }
	static jni::ref<javax::management::openmbean::CompositeData> toCompositeData(jni::ref<com::sun::management::GarbageCollectionNotificationInfo> p1) { return call_static_method<"toCompositeData", jni::ref<javax::management::openmbean::CompositeData>>(p1); }
	static jni::ref<java::lang::String> getGcName(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getGcName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getGcAction(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getGcAction", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getGcCause(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getGcCause", jni::ref<java::lang::String>>(p1); }
	static jni::ref<com::sun::management::GcInfo> getGcInfo(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getGcInfo", jni::ref<com::sun::management::GcInfo>>(p1); }
	static void validateCompositeData(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"validateCompositeData", void>(p1); }

protected:

	GarbageCollectionNotifInfoCompositeData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTIONNOTIFINFOCOMPOSITEDATA
