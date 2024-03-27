// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/PBMAC1Core.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBMAC1CORE_HMACSHA1_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBMAC1CORE_HMACSHA1_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PBMAC1Core_HmacSHA1; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PBMAC1Core_HmacSHA1>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PBMAC1Core$HmacSHA1";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::PBMAC1Core>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBMAC1CORE_HMACSHA1_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBMAC1CORE_HMACSHA1)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBMAC1CORE_HMACSHA1

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::PBMAC1Core_HmacSHA1 : public jni::object_base<"com/sun/crypto/provider/PBMAC1Core$HmacSHA1",
	com::sun::crypto::provider::PBMAC1Core>
{
public:

	static jni::ref<com::sun::crypto::provider::PBMAC1Core_HmacSHA1> new_object() { return base_::new_object(); }

protected:

	PBMAC1Core_HmacSHA1(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBMAC1CORE_HMACSHA1