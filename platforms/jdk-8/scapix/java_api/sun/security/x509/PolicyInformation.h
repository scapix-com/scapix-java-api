// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_POLICYINFORMATION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_POLICYINFORMATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class PolicyInformation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::PolicyInformation>
{
	static constexpr fixed_string class_name = "sun/security/x509/PolicyInformation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_POLICYINFORMATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_POLICYINFORMATION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_POLICYINFORMATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/x509/CertificatePolicyId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::PolicyInformation : public jni::object_base<"sun/security/x509/PolicyInformation",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ID() { return get_static_field<"ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> QUALIFIERS() { return get_static_field<"QUALIFIERS", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::PolicyInformation> new_object(jni::ref<sun::security::x509::CertificatePolicyId> p1, jni::ref<java::util::Set> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::x509::PolicyInformation> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<sun::security::x509::CertificatePolicyId> getPolicyIdentifier() { return call_method<"getPolicyIdentifier", jni::ref<sun::security::x509::CertificatePolicyId>>(); }
	jni::ref<java::util::Set> getPolicyQualifiers() { return call_method<"getPolicyQualifiers", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	void set(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	void delete_(jni::ref<java::lang::String> p1) { return call_method<"delete", void>(p1); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> p1) { return call_method<"encode", void>(p1); }

protected:

	PolicyInformation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_POLICYINFORMATION
