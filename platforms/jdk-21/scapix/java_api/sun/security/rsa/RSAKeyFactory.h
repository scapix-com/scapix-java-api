// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyFactorySpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAKEYFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAKEYFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::rsa { class RSAKeyFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::rsa::RSAKeyFactory>
{
	static constexpr fixed_string class_name = "sun/security/rsa/RSAKeyFactory";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyFactorySpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAKEYFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAKEYFACTORY)
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAKEYFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/interfaces/RSAKey.h>
#include <scapix/java_api/sun/security/rsa/RSAUtil_KeyType.h>
#include <scapix/java_api/sun/security/rsa/RSAKeyFactory_PSS.h>
#include <scapix/java_api/sun/security/rsa/RSAKeyFactory_Legacy.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::rsa::RSAKeyFactory : public jni::object_base<"sun/security/rsa/RSAKeyFactory",
	java::security::KeyFactorySpi>
{
public:

	using PSS = RSAKeyFactory_PSS;
	using Legacy = RSAKeyFactory_Legacy;

	static jint MIN_MODLEN() { return get_static_field<"MIN_MODLEN", jint>(); }
	static jint MAX_MODLEN() { return get_static_field<"MAX_MODLEN", jint>(); }
	static jint MAX_MODLEN_RESTRICT_EXP() { return get_static_field<"MAX_MODLEN_RESTRICT_EXP", jint>(); }
	static jint MAX_RESTRICTED_EXPLEN() { return get_static_field<"MAX_RESTRICTED_EXPLEN", jint>(); }

	static jni::ref<java::security::interfaces::RSAKey> toRSAKey(jni::ref<java::security::Key> key) { return call_static_method<"toRSAKey", jni::ref<java::security::interfaces::RSAKey>>(key); }
	static void checkKeyLengths(jint modulusLen, jni::ref<java::math::BigInteger> exponent, jint minModulusLen, jint maxModulusLen) { return call_static_method<"checkKeyLengths", void>(modulusLen, exponent, minModulusLen, maxModulusLen); }
	static jni::ref<sun::security::rsa::RSAKeyFactory> new_object(jni::ref<sun::security::rsa::RSAUtil_KeyType> type) { return base_::new_object(type); }

protected:

	RSAKeyFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAKEYFACTORY
