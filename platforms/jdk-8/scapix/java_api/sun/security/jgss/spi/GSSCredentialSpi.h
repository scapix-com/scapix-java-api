// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCREDENTIALSPI_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCREDENTIALSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jgss::spi { class GSSCredentialSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jgss::spi::GSSCredentialSpi>
{
	static constexpr fixed_string class_name = "sun/security/jgss/spi/GSSCredentialSpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCREDENTIALSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCREDENTIALSPI)
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCREDENTIALSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/org/ietf/jgss/Oid.h>
#include <scapix/java_api/sun/security/jgss/spi/GSSNameSpi.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::jgss::spi::GSSCredentialSpi : public jni::object_base<"sun/security/jgss/spi/GSSCredentialSpi",
	java::lang::Object>
{
public:

	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	void dispose() { return call_method<"dispose", void>(); }
	jni::ref<sun::security::jgss::spi::GSSNameSpi> getName() { return call_method<"getName", jni::ref<sun::security::jgss::spi::GSSNameSpi>>(); }
	jint getInitLifetime() { return call_method<"getInitLifetime", jint>(); }
	jint getAcceptLifetime() { return call_method<"getAcceptLifetime", jint>(); }
	jboolean isInitiatorCredential() { return call_method<"isInitiatorCredential", jboolean>(); }
	jboolean isAcceptorCredential() { return call_method<"isAcceptorCredential", jboolean>(); }
	jni::ref<org::ietf::jgss::Oid> getMechanism() { return call_method<"getMechanism", jni::ref<org::ietf::jgss::Oid>>(); }
	jni::ref<sun::security::jgss::spi::GSSCredentialSpi> impersonate(jni::ref<sun::security::jgss::spi::GSSNameSpi> p1) { return call_method<"impersonate", jni::ref<sun::security::jgss::spi::GSSCredentialSpi>>(p1); }

protected:

	GSSCredentialSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCREDENTIALSPI
