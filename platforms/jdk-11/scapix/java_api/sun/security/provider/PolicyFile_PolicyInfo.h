// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_POLICYINFO_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_POLICYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class PolicyFile_PolicyInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::PolicyFile_PolicyInfo>
{
	static constexpr fixed_string class_name = "sun/security/provider/PolicyFile$PolicyInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_POLICYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_POLICYINFO)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_POLICYINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::PolicyFile_PolicyInfo : public jni::object_base<"sun/security/provider/PolicyFile$PolicyInfo",
	java::lang::Object>
{
public:


protected:

	PolicyFile_PolicyInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_POLICYINFO
