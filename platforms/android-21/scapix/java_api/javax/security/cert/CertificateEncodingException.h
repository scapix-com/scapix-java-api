// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/security/cert/CertificateException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::cert { class CertificateEncodingException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::cert::CertificateEncodingException>
{
	static constexpr fixed_string class_name = "javax/security/cert/CertificateEncodingException";
	using base_classes = std::tuple<scapix::java_api::javax::security::cert::CertificateException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::cert::CertificateEncodingException : public jni::object_base<"javax/security/cert/CertificateEncodingException",
	javax::security::cert::CertificateException>
{
public:

	static jni::ref<javax::security::cert::CertificateEncodingException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }
	static jni::ref<javax::security::cert::CertificateEncodingException> new_object() { return base_::new_object(); }

protected:

	CertificateEncodingException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION
