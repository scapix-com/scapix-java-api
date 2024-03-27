// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYUSAGEEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYUSAGEEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class KeyUsageExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::KeyUsageExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/KeyUsageExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYUSAGEEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYUSAGEEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYUSAGEEXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/BitArray.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::KeyUsageExtension : public jni::object_base<"sun/security/x509/KeyUsageExtension",
	sun::security::x509::Extension>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGITAL_SIGNATURE() { return get_static_field<"DIGITAL_SIGNATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NON_REPUDIATION() { return get_static_field<"NON_REPUDIATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ENCIPHERMENT() { return get_static_field<"KEY_ENCIPHERMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA_ENCIPHERMENT() { return get_static_field<"DATA_ENCIPHERMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AGREEMENT() { return get_static_field<"KEY_AGREEMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CERTSIGN() { return get_static_field<"KEY_CERTSIGN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CRL_SIGN() { return get_static_field<"CRL_SIGN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENCIPHER_ONLY() { return get_static_field<"ENCIPHER_ONLY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DECIPHER_ONLY() { return get_static_field<"DECIPHER_ONLY", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::KeyUsageExtension> new_object(jni::ref<jni::array<jbyte>> bitString) { return base_::new_object(bitString); }
	static jni::ref<sun::security::x509::KeyUsageExtension> new_object(jni::ref<jni::array<jboolean>> bitString) { return base_::new_object(bitString); }
	static jni::ref<sun::security::x509::KeyUsageExtension> new_object(jni::ref<sun::security::util::BitArray> bitString) { return base_::new_object(bitString); }
	static jni::ref<sun::security::x509::KeyUsageExtension> new_object(jni::ref<java::lang::Boolean> critical, jni::ref<java::lang::Object> value) { return base_::new_object(critical, value); }
	static jni::ref<sun::security::x509::KeyUsageExtension> new_object() { return base_::new_object(); }
	void set(jni::ref<java::lang::String> name, jboolean val) { return call_method<"set", void>(name, val); }
	jboolean get(jni::ref<java::lang::String> name) { return call_method<"get", jboolean>(name); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	jni::ref<jni::array<jboolean>> getBits() { return call_method<"getBits", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	KeyUsageExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_KEYUSAGEEXTENSION
