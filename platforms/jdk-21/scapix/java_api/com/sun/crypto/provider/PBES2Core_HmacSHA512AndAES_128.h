// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/PBES2Core.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_HMACSHA512ANDAES_128_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_HMACSHA512ANDAES_128_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PBES2Core_HmacSHA512AndAES_128; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PBES2Core_HmacSHA512AndAES_128>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PBES2Core$HmacSHA512AndAES_128";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::PBES2Core>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_HMACSHA512ANDAES_128_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_HMACSHA512ANDAES_128)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_HMACSHA512ANDAES_128

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::PBES2Core_HmacSHA512AndAES_128 : public jni::object_base<"com/sun/crypto/provider/PBES2Core$HmacSHA512AndAES_128",
	com::sun::crypto::provider::PBES2Core>
{
public:

	static jni::ref<com::sun::crypto::provider::PBES2Core_HmacSHA512AndAES_128> new_object() { return base_::new_object(); }

protected:

	PBES2Core_HmacSHA512AndAES_128(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_HMACSHA512ANDAES_128
