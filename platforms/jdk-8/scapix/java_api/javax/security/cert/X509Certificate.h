// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/security/cert/Certificate.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_X509CERTIFICATE_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_X509CERTIFICATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::cert { class X509Certificate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::cert::X509Certificate>
{
	static constexpr fixed_string class_name = "javax/security/cert/X509Certificate";
	using base_classes = std::tuple<scapix::java_api::javax::security::cert::Certificate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_X509CERTIFICATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_X509CERTIFICATE)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_X509CERTIFICATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/util/Date.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::cert::X509Certificate : public jni::object_base<"javax/security/cert/X509Certificate",
	javax::security::cert::Certificate>
{
public:

	static jni::ref<javax::security::cert::X509Certificate> new_object() { return base_::new_object(); }
	static jni::ref<javax::security::cert::X509Certificate> getInstance(jni::ref<java::io::InputStream> p1) { return call_static_method<"getInstance", jni::ref<javax::security::cert::X509Certificate>>(p1); }
	static jni::ref<javax::security::cert::X509Certificate> getInstance(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"getInstance", jni::ref<javax::security::cert::X509Certificate>>(p1); }
	void checkValidity() { return call_method<"checkValidity", void>(); }
	void checkValidity(jni::ref<java::util::Date> p1) { return call_method<"checkValidity", void>(p1); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jni::ref<java::math::BigInteger> getSerialNumber() { return call_method<"getSerialNumber", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::Principal> getIssuerDN() { return call_method<"getIssuerDN", jni::ref<java::security::Principal>>(); }
	jni::ref<java::security::Principal> getSubjectDN() { return call_method<"getSubjectDN", jni::ref<java::security::Principal>>(); }
	jni::ref<java::util::Date> getNotBefore() { return call_method<"getNotBefore", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getNotAfter() { return call_method<"getNotAfter", jni::ref<java::util::Date>>(); }
	jni::ref<java::lang::String> getSigAlgName() { return call_method<"getSigAlgName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSigAlgOID() { return call_method<"getSigAlgOID", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getSigAlgParams() { return call_method<"getSigAlgParams", jni::ref<jni::array<jbyte>>>(); }

protected:

	X509Certificate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_CERT_X509CERTIFICATE