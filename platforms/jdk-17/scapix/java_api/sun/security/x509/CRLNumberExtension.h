// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>
#include <scapix/java_api/sun/security/x509/CertAttrSet.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLNUMBEREXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLNUMBEREXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class CRLNumberExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::CRLNumberExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/CRLNumberExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension, scapix::java_api::sun::security::x509::CertAttrSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLNUMBEREXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLNUMBEREXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLNUMBEREXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::CRLNumberExtension : public jni::object_base<"sun/security/x509/CRLNumberExtension",
	sun::security::x509::Extension,
	sun::security::x509::CertAttrSet>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMBER() { return get_static_field<"NUMBER", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::CRLNumberExtension> new_object(jint crlNum) { return base_::new_object(crlNum); }
	static jni::ref<sun::security::x509::CRLNumberExtension> new_object(jni::ref<java::math::BigInteger> crlNum) { return base_::new_object(crlNum); }
	static jni::ref<sun::security::x509::CRLNumberExtension> new_object(jni::ref<java::lang::Boolean> critical, jni::ref<java::lang::Object> value) { return base_::new_object(critical, value); }
	void set(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> obj) { return call_method<"set", void>(name, obj); }
	jni::ref<java::math::BigInteger> get(jni::ref<java::lang::String> name) { return call_method<"get", jni::ref<java::math::BigInteger>>(name); }
	void delete_(jni::ref<java::lang::String> name) { return call_method<"delete", void>(name); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<java::io::OutputStream> out) { return call_method<"encode", void>(out); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	CRLNumberExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLNUMBEREXTENSION
