// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTORESPI_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTORESPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class CertStoreSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::CertStoreSpi>
{
	static constexpr fixed_string class_name = "java/security/cert/CertStoreSpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTORESPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTORESPI)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTORESPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/CRLSelector.h>
#include <scapix/java_api/java/security/cert/CertSelector.h>
#include <scapix/java_api/java/security/cert/CertStoreParameters.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::CertStoreSpi : public jni::object_base<"java/security/cert/CertStoreSpi",
	java::lang::Object>
{
public:

	static jni::ref<java::security::cert::CertStoreSpi> new_object(jni::ref<java::security::cert::CertStoreParameters> params) { return base_::new_object(params); }
	jni::ref<java::util::Collection> engineGetCertificates(jni::ref<java::security::cert::CertSelector> p1) { return call_method<"engineGetCertificates", jni::ref<java::util::Collection>>(p1); }
	jni::ref<java::util::Collection> engineGetCRLs(jni::ref<java::security::cert::CRLSelector> p1) { return call_method<"engineGetCRLs", jni::ref<java::util::Collection>>(p1); }

protected:

	CertStoreSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTORESPI
