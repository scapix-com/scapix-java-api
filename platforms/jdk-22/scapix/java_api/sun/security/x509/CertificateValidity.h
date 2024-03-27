// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/DerEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVALIDITY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVALIDITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class CertificateValidity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::CertificateValidity>
{
	static constexpr fixed_string class_name = "sun/security/x509/CertificateValidity";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::DerEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVALIDITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVALIDITY)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVALIDITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::CertificateValidity : public jni::object_base<"sun/security/x509/CertificateValidity",
	java::lang::Object,
	sun::security::util::DerEncoder>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }

	jni::ref<java::util::Date> getNotBefore() { return call_method<"getNotBefore", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getNotAfter() { return call_method<"getNotAfter", jni::ref<java::util::Date>>(); }
	static jni::ref<sun::security::x509::CertificateValidity> new_object(jni::ref<java::util::Date> notBefore, jni::ref<java::util::Date> notAfter) { return base_::new_object(notBefore, notAfter); }
	static jni::ref<sun::security::x509::CertificateValidity> new_object(jni::ref<sun::security::util::DerInputStream> in) { return base_::new_object(in); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	void valid() { return call_method<"valid", void>(); }
	void valid(jni::ref<java::util::Date> now) { return call_method<"valid", void>(now); }

protected:

	CertificateValidity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVALIDITY
