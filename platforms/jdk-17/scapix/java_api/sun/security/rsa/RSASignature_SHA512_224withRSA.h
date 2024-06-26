// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/rsa/RSASignature.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSASIGNATURE_SHA512_224WITHRSA_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSASIGNATURE_SHA512_224WITHRSA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::rsa { class RSASignature_SHA512_224withRSA; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::rsa::RSASignature_SHA512_224withRSA>
{
	static constexpr fixed_string class_name = "sun/security/rsa/RSASignature$SHA512_224withRSA";
	using base_classes = std::tuple<scapix::java_api::sun::security::rsa::RSASignature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSASIGNATURE_SHA512_224WITHRSA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSASIGNATURE_SHA512_224WITHRSA)
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSASIGNATURE_SHA512_224WITHRSA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::rsa::RSASignature_SHA512_224withRSA : public jni::object_base<"sun/security/rsa/RSASignature$SHA512_224withRSA",
	sun::security::rsa::RSASignature>
{
public:

	static jni::ref<sun::security::rsa::RSASignature_SHA512_224withRSA> new_object() { return base_::new_object(); }

protected:

	RSASignature_SHA512_224withRSA(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSASIGNATURE_SHA512_224WITHRSA
