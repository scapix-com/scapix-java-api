// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_PROVIDERVERIFIER_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_PROVIDERVERIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class ProviderVerifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::ProviderVerifier>
{
	static constexpr fixed_string class_name = "javax/crypto/ProviderVerifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_PROVIDERVERIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_PROVIDERVERIFIER)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_PROVIDERVERIFIER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::crypto::ProviderVerifier : public jni::object_base<"javax/crypto/ProviderVerifier",
	java::lang::Object>
{
public:


protected:

	ProviderVerifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_PROVIDERVERIFIER
