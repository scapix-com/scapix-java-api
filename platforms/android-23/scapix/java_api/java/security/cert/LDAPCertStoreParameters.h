// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/CertStoreParameters.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class LDAPCertStoreParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::LDAPCertStoreParameters>
{
	static constexpr fixed_string class_name = "java/security/cert/LDAPCertStoreParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::cert::CertStoreParameters>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::LDAPCertStoreParameters : public jni::object_base<"java/security/cert/LDAPCertStoreParameters",
	java::lang::Object,
	java::security::cert::CertStoreParameters>
{
public:

	static jni::ref<java::security::cert::LDAPCertStoreParameters> new_object(jni::ref<java::lang::String> serverName, jint port) { return base_::new_object(serverName, port); }
	static jni::ref<java::security::cert::LDAPCertStoreParameters> new_object() { return base_::new_object(); }
	static jni::ref<java::security::cert::LDAPCertStoreParameters> new_object(jni::ref<java::lang::String> serverName) { return base_::new_object(serverName); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<java::lang::String> getServerName() { return call_method<"getServerName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	LDAPCertStoreParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS
