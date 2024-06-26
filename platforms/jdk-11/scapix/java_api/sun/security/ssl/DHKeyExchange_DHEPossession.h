// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/NamedGroupPossession.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEPOSSESSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEPOSSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class DHKeyExchange_DHEPossession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::DHKeyExchange_DHEPossession>
{
	static constexpr fixed_string class_name = "sun/security/ssl/DHKeyExchange$DHEPossession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::NamedGroupPossession>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEPOSSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEPOSSESSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEPOSSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/sun/security/ssl/NamedGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::DHKeyExchange_DHEPossession : public jni::object_base<"sun/security/ssl/DHKeyExchange$DHEPossession",
	java::lang::Object,
	sun::security::ssl::NamedGroupPossession>
{
public:

	jni::ref<jni::array<jbyte>> encode() { return call_method<"encode", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::security::PublicKey> getPublicKey() { return call_method<"getPublicKey", jni::ref<java::security::PublicKey>>(); }
	jni::ref<sun::security::ssl::NamedGroup> getNamedGroup() { return call_method<"getNamedGroup", jni::ref<sun::security::ssl::NamedGroup>>(); }
	jni::ref<java::security::PrivateKey> getPrivateKey() { return call_method<"getPrivateKey", jni::ref<java::security::PrivateKey>>(); }

protected:

	DHKeyExchange_DHEPossession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEPOSSESSION
