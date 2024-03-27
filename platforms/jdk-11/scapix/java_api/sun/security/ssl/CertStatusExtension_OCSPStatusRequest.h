// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/CertStatusExtension_CertStatusRequest.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTSTATUSEXTENSION_OCSPSTATUSREQUEST_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTSTATUSEXTENSION_OCSPSTATUSREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class CertStatusExtension_OCSPStatusRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::CertStatusExtension_OCSPStatusRequest>
{
	static constexpr fixed_string class_name = "sun/security/ssl/CertStatusExtension$OCSPStatusRequest";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::CertStatusExtension_CertStatusRequest>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTSTATUSEXTENSION_OCSPSTATUSREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTSTATUSEXTENSION_OCSPSTATUSREQUEST)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTSTATUSEXTENSION_OCSPSTATUSREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::CertStatusExtension_OCSPStatusRequest : public jni::object_base<"sun/security/ssl/CertStatusExtension$OCSPStatusRequest",
	sun::security::ssl::CertStatusExtension_CertStatusRequest>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CertStatusExtension_OCSPStatusRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTSTATUSEXTENSION_OCSPSTATUSREQUEST