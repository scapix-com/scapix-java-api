// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYSET_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class CertificatePolicySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::CertificatePolicySet>
{
	static constexpr fixed_string class_name = "sun/security/x509/CertificatePolicySet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYSET)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::CertificatePolicySet : public jni::object_base<"sun/security/x509/CertificatePolicySet",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::x509::CertificatePolicySet> new_object(jni::ref<java::util::Vector> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::CertificatePolicySet> new_object(jni::ref<sun::security::util::DerInputStream> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> p1) { return call_method<"encode", void>(p1); }
	jni::ref<java::util::List> getCertPolicyIds() { return call_method<"getCertPolicyIds", jni::ref<java::util::List>>(); }

protected:

	CertificatePolicySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYSET
