// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLPossession.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPPOSSESSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPPOSSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class NamedGroupPossession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::NamedGroupPossession>
{
	static constexpr fixed_string class_name = "sun/security/ssl/NamedGroupPossession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLPossession>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPPOSSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPPOSSESSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPPOSSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/sun/security/ssl/NamedGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::NamedGroupPossession : public jni::object_base<"sun/security/ssl/NamedGroupPossession",
	java::lang::Object,
	sun::security::ssl::SSLPossession>
{
public:

	jni::ref<sun::security::ssl::NamedGroup> getNamedGroup() { return call_method<"getNamedGroup", jni::ref<sun::security::ssl::NamedGroup>>(); }
	jni::ref<java::security::PublicKey> getPublicKey() { return call_method<"getPublicKey", jni::ref<java::security::PublicKey>>(); }
	jni::ref<java::security::PrivateKey> getPrivateKey() { return call_method<"getPrivateKey", jni::ref<java::security::PrivateKey>>(); }

protected:

	NamedGroupPossession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPPOSSESSION