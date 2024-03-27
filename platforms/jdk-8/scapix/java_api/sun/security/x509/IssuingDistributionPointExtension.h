// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>
#include <scapix/java_api/sun/security/x509/CertAttrSet.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_ISSUINGDISTRIBUTIONPOINTEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_ISSUINGDISTRIBUTIONPOINTEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class IssuingDistributionPointExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::IssuingDistributionPointExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/IssuingDistributionPointExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension, scapix::java_api::sun::security::x509::CertAttrSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_ISSUINGDISTRIBUTIONPOINTEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_ISSUINGDISTRIBUTIONPOINTEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_ISSUINGDISTRIBUTIONPOINTEXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/security/x509/DistributionPointName.h>
#include <scapix/java_api/sun/security/x509/ReasonFlags.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::IssuingDistributionPointExtension : public jni::object_base<"sun/security/x509/IssuingDistributionPointExtension",
	sun::security::x509::Extension,
	sun::security::x509::CertAttrSet>
{
public:

	static jni::ref<java::lang::String> IDENT() { return get_static_field<"IDENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> POINT() { return get_static_field<"POINT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REASONS() { return get_static_field<"REASONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ONLY_USER_CERTS() { return get_static_field<"ONLY_USER_CERTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ONLY_CA_CERTS() { return get_static_field<"ONLY_CA_CERTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ONLY_ATTRIBUTE_CERTS() { return get_static_field<"ONLY_ATTRIBUTE_CERTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INDIRECT_CRL() { return get_static_field<"INDIRECT_CRL", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::IssuingDistributionPointExtension> new_object(jni::ref<sun::security::x509::DistributionPointName> p1, jni::ref<sun::security::x509::ReasonFlags> p2, jboolean p3, jboolean p4, jboolean p5, jboolean p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<sun::security::x509::IssuingDistributionPointExtension> new_object(jni::ref<java::lang::Boolean> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }
	void set(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	void delete_(jni::ref<java::lang::String> p1) { return call_method<"delete", void>(p1); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	IssuingDistributionPointExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_ISSUINGDISTRIBUTIONPOINTEXTENSION
