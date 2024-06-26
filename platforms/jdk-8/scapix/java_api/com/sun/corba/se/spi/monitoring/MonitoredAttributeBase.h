// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoredAttribute.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::monitoring { class MonitoredAttributeBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::monitoring::MonitoredAttributeBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/monitoring/MonitoredAttributeBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::monitoring::MonitoredAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoredAttributeInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::monitoring::MonitoredAttributeBase : public jni::object_base<"com/sun/corba/se/spi/monitoring/MonitoredAttributeBase",
	java::lang::Object,
	com::sun::corba::se::spi::monitoring::MonitoredAttribute>
{
public:

	static jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeBase> new_object(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeInfo> p2) { return base_::new_object(p1, p2); }
	void clearState() { return call_method<"clearState", void>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	void setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", void>(p1); }
	jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeInfo> getAttributeInfo() { return call_method<"getAttributeInfo", jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeInfo>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	MonitoredAttributeBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_MONITOREDATTRIBUTEBASE
