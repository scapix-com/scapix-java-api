// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>
#include <scapix/java_api/sun/security/x509/CertAttrSet.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_SUBJECTKEYIDENTIFIEREXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_SUBJECTKEYIDENTIFIEREXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class SubjectKeyIdentifierExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::SubjectKeyIdentifierExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/SubjectKeyIdentifierExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension, scapix::java_api::sun::security::x509::CertAttrSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_SUBJECTKEYIDENTIFIEREXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_SUBJECTKEYIDENTIFIEREXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_SUBJECTKEYIDENTIFIEREXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/security/x509/KeyIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::SubjectKeyIdentifierExtension : public jni::object_base<"sun/security/x509/SubjectKeyIdentifierExtension",
	sun::security::x509::Extension,
	sun::security::x509::CertAttrSet>
{
public:

	static jni::ref<java::lang::String> IDENT() { return get_static_field<"IDENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ID() { return get_static_field<"KEY_ID", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::SubjectKeyIdentifierExtension> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::SubjectKeyIdentifierExtension> new_object(jni::ref<java::lang::Boolean> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }
	void set(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	jni::ref<sun::security::x509::KeyIdentifier> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<sun::security::x509::KeyIdentifier>>(p1); }
	void delete_(jni::ref<java::lang::String> p1) { return call_method<"delete", void>(p1); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	SubjectKeyIdentifierExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_SUBJECTKEYIDENTIFIEREXTENSION
