// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>
#include <scapix/java_api/sun/security/x509/CertAttrSet.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_NAMECONSTRAINTSEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_NAMECONSTRAINTSEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class NameConstraintsExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::NameConstraintsExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/NameConstraintsExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension, scapix::java_api::sun::security::x509::CertAttrSet, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_NAMECONSTRAINTSEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_NAMECONSTRAINTSEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_NAMECONSTRAINTSEXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/security/x509/GeneralNameInterface.h>
#include <scapix/java_api/sun/security/x509/GeneralSubtrees.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::NameConstraintsExtension : public jni::object_base<"sun/security/x509/NameConstraintsExtension",
	sun::security::x509::Extension,
	sun::security::x509::CertAttrSet,
	java::lang::Cloneable>
{
public:

	static jni::ref<java::lang::String> IDENT() { return get_static_field<"IDENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PERMITTED_SUBTREES() { return get_static_field<"PERMITTED_SUBTREES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXCLUDED_SUBTREES() { return get_static_field<"EXCLUDED_SUBTREES", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::NameConstraintsExtension> new_object(jni::ref<sun::security::x509::GeneralSubtrees> p1, jni::ref<sun::security::x509::GeneralSubtrees> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::x509::NameConstraintsExtension> new_object(jni::ref<java::lang::Boolean> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }
	void set(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	jni::ref<sun::security::x509::GeneralSubtrees> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<sun::security::x509::GeneralSubtrees>>(p1); }
	void delete_(jni::ref<java::lang::String> p1) { return call_method<"delete", void>(p1); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void merge(jni::ref<sun::security::x509::NameConstraintsExtension> p1) { return call_method<"merge", void>(p1); }
	jboolean verify(jni::ref<java::security::cert::X509Certificate> p1) { return call_method<"verify", jboolean>(p1); }
	jboolean verify(jni::ref<sun::security::x509::GeneralNameInterface> p1) { return call_method<"verify", jboolean>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	NameConstraintsExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_NAMECONSTRAINTSEXTENSION
