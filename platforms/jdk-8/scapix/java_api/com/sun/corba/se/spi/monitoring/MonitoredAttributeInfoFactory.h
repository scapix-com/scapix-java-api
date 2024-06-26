// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEINFOFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEINFOFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::monitoring { class MonitoredAttributeInfoFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::monitoring::MonitoredAttributeInfoFactory>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/monitoring/MonitoredAttributeInfoFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEINFOFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEINFOFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEINFOFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoredAttributeInfo.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::monitoring::MonitoredAttributeInfoFactory : public jni::object_base<"com/sun/corba/se/spi/monitoring/MonitoredAttributeInfoFactory",
	java::lang::Object>
{
public:

	jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeInfo> createMonitoredAttributeInfo(jni::ref<java::lang::String> p1, jni::ref<java::lang::Class> p2, jboolean p3, jboolean p4) { return call_method<"createMonitoredAttributeInfo", jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeInfo>>(p1, p2, p3, p4); }

protected:

	MonitoredAttributeInfoFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEINFOFACTORY
