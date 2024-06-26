// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_NULLCIPHERSPI_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_NULLCIPHERSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class NullCipherSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::NullCipherSpi>
{
	static constexpr fixed_string class_name = "javax/crypto/NullCipherSpi";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_NULLCIPHERSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_NULLCIPHERSPI)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_NULLCIPHERSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::crypto::NullCipherSpi : public jni::object_base<"javax/crypto/NullCipherSpi",
	javax::crypto::CipherSpi>
{
public:

	void engineSetMode(jni::ref<java::lang::String> mode) { return call_method<"engineSetMode", void>(mode); }
	void engineSetPadding(jni::ref<java::lang::String> padding) { return call_method<"engineSetPadding", void>(padding); }

protected:

	NullCipherSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_NULLCIPHERSPI
