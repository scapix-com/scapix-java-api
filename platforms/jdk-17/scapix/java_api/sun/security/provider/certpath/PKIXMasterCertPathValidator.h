// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXMASTERCERTPATHVALIDATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXMASTERCERTPATHVALIDATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class PKIXMasterCertPathValidator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::PKIXMasterCertPathValidator>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/PKIXMasterCertPathValidator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXMASTERCERTPATHVALIDATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXMASTERCERTPATHVALIDATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXMASTERCERTPATHVALIDATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::certpath::PKIXMasterCertPathValidator : public jni::object_base<"sun/security/provider/certpath/PKIXMasterCertPathValidator",
	java::lang::Object>
{
public:


protected:

	PKIXMasterCertPathValidator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXMASTERCERTPATHVALIDATOR