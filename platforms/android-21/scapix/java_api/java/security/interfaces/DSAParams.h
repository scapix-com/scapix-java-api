// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAPARAMS_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::interfaces { class DSAParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::interfaces::DSAParams>
{
	static constexpr fixed_string class_name = "java/security/interfaces/DSAParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAPARAMS)
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::interfaces::DSAParams : public jni::object_base<"java/security/interfaces/DSAParams",
	java::lang::Object>
{
public:

	jni::ref<java::math::BigInteger> getG() { return call_method<"getG", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getP() { return call_method<"getP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getQ() { return call_method<"getQ", jni::ref<java::math::BigInteger>>(); }

protected:

	DSAParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_DSAPARAMS