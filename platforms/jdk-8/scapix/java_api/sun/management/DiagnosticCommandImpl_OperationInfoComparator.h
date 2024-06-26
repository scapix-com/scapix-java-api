// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDIMPL_OPERATIONINFOCOMPARATOR_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDIMPL_OPERATIONINFOCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class DiagnosticCommandImpl_OperationInfoComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::DiagnosticCommandImpl_OperationInfoComparator>
{
	static constexpr fixed_string class_name = "sun/management/DiagnosticCommandImpl$OperationInfoComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDIMPL_OPERATIONINFOCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDIMPL_OPERATIONINFOCOMPARATOR)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDIMPL_OPERATIONINFOCOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/MBeanOperationInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::DiagnosticCommandImpl_OperationInfoComparator : public jni::object_base<"sun/management/DiagnosticCommandImpl$OperationInfoComparator",
	java::lang::Object,
	java::util::Comparator>
{
public:

	jint compare(jni::ref<javax::management::MBeanOperationInfo> p1, jni::ref<javax::management::MBeanOperationInfo> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	DiagnosticCommandImpl_OperationInfoComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDIMPL_OPERATIONINFOCOMPARATOR
