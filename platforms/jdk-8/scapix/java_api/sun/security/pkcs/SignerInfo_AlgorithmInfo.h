// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS_SIGNERINFO_ALGORITHMINFO_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_SIGNERINFO_ALGORITHMINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs { class SignerInfo_AlgorithmInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs::SignerInfo_AlgorithmInfo>
{
	static constexpr fixed_string class_name = "sun/security/pkcs/SignerInfo$AlgorithmInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_SIGNERINFO_ALGORITHMINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS_SIGNERINFO_ALGORITHMINFO)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_SIGNERINFO_ALGORITHMINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/pkcs/SignerInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::pkcs::SignerInfo_AlgorithmInfo : public jni::object_base<"sun/security/pkcs/SignerInfo$AlgorithmInfo",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::pkcs::SignerInfo_AlgorithmInfo> new_object(jni::ref<sun::security::pkcs::SignerInfo> p1, jni::ref<java::lang::String> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }

protected:

	SignerInfo_AlgorithmInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_SIGNERINFO_ALGORITHMINFO
