// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDARGUMENTINFO_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDARGUMENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class DiagnosticCommandArgumentInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::DiagnosticCommandArgumentInfo>
{
	static constexpr fixed_string class_name = "sun/management/DiagnosticCommandArgumentInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDARGUMENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDARGUMENTINFO)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDARGUMENTINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::DiagnosticCommandArgumentInfo : public jni::object_base<"sun/management/DiagnosticCommandArgumentInfo",
	java::lang::Object>
{
public:


protected:

	DiagnosticCommandArgumentInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_DIAGNOSTICCOMMANDARGUMENTINFO