// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCONSTANTS_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class AESConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::AESConstants>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/AESConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCONSTANTS)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::AESConstants : public jni::object_base<"com/sun/crypto/provider/AESConstants",
	java::lang::Object>
{
public:

	static jint AES_BLOCK_SIZE() { return get_static_field<"AES_BLOCK_SIZE", jint>(); }
	static jni::ref<jni::array<jint>> AES_KEYSIZES() { return get_static_field<"AES_KEYSIZES", jni::ref<jni::array<jint>>>(); }


protected:

	AESConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCONSTANTS
