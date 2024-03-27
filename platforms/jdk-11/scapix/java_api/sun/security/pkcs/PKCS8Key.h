// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivateKey.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS8KEY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS8KEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs { class PKCS8Key; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs::PKCS8Key>
{
	static constexpr fixed_string class_name = "sun/security/pkcs/PKCS8Key";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivateKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS8KEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS8KEY)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS8KEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/x509/AlgorithmId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::pkcs::PKCS8Key : public jni::object_base<"sun/security/pkcs/PKCS8Key",
	java::lang::Object,
	java::security::PrivateKey>
{
public:

	static jni::ref<java::math::BigInteger> version() { return get_static_field<"version", jni::ref<java::math::BigInteger>>(); }

	static jni::ref<sun::security::pkcs::PKCS8Key> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::pkcs::PKCS8Key> parse(jni::ref<sun::security::util::DerValue> in) { return call_static_method<"parse", jni::ref<sun::security::pkcs::PKCS8Key>>(in); }
	static jni::ref<java::security::PrivateKey> parseKey(jni::ref<sun::security::util::DerValue> in) { return call_static_method<"parseKey", jni::ref<java::security::PrivateKey>>(in); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<sun::security::x509::AlgorithmId> getAlgorithmId() { return call_method<"getAlgorithmId", jni::ref<sun::security::x509::AlgorithmId>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> encode() { return call_method<"encode", jni::ref<jni::array<jbyte>>>(); }
	void decode(jni::ref<java::io::InputStream> in) { return call_method<"decode", void>(in); }
	void decode(jni::ref<jni::array<jbyte>> encodedKey) { return call_method<"decode", void>(encodedKey); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	PKCS8Key(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS8KEY
