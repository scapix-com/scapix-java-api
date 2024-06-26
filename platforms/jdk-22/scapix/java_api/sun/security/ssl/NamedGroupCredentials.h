// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLCredentials.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPCREDENTIALS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPCREDENTIALS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class NamedGroupCredentials; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::NamedGroupCredentials>
{
	static constexpr fixed_string class_name = "sun/security/ssl/NamedGroupCredentials";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLCredentials>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPCREDENTIALS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPCREDENTIALS)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPCREDENTIALS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/sun/security/ssl/NamedGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::NamedGroupCredentials : public jni::object_base<"sun/security/ssl/NamedGroupCredentials",
	java::lang::Object,
	sun::security::ssl::SSLCredentials>
{
public:

	jni::ref<java::security::PublicKey> getPublicKey() { return call_method<"getPublicKey", jni::ref<java::security::PublicKey>>(); }
	jni::ref<sun::security::ssl::NamedGroup> getNamedGroup() { return call_method<"getNamedGroup", jni::ref<sun::security::ssl::NamedGroup>>(); }

protected:

	NamedGroupCredentials(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NAMEDGROUPCREDENTIALS
