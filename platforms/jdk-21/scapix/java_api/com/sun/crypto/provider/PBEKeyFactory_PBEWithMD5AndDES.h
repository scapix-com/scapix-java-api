// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/PBEKeyFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_PBEWITHMD5ANDDES_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_PBEWITHMD5ANDDES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PBEKeyFactory_PBEWithMD5AndDES; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PBEKeyFactory_PBEWithMD5AndDES>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PBEKeyFactory$PBEWithMD5AndDES";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::PBEKeyFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_PBEWITHMD5ANDDES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_PBEWITHMD5ANDDES)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_PBEWITHMD5ANDDES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::PBEKeyFactory_PBEWithMD5AndDES : public jni::object_base<"com/sun/crypto/provider/PBEKeyFactory$PBEWithMD5AndDES",
	com::sun::crypto::provider::PBEKeyFactory>
{
public:

	static jni::ref<com::sun::crypto::provider::PBEKeyFactory_PBEWithMD5AndDES> new_object() { return base_::new_object(); }

protected:

	PBEKeyFactory_PBEWithMD5AndDES(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEKEYFACTORY_PBEWITHMD5ANDDES
