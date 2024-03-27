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

	static jni::ref<sun::security::x509::NameConstraintsExtension> new_object(jni::ref<sun::security::x509::GeneralSubtrees> permitted, jni::ref<sun::security::x509::GeneralSubtrees> excluded) { return base_::new_object(permitted, excluded); }
	static jni::ref<sun::security::x509::NameConstraintsExtension> new_object(jni::ref<java::lang::Boolean> critical, jni::ref<java::lang::Object> value) { return base_::new_object(critical, value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<java::io::OutputStream> out) { return call_method<"encode", void>(out); }
	void set(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> obj) { return call_method<"set", void>(name, obj); }
	jni::ref<sun::security::x509::GeneralSubtrees> get(jni::ref<java::lang::String> name) { return call_method<"get", jni::ref<sun::security::x509::GeneralSubtrees>>(name); }
	void delete_(jni::ref<java::lang::String> name) { return call_method<"delete", void>(name); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void merge(jni::ref<sun::security::x509::NameConstraintsExtension> newConstraints) { return call_method<"merge", void>(newConstraints); }
	jboolean verify(jni::ref<java::security::cert::X509Certificate> cert) { return call_method<"verify", jboolean>(cert); }
	jboolean verify(jni::ref<sun::security::x509::GeneralNameInterface> name) { return call_method<"verify", jboolean>(name); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	NameConstraintsExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_NAMECONSTRAINTSEXTENSION