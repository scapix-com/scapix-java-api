// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIX_VALIDATORPARAMS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIX_VALIDATORPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class PKIX_ValidatorParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::PKIX_ValidatorParams>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/PKIX$ValidatorParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIX_VALIDATORPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIX_VALIDATORPARAMS)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIX_VALIDATORPARAMS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::certpath::PKIX_ValidatorParams : public jni::object_base<"sun/security/provider/certpath/PKIX$ValidatorParams",
	java::lang::Object>
{
public:


protected:

	PKIX_ValidatorParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIX_VALIDATORPARAMS
