// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PBES2Core; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PBES2Core>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PBES2Core";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA512_256AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA512_224AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA512AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA384AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA256AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA224AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA1AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA512_256AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA512_224AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA512AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA384AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA256AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA224AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBES2Core_HmacSHA1AndAES_128.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::PBES2Core : public jni::object_base<"com/sun/crypto/provider/PBES2Core",
	javax::crypto::CipherSpi>
{
public:

	using HmacSHA512_256AndAES_256 = PBES2Core_HmacSHA512_256AndAES_256;
	using HmacSHA512_224AndAES_256 = PBES2Core_HmacSHA512_224AndAES_256;
	using HmacSHA512AndAES_256 = PBES2Core_HmacSHA512AndAES_256;
	using HmacSHA384AndAES_256 = PBES2Core_HmacSHA384AndAES_256;
	using HmacSHA256AndAES_256 = PBES2Core_HmacSHA256AndAES_256;
	using HmacSHA224AndAES_256 = PBES2Core_HmacSHA224AndAES_256;
	using HmacSHA1AndAES_256 = PBES2Core_HmacSHA1AndAES_256;
	using HmacSHA512_256AndAES_128 = PBES2Core_HmacSHA512_256AndAES_128;
	using HmacSHA512_224AndAES_128 = PBES2Core_HmacSHA512_224AndAES_128;
	using HmacSHA512AndAES_128 = PBES2Core_HmacSHA512AndAES_128;
	using HmacSHA384AndAES_128 = PBES2Core_HmacSHA384AndAES_128;
	using HmacSHA256AndAES_128 = PBES2Core_HmacSHA256AndAES_128;
	using HmacSHA224AndAES_128 = PBES2Core_HmacSHA224AndAES_128;
	using HmacSHA1AndAES_128 = PBES2Core_HmacSHA1AndAES_128;


protected:

	PBES2Core(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBES2CORE
