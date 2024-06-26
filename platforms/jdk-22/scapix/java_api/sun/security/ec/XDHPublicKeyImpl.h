// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/X509Key.h>
#include <scapix/java_api/java/security/interfaces/XECPublicKey.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_XDHPUBLICKEYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_XDHPUBLICKEYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class XDHPublicKeyImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::XDHPublicKeyImpl>
{
	static constexpr fixed_string class_name = "sun/security/ec/XDHPublicKeyImpl";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::X509Key, scapix::java_api::java::security::interfaces::XECPublicKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_XDHPUBLICKEYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_XDHPUBLICKEYIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_XDHPUBLICKEYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::XDHPublicKeyImpl : public jni::object_base<"sun/security/ec/XDHPublicKeyImpl",
	sun::security::x509::X509Key,
	java::security::interfaces::XECPublicKey>
{
public:

	jni::ref<java::math::BigInteger> getU() { return call_method<"getU", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }

protected:

	XDHPublicKeyImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_XDHPUBLICKEYIMPL
