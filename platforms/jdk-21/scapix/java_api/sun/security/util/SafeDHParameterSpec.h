// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/spec/DHParameterSpec.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SAFEDHPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SAFEDHPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class SafeDHParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::SafeDHParameterSpec>
{
	static constexpr fixed_string class_name = "sun/security/util/SafeDHParameterSpec";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::spec::DHParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SAFEDHPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SAFEDHPARAMETERSPEC)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SAFEDHPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::SafeDHParameterSpec : public jni::object_base<"sun/security/util/SafeDHParameterSpec",
	javax::crypto::spec::DHParameterSpec>
{
public:

	static jni::ref<sun::security::util::SafeDHParameterSpec> new_object(jni::ref<java::math::BigInteger> p, jni::ref<java::math::BigInteger> g) { return base_::new_object(p, g); }
	static jni::ref<sun::security::util::SafeDHParameterSpec> new_object(jni::ref<java::math::BigInteger> p, jni::ref<java::math::BigInteger> g, jint l) { return base_::new_object(p, g, l); }

protected:

	SafeDHParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SAFEDHPARAMETERSPEC