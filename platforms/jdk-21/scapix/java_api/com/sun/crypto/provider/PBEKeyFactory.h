// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/SecretKeyFactorySpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PBEKeyFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PBEKeyFactory>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PBEKeyFactory";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::SecretKeyFactorySpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA512_256AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA512_224AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA512AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA384AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA256AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA224AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA1AndAES_256.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA512_256AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA512_224AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA512AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA384AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA256AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA224AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithHmacSHA1AndAES_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithMD5AndTripleDES.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithSHA1AndRC4_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithSHA1AndRC4_40.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithSHA1AndRC2_128.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithSHA1AndRC2_40.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithSHA1AndDESede.h>
#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory_PBEWithMD5AndDES.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::PBEKeyFactory : public jni::object_base<"com/sun/crypto/provider/PBEKeyFactory",
	javax::crypto::SecretKeyFactorySpi>
{
public:

	using PBEWithHmacSHA512_256AndAES_256 = PBEKeyFactory_PBEWithHmacSHA512_256AndAES_256;
	using PBEWithHmacSHA512_224AndAES_256 = PBEKeyFactory_PBEWithHmacSHA512_224AndAES_256;
	using PBEWithHmacSHA512AndAES_256 = PBEKeyFactory_PBEWithHmacSHA512AndAES_256;
	using PBEWithHmacSHA384AndAES_256 = PBEKeyFactory_PBEWithHmacSHA384AndAES_256;
	using PBEWithHmacSHA256AndAES_256 = PBEKeyFactory_PBEWithHmacSHA256AndAES_256;
	using PBEWithHmacSHA224AndAES_256 = PBEKeyFactory_PBEWithHmacSHA224AndAES_256;
	using PBEWithHmacSHA1AndAES_256 = PBEKeyFactory_PBEWithHmacSHA1AndAES_256;
	using PBEWithHmacSHA512_256AndAES_128 = PBEKeyFactory_PBEWithHmacSHA512_256AndAES_128;
	using PBEWithHmacSHA512_224AndAES_128 = PBEKeyFactory_PBEWithHmacSHA512_224AndAES_128;
	using PBEWithHmacSHA512AndAES_128 = PBEKeyFactory_PBEWithHmacSHA512AndAES_128;
	using PBEWithHmacSHA384AndAES_128 = PBEKeyFactory_PBEWithHmacSHA384AndAES_128;
	using PBEWithHmacSHA256AndAES_128 = PBEKeyFactory_PBEWithHmacSHA256AndAES_128;
	using PBEWithHmacSHA224AndAES_128 = PBEKeyFactory_PBEWithHmacSHA224AndAES_128;
	using PBEWithHmacSHA1AndAES_128 = PBEKeyFactory_PBEWithHmacSHA1AndAES_128;
	using PBEWithMD5AndTripleDES = PBEKeyFactory_PBEWithMD5AndTripleDES;
	using PBEWithSHA1AndRC4_128 = PBEKeyFactory_PBEWithSHA1AndRC4_128;
	using PBEWithSHA1AndRC4_40 = PBEKeyFactory_PBEWithSHA1AndRC4_40;
	using PBEWithSHA1AndRC2_128 = PBEKeyFactory_PBEWithSHA1AndRC2_128;
	using PBEWithSHA1AndRC2_40 = PBEKeyFactory_PBEWithSHA1AndRC2_40;
	using PBEWithSHA1AndDESede = PBEKeyFactory_PBEWithSHA1AndDESede;
	using PBEWithMD5AndDES = PBEKeyFactory_PBEWithMD5AndDES;


protected:

	PBEKeyFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY
