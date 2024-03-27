// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CONTENTTYPE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CONTENTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ContentType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ContentType>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ContentType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CONTENTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CONTENTTYPE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CONTENTTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ContentType : public jni::object_base<"sun/security/ssl/ContentType",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::ContentType> INVALID() { return get_static_field<"INVALID", jni::ref<sun::security::ssl::ContentType>>(); }
	static jni::ref<sun::security::ssl::ContentType> CHANGE_CIPHER_SPEC() { return get_static_field<"CHANGE_CIPHER_SPEC", jni::ref<sun::security::ssl::ContentType>>(); }
	static jni::ref<sun::security::ssl::ContentType> ALERT() { return get_static_field<"ALERT", jni::ref<sun::security::ssl::ContentType>>(); }
	static jni::ref<sun::security::ssl::ContentType> HANDSHAKE() { return get_static_field<"HANDSHAKE", jni::ref<sun::security::ssl::ContentType>>(); }
	static jni::ref<sun::security::ssl::ContentType> APPLICATION_DATA() { return get_static_field<"APPLICATION_DATA", jni::ref<sun::security::ssl::ContentType>>(); }

	static jni::ref<jni::array<sun::security::ssl::ContentType>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::ContentType>>>(); }
	static jni::ref<sun::security::ssl::ContentType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::ContentType>>(name); }

protected:

	ContentType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CONTENTTYPE