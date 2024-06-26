// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/DSAPublicKey.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAPUBLICKEYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAPUBLICKEYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class DSAPublicKeyImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::DSAPublicKeyImpl>
{
	static constexpr fixed_string class_name = "sun/security/provider/DSAPublicKeyImpl";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::DSAPublicKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAPUBLICKEYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAPUBLICKEYIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAPUBLICKEYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::DSAPublicKeyImpl : public jni::object_base<"sun/security/provider/DSAPublicKeyImpl",
	sun::security::provider::DSAPublicKey>
{
public:

	static jni::ref<sun::security::provider::DSAPublicKeyImpl> new_object(jni::ref<java::math::BigInteger> p1, jni::ref<java::math::BigInteger> p2, jni::ref<java::math::BigInteger> p3, jni::ref<java::math::BigInteger> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<sun::security::provider::DSAPublicKeyImpl> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }

protected:

	DSAPublicKeyImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAPUBLICKEYIMPL
