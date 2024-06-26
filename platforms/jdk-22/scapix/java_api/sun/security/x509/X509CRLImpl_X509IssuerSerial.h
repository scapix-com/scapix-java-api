// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CRLIMPL_X509ISSUERSERIAL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CRLIMPL_X509ISSUERSERIAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class X509CRLImpl_X509IssuerSerial; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::X509CRLImpl_X509IssuerSerial>
{
	static constexpr fixed_string class_name = "sun/security/x509/X509CRLImpl$X509IssuerSerial";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CRLIMPL_X509ISSUERSERIAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CRLIMPL_X509ISSUERSERIAL)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CRLIMPL_X509ISSUERSERIAL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::x509::X509CRLImpl_X509IssuerSerial : public jni::object_base<"sun/security/x509/X509CRLImpl$X509IssuerSerial",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<sun::security::x509::X509CRLImpl_X509IssuerSerial> another) { return call_method<"compareTo", jint>(another); }

protected:

	X509CRLImpl_X509IssuerSerial(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CRLIMPL_X509ISSUERSERIAL
