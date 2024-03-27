// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/krb5/internal/crypto/DesCbcEType.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESCBCMD5ETYPE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESCBCMD5ETYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto { class DesCbcMd5EType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::DesCbcMd5EType>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/DesCbcMd5EType";
	using base_classes = std::tuple<scapix::java_api::sun::security::krb5::internal::crypto::DesCbcEType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESCBCMD5ETYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESCBCMD5ETYPE)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESCBCMD5ETYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::DesCbcMd5EType : public jni::object_base<"sun/security/krb5/internal/crypto/DesCbcMd5EType",
	sun::security::krb5::internal::crypto::DesCbcEType>
{
public:

	static jni::ref<sun::security::krb5::internal::crypto::DesCbcMd5EType> new_object() { return base_::new_object(); }
	jint eType() { return call_method<"eType", jint>(); }
	jint minimumPadSize() { return call_method<"minimumPadSize", jint>(); }
	jint confounderSize() { return call_method<"confounderSize", jint>(); }
	jint checksumType() { return call_method<"checksumType", jint>(); }
	jint checksumSize() { return call_method<"checksumSize", jint>(); }

protected:

	DesCbcMd5EType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESCBCMD5ETYPE