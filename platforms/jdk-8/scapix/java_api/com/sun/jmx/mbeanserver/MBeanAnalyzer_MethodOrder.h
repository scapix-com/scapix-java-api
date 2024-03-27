// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_METHODORDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_METHODORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MBeanAnalyzer_MethodOrder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MBeanAnalyzer_MethodOrder>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MBeanAnalyzer$MethodOrder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_METHODORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_METHODORDER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_METHODORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/reflect/Method.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::MBeanAnalyzer_MethodOrder : public jni::object_base<"com/sun/jmx/mbeanserver/MBeanAnalyzer$MethodOrder",
	java::lang::Object,
	java::util::Comparator>
{
public:

	static jni::ref<com::sun::jmx::mbeanserver::MBeanAnalyzer_MethodOrder> instance() { return get_static_field<"instance", jni::ref<com::sun::jmx::mbeanserver::MBeanAnalyzer_MethodOrder>>(); }

	jint compare(jni::ref<java::lang::reflect::Method> p1, jni::ref<java::lang::reflect::Method> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	MBeanAnalyzer_MethodOrder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_METHODORDER