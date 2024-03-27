// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_MBEANVISITOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_MBEANVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MBeanAnalyzer_MBeanVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MBeanAnalyzer_MBeanVisitor>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_MBEANVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_MBEANVISITOR)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_MBEANVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::MBeanAnalyzer_MBeanVisitor : public jni::object_base<"com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor",
	java::lang::Object>
{
public:

	void visitAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"visitAttribute", void>(p1, p2, p3); }
	void visitOperation(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitOperation", void>(p1, p2); }

protected:

	MBeanAnalyzer_MBeanVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANANALYZER_MBEANVISITOR
