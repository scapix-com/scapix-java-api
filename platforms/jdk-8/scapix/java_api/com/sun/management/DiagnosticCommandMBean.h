// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/DynamicMBean.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_DIAGNOSTICCOMMANDMBEAN_FWD
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_DIAGNOSTICCOMMANDMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::management { class DiagnosticCommandMBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::management::DiagnosticCommandMBean>
{
	static constexpr fixed_string class_name = "com/sun/management/DiagnosticCommandMBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::DynamicMBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_DIAGNOSTICCOMMANDMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_DIAGNOSTICCOMMANDMBEAN)
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_DIAGNOSTICCOMMANDMBEAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::management::DiagnosticCommandMBean : public jni::object_base<"com/sun/management/DiagnosticCommandMBean",
	java::lang::Object,
	javax::management::DynamicMBean>
{
public:


protected:

	DiagnosticCommandMBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_DIAGNOSTICCOMMANDMBEAN
