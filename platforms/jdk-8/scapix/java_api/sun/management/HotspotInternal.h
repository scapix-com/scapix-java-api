// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/HotspotInternalMBean.h>
#include <scapix/java_api/javax/management/MBeanRegistration.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTINTERNAL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTINTERNAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class HotspotInternal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::HotspotInternal>
{
	static constexpr fixed_string class_name = "sun/management/HotspotInternal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::HotspotInternalMBean, scapix::java_api::javax::management::MBeanRegistration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTINTERNAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTINTERNAL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTINTERNAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::HotspotInternal : public jni::object_base<"sun/management/HotspotInternal",
	java::lang::Object,
	sun::management::HotspotInternalMBean,
	javax::management::MBeanRegistration>
{
public:

	static jni::ref<sun::management::HotspotInternal> new_object() { return base_::new_object(); }
	jni::ref<javax::management::ObjectName> preRegister(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"preRegister", jni::ref<javax::management::ObjectName>>(p1, p2); }
	void postRegister(jni::ref<java::lang::Boolean> p1) { return call_method<"postRegister", void>(p1); }
	void preDeregister() { return call_method<"preDeregister", void>(); }
	void postDeregister() { return call_method<"postDeregister", void>(); }

protected:

	HotspotInternal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTINTERNAL
