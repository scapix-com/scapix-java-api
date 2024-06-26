// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class CertStoreParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::CertStoreParameters>
{
	static constexpr fixed_string class_name = "java/security/cert/CertStoreParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::CertStoreParameters : public jni::object_base<"java/security/cert/CertStoreParameters",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	CertStoreParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS
