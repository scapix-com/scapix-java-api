// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoredAttributeInfoFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITOREDATTRIBUTEINFOFACTORYIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITOREDATTRIBUTEINFOFACTORYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::monitoring { class MonitoredAttributeInfoFactoryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::monitoring::MonitoredAttributeInfoFactoryImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/monitoring/MonitoredAttributeInfoFactoryImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::monitoring::MonitoredAttributeInfoFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITOREDATTRIBUTEINFOFACTORYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITOREDATTRIBUTEINFOFACTORYIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITOREDATTRIBUTEINFOFACTORYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/monitoring/MonitoredAttributeInfo.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::monitoring::MonitoredAttributeInfoFactoryImpl : public jni::object_base<"com/sun/corba/se/impl/monitoring/MonitoredAttributeInfoFactoryImpl",
	java::lang::Object,
	com::sun::corba::se::spi::monitoring::MonitoredAttributeInfoFactory>
{
public:

	static jni::ref<com::sun::corba::se::impl::monitoring::MonitoredAttributeInfoFactoryImpl> new_object() { return base_::new_object(); }
	jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeInfo> createMonitoredAttributeInfo(jni::ref<java::lang::String> p1, jni::ref<java::lang::Class> p2, jboolean p3, jboolean p4) { return call_method<"createMonitoredAttributeInfo", jni::ref<com::sun::corba::se::spi::monitoring::MonitoredAttributeInfo>>(p1, p2, p3, p4); }

protected:

	MonitoredAttributeInfoFactoryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_MONITORING_MONITOREDATTRIBUTEINFOFACTORYIMPL