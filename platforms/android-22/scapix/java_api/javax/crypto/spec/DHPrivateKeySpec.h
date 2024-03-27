// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto::spec { class DHPrivateKeySpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::spec::DHPrivateKeySpec>
{
	static constexpr fixed_string class_name = "javax/crypto/spec/DHPrivateKeySpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::KeySpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::spec::DHPrivateKeySpec : public jni::object_base<"javax/crypto/spec/DHPrivateKeySpec",
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static jni::ref<javax::crypto::spec::DHPrivateKeySpec> new_object(jni::ref<java::math::BigInteger> x, jni::ref<java::math::BigInteger> p, jni::ref<java::math::BigInteger> g) { return base_::new_object(x, p, g); }
	jni::ref<java::math::BigInteger> getX() { return call_method<"getX", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getP() { return call_method<"getP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getG() { return call_method<"getG", jni::ref<java::math::BigInteger>>(); }

protected:

	DHPrivateKeySpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC