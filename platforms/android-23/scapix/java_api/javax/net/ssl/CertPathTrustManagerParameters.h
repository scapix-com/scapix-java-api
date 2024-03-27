// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/net/ssl/ManagerFactoryParameters.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_CERTPATHTRUSTMANAGERPARAMETERS_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_CERTPATHTRUSTMANAGERPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class CertPathTrustManagerParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::CertPathTrustManagerParameters>
{
	static constexpr fixed_string class_name = "javax/net/ssl/CertPathTrustManagerParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::net::ssl::ManagerFactoryParameters>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_CERTPATHTRUSTMANAGERPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_CERTPATHTRUSTMANAGERPARAMETERS)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_CERTPATHTRUSTMANAGERPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/CertPathParameters.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::CertPathTrustManagerParameters : public jni::object_base<"javax/net/ssl/CertPathTrustManagerParameters",
	java::lang::Object,
	javax::net::ssl::ManagerFactoryParameters>
{
public:

	static jni::ref<javax::net::ssl::CertPathTrustManagerParameters> new_object(jni::ref<java::security::cert::CertPathParameters> parameters) { return base_::new_object(parameters); }
	jni::ref<java::security::cert::CertPathParameters> getParameters() { return call_method<"getParameters", jni::ref<java::security::cert::CertPathParameters>>(); }

protected:

	CertPathTrustManagerParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_CERTPATHTRUSTMANAGERPARAMETERS
