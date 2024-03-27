// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/MessageDigest.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_RAW_NULLDIGEST20_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_RAW_NULLDIGEST20_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class DSA_Raw_NullDigest20; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::DSA_Raw_NullDigest20>
{
	static constexpr fixed_string class_name = "sun/security/provider/DSA$Raw$NullDigest20";
	using base_classes = std::tuple<scapix::java_api::java::security::MessageDigest>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_RAW_NULLDIGEST20_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_RAW_NULLDIGEST20)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_RAW_NULLDIGEST20

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::DSA_Raw_NullDigest20 : public jni::object_base<"sun/security/provider/DSA$Raw$NullDigest20",
	java::security::MessageDigest>
{
public:


protected:

	DSA_Raw_NullDigest20(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_RAW_NULLDIGEST20