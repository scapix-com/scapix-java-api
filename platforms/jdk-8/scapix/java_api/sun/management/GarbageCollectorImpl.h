// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/MemoryManagerImpl.h>
#include <scapix/java_api/com/sun/management/GarbageCollectorMXBean.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTORIMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class GarbageCollectorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::GarbageCollectorImpl>
{
	static constexpr fixed_string class_name = "sun/management/GarbageCollectorImpl";
	using base_classes = std::tuple<scapix::java_api::sun::management::MemoryManagerImpl, scapix::java_api::com::sun::management::GarbageCollectorMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTORIMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/management/GcInfo.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/MBeanNotificationInfo.h>
#include <scapix/java_api/javax/management/NotificationFilter.h>
#include <scapix/java_api/javax/management/NotificationListener.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::GarbageCollectorImpl : public jni::object_base<"sun/management/GarbageCollectorImpl",
	sun::management::MemoryManagerImpl,
	com::sun::management::GarbageCollectorMXBean>
{
public:

	jlong getCollectionCount() { return call_method<"getCollectionCount", jlong>(); }
	jlong getCollectionTime() { return call_method<"getCollectionTime", jlong>(); }
	jni::ref<com::sun::management::GcInfo> getLastGcInfo() { return call_method<"getLastGcInfo", jni::ref<com::sun::management::GcInfo>>(); }
	jni::ref<jni::array<javax::management::MBeanNotificationInfo>> getNotificationInfo() { return call_method<"getNotificationInfo", jni::ref<jni::array<javax::management::MBeanNotificationInfo>>>(); }
	void addNotificationListener(jni::ref<javax::management::NotificationListener> p1, jni::ref<javax::management::NotificationFilter> p2, jni::ref<java::lang::Object> p3) { return call_method<"addNotificationListener", void>(p1, p2, p3); }
	void removeNotificationListener(jni::ref<javax::management::NotificationListener> p1) { return call_method<"removeNotificationListener", void>(p1); }
	void removeNotificationListener(jni::ref<javax::management::NotificationListener> p1, jni::ref<javax::management::NotificationFilter> p2, jni::ref<java::lang::Object> p3) { return call_method<"removeNotificationListener", void>(p1, p2, p3); }
	jni::ref<javax::management::ObjectName> getObjectName() { return call_method<"getObjectName", jni::ref<javax::management::ObjectName>>(); }

protected:

	GarbageCollectorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_GARBAGECOLLECTORIMPL
