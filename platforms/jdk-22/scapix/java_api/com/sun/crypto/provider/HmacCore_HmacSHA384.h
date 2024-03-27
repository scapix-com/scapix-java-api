// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/HmacCore.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACCORE_HMACSHA384_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACCORE_HMACSHA384_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class HmacCore_HmacSHA384; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::HmacCore_HmacSHA384>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/HmacCore$HmacSHA384";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::HmacCore>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACCORE_HMACSHA384_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACCORE_HMACSHA384)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACCORE_HMACSHA384

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::HmacCore_HmacSHA384 : public jni::object_base<"com/sun/crypto/provider/HmacCore$HmacSHA384",
	com::sun::crypto::provider::HmacCore>
{
public:

	static jni::ref<com::sun::crypto::provider::HmacCore_HmacSHA384> new_object() { return base_::new_object(); }

protected:

	HmacCore_HmacSHA384(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACCORE_HMACSHA384
