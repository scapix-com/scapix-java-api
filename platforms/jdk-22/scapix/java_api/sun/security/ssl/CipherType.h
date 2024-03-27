// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERTYPE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class CipherType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::CipherType>
{
	static constexpr fixed_string class_name = "sun/security/ssl/CipherType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERTYPE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::CipherType : public jni::object_base<"sun/security/ssl/CipherType",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::CipherType> NULL_CIPHER() { return get_static_field<"NULL_CIPHER", jni::ref<sun::security::ssl::CipherType>>(); }
	static jni::ref<sun::security::ssl::CipherType> STREAM_CIPHER() { return get_static_field<"STREAM_CIPHER", jni::ref<sun::security::ssl::CipherType>>(); }
	static jni::ref<sun::security::ssl::CipherType> BLOCK_CIPHER() { return get_static_field<"BLOCK_CIPHER", jni::ref<sun::security::ssl::CipherType>>(); }
	static jni::ref<sun::security::ssl::CipherType> AEAD_CIPHER() { return get_static_field<"AEAD_CIPHER", jni::ref<sun::security::ssl::CipherType>>(); }

	static jni::ref<jni::array<sun::security::ssl::CipherType>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::CipherType>>>(); }
	static jni::ref<sun::security::ssl::CipherType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::CipherType>>(name); }

protected:

	CipherType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CIPHERTYPE
