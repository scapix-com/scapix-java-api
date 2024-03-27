// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/NamedGroup_NamedGroupScheme.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FFDHESCHEME_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FFDHESCHEME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class NamedGroup_FFDHEScheme; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::NamedGroup_FFDHEScheme>
{
	static constexpr fixed_string class_name = "sun/security/ssl/NamedGroup$FFDHEScheme";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::NamedGroup_NamedGroupScheme>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FFDHESCHEME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FFDHESCHEME)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FFDHESCHEME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/NamedGroup.h>
#include <scapix/java_api/sun/security/ssl/NamedGroupPossession.h>
#include <scapix/java_api/sun/security/ssl/SSLCredentials.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivation.h>
#include <scapix/java_api/sun/security/ssl/SSLPossession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::NamedGroup_FFDHEScheme : public jni::object_base<"sun/security/ssl/NamedGroup$FFDHEScheme",
	java::lang::Object,
	sun::security::ssl::NamedGroup_NamedGroupScheme>
{
public:

	jni::ref<jni::array<jbyte>> encodePossessionPublicKey(jni::ref<sun::security::ssl::NamedGroupPossession> namedGroupPossession) { return call_method<"encodePossessionPublicKey", jni::ref<jni::array<jbyte>>>(namedGroupPossession); }
	jni::ref<sun::security::ssl::SSLCredentials> decodeCredentials(jni::ref<sun::security::ssl::NamedGroup> ng, jni::ref<jni::array<jbyte>> encoded) { return call_method<"decodeCredentials", jni::ref<sun::security::ssl::SSLCredentials>>(ng, encoded); }
	jni::ref<sun::security::ssl::SSLPossession> createPossession(jni::ref<sun::security::ssl::NamedGroup> ng, jni::ref<java::security::SecureRandom> random) { return call_method<"createPossession", jni::ref<sun::security::ssl::SSLPossession>>(ng, random); }
	jni::ref<sun::security::ssl::SSLKeyDerivation> createKeyDerivation(jni::ref<sun::security::ssl::HandshakeContext> hc) { return call_method<"createKeyDerivation", jni::ref<sun::security::ssl::SSLKeyDerivation>>(hc); }

protected:

	NamedGroup_FFDHEScheme(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUP_FFDHESCHEME
