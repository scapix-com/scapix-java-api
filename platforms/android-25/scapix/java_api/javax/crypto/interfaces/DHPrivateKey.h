// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/crypto/interfaces/DHKey.h>
#include <scapix/java_api/java/security/PrivateKey.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto::interfaces { class DHPrivateKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::interfaces::DHPrivateKey>
{
	static constexpr fixed_string class_name = "javax/crypto/interfaces/DHPrivateKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::crypto::interfaces::DHKey, scapix::java_api::java::security::PrivateKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::interfaces::DHPrivateKey : public jni::object_base<"javax/crypto/interfaces/DHPrivateKey",
	java::lang::Object,
	javax::crypto::interfaces::DHKey,
	java::security::PrivateKey>
{
public:

	static jlong serialVersionUID() { return get_static_field<"serialVersionUID", jlong>(); }

	jni::ref<java::math::BigInteger> getX() { return call_method<"getX", jni::ref<java::math::BigInteger>>(); }

protected:

	DHPrivateKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY