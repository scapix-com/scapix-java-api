// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/WeakHashMap.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINTROSPECTOR_MBEANINFOMAP_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINTROSPECTOR_MBEANINFOMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MBeanIntrospector_MBeanInfoMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MBeanIntrospector_MBeanInfoMap>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap";
	using base_classes = std::tuple<scapix::java_api::java::util::WeakHashMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINTROSPECTOR_MBEANINFOMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINTROSPECTOR_MBEANINFOMAP)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINTROSPECTOR_MBEANINFOMAP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::MBeanIntrospector_MBeanInfoMap : public jni::object_base<"com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap",
	java::util::WeakHashMap>
{
public:


protected:

	MBeanIntrospector_MBeanInfoMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINTROSPECTOR_MBEANINFOMAP
