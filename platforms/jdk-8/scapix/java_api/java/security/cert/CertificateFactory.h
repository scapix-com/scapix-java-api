// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class CertificateFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::CertificateFactory>
{
	static constexpr fixed_string class_name = "java/security/cert/CertificateFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTIFICATEFACTORY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTIFICATEFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/cert/CRL.h>
#include <scapix/java_api/java/security/cert/CertPath.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::CertificateFactory : public jni::object_base<"java/security/cert/CertificateFactory",
	java::lang::Object>
{
public:

	static jni::ref<java::security::cert::CertificateFactory> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<java::security::cert::CertificateFactory>>(p1); }
	static jni::ref<java::security::cert::CertificateFactory> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getInstance", jni::ref<java::security::cert::CertificateFactory>>(p1, p2); }
	static jni::ref<java::security::cert::CertificateFactory> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::security::Provider> p2) { return call_static_method<"getInstance", jni::ref<java::security::cert::CertificateFactory>>(p1, p2); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::cert::Certificate> generateCertificate(jni::ref<java::io::InputStream> p1) { return call_method<"generateCertificate", jni::ref<java::security::cert::Certificate>>(p1); }
	jni::ref<java::util::Iterator> getCertPathEncodings() { return call_method<"getCertPathEncodings", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::security::cert::CertPath> generateCertPath(jni::ref<java::io::InputStream> p1) { return call_method<"generateCertPath", jni::ref<java::security::cert::CertPath>>(p1); }
	jni::ref<java::security::cert::CertPath> generateCertPath(jni::ref<java::io::InputStream> p1, jni::ref<java::lang::String> p2) { return call_method<"generateCertPath", jni::ref<java::security::cert::CertPath>>(p1, p2); }
	jni::ref<java::security::cert::CertPath> generateCertPath(jni::ref<java::util::List> p1) { return call_method<"generateCertPath", jni::ref<java::security::cert::CertPath>>(p1); }
	jni::ref<java::util::Collection> generateCertificates(jni::ref<java::io::InputStream> p1) { return call_method<"generateCertificates", jni::ref<java::util::Collection>>(p1); }
	jni::ref<java::security::cert::CRL> generateCRL(jni::ref<java::io::InputStream> p1) { return call_method<"generateCRL", jni::ref<java::security::cert::CRL>>(p1); }
	jni::ref<java::util::Collection> generateCRLs(jni::ref<java::io::InputStream> p1) { return call_method<"generateCRLs", jni::ref<java::util::Collection>>(p1); }

protected:

	CertificateFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTIFICATEFACTORY
