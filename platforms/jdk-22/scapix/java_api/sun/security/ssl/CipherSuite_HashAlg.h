// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERSUITE_HASHALG_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERSUITE_HASHALG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class CipherSuite_HashAlg; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::CipherSuite_HashAlg>
{
	static constexpr fixed_string class_name = "sun/security/ssl/CipherSuite$HashAlg";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERSUITE_HASHALG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERSUITE_HASHALG)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERSUITE_HASHALG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::CipherSuite_HashAlg : public jni::object_base<"sun/security/ssl/CipherSuite$HashAlg",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::CipherSuite_HashAlg> H_NONE() { return get_static_field<"H_NONE", jni::ref<sun::security::ssl::CipherSuite_HashAlg>>(); }
	static jni::ref<sun::security::ssl::CipherSuite_HashAlg> H_SHA256() { return get_static_field<"H_SHA256", jni::ref<sun::security::ssl::CipherSuite_HashAlg>>(); }
	static jni::ref<sun::security::ssl::CipherSuite_HashAlg> H_SHA384() { return get_static_field<"H_SHA384", jni::ref<sun::security::ssl::CipherSuite_HashAlg>>(); }

	static jni::ref<jni::array<sun::security::ssl::CipherSuite_HashAlg>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::CipherSuite_HashAlg>>>(); }
	static jni::ref<sun::security::ssl::CipherSuite_HashAlg> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::CipherSuite_HashAlg>>(name); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CipherSuite_HashAlg(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERSUITE_HASHALG
