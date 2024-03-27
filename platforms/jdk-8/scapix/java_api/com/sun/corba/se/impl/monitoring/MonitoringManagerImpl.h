// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoringManager.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITORINGMANAGERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITORINGMANAGERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::monitoring { class MonitoringManagerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::monitoring::MonitoringManagerImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/monitoring/MonitoringManagerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::monitoring::MonitoringManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITORINGMANAGERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITORINGMANAGERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITORINGMANAGERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoredObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::monitoring::MonitoringManagerImpl : public jni::object_base<"com/sun/corba/se/impl/monitoring/MonitoringManagerImpl",
	java::lang::Object,
	com::sun::corba::se::spi::monitoring::MonitoringManager>
{
public:

	void clearState() { return call_method<"clearState", void>(); }
	jni::ref<com::sun::corba::se::spi::monitoring::MonitoredObject> getRootMonitoredObject() { return call_method<"getRootMonitoredObject", jni::ref<com::sun::corba::se::spi::monitoring::MonitoredObject>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	MonitoringManagerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITORINGMANAGERIMPL
