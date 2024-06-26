// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/TlsPrfGenerator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSPRFGENERATOR_V10_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSPRFGENERATOR_V10_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class TlsPrfGenerator_V10; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::TlsPrfGenerator_V10>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/TlsPrfGenerator$V10";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::TlsPrfGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSPRFGENERATOR_V10_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSPRFGENERATOR_V10)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSPRFGENERATOR_V10

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::TlsPrfGenerator_V10 : public jni::object_base<"com/sun/crypto/provider/TlsPrfGenerator$V10",
	com::sun::crypto::provider::TlsPrfGenerator>
{
public:

	static jni::ref<com::sun::crypto::provider::TlsPrfGenerator_V10> new_object() { return base_::new_object(); }

protected:

	TlsPrfGenerator_V10(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSPRFGENERATOR_V10
