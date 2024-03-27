// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCONSTANTS_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class BlowfishConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::BlowfishConstants>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/BlowfishConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCONSTANTS)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::BlowfishConstants : public jni::object_base<"com/sun/crypto/provider/BlowfishConstants",
	java::lang::Object>
{
public:

	static jint BLOWFISH_BLOCK_SIZE() { return get_static_field<"BLOWFISH_BLOCK_SIZE", jint>(); }
	static jint BLOWFISH_MAX_KEYSIZE() { return get_static_field<"BLOWFISH_MAX_KEYSIZE", jint>(); }


protected:

	BlowfishConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCONSTANTS