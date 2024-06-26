// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHERSPI_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHERSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class CipherSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::CipherSpi>
{
	static constexpr fixed_string class_name = "javax/crypto/CipherSpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHERSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHERSPI)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHERSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::CipherSpi : public jni::object_base<"javax/crypto/CipherSpi",
	java::lang::Object>
{
public:

	static jni::ref<javax::crypto::CipherSpi> new_object() { return base_::new_object(); }

protected:

	CipherSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHERSPI
