// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/DerEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVERSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVERSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class CertificateVersion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::CertificateVersion>
{
	static constexpr fixed_string class_name = "sun/security/x509/CertificateVersion";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::DerEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVERSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVERSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVERSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::CertificateVersion : public jni::object_base<"sun/security/x509/CertificateVersion",
	java::lang::Object,
	sun::security::util::DerEncoder>
{
public:

	static jint V1() { return get_static_field<"V1", jint>(); }
	static jint V2() { return get_static_field<"V2", jint>(); }
	static jint V3() { return get_static_field<"V3", jint>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }

	jint getVersion() { return call_method<"getVersion", jint>(); }
	static jni::ref<sun::security::x509::CertificateVersion> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::x509::CertificateVersion> new_object(jint version) { return base_::new_object(version); }
	static jni::ref<sun::security::x509::CertificateVersion> new_object(jni::ref<sun::security::util::DerInputStream> in) { return base_::new_object(in); }
	static jni::ref<sun::security::x509::CertificateVersion> new_object(jni::ref<java::io::InputStream> in) { return base_::new_object(in); }
	static jni::ref<sun::security::x509::CertificateVersion> new_object(jni::ref<sun::security::util::DerValue> val) { return base_::new_object(val); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	jint compare(jint vers) { return call_method<"compare", jint>(vers); }

protected:

	CertificateVersion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEVERSION