// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_PRIVATEKEYENTRY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_PRIVATEKEYENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class JceKeyStore_PrivateKeyEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::JceKeyStore_PrivateKeyEntry>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/JceKeyStore$PrivateKeyEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_PRIVATEKEYENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_PRIVATEKEYENTRY)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_PRIVATEKEYENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::JceKeyStore_PrivateKeyEntry : public jni::object_base<"com/sun/crypto/provider/JceKeyStore$PrivateKeyEntry",
	java::lang::Object>
{
public:


protected:

	JceKeyStore_PrivateKeyEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_PRIVATEKEYENTRY