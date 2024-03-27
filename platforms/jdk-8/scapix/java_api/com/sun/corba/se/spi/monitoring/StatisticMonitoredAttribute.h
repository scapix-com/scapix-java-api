// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoredAttributeBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_STATISTICMONITOREDATTRIBUTE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_STATISTICMONITOREDATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::monitoring { class StatisticMonitoredAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::monitoring::StatisticMonitoredAttribute>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/monitoring/StatisticMonitoredAttribute";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::monitoring::MonitoredAttributeBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_STATISTICMONITOREDATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_STATISTICMONITOREDATTRIBUTE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_STATISTICMONITOREDATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/StatisticsAccumulator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::monitoring::StatisticMonitoredAttribute : public jni::object_base<"com/sun/corba/se/spi/monitoring/StatisticMonitoredAttribute",
	com::sun::corba::se::spi::monitoring::MonitoredAttributeBase>
{
public:

	static jni::ref<com::sun::corba::se::spi::monitoring::StatisticMonitoredAttribute> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::corba::se::spi::monitoring::StatisticsAccumulator> p3, jni::ref<java::lang::Object> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	void clearState() { return call_method<"clearState", void>(); }
	jni::ref<com::sun::corba::se::spi::monitoring::StatisticsAccumulator> getStatisticsAccumulator() { return call_method<"getStatisticsAccumulator", jni::ref<com::sun::corba::se::spi::monitoring::StatisticsAccumulator>>(); }

protected:

	StatisticMonitoredAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_MONITORING_STATISTICMONITOREDATTRIBUTE
