// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>
#include <scapix/java_api/sun/security/x509/CertAttrSet.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_INHIBITANYPOLICYEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_INHIBITANYPOLICYEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class InhibitAnyPolicyExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::InhibitAnyPolicyExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/InhibitAnyPolicyExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension, scapix::java_api::sun::security::x509::CertAttrSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_INHIBITANYPOLICYEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_INHIBITANYPOLICYEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_INHIBITANYPOLICYEXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::InhibitAnyPolicyExtension : public jni::object_base<"sun/security/x509/InhibitAnyPolicyExtension",
	sun::security::x509::Extension,
	sun::security::x509::CertAttrSet>
{
public:

	static jni::ref<java::lang::String> IDENT() { return get_static_field<"IDENT", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> AnyPolicy_Id() { return get_static_field<"AnyPolicy_Id", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static void AnyPolicy_Id(jni::ref<sun::security::util::ObjectIdentifier> v) { set_static_field<"AnyPolicy_Id", jni::ref<sun::security::util::ObjectIdentifier>>(v); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SKIP_CERTS() { return get_static_field<"SKIP_CERTS", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::InhibitAnyPolicyExtension> new_object(jint skipCerts) { return base_::new_object(skipCerts); }
	static jni::ref<sun::security::x509::InhibitAnyPolicyExtension> new_object(jni::ref<java::lang::Boolean> critical, jni::ref<java::lang::Object> value) { return base_::new_object(critical, value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<java::io::OutputStream> out) { return call_method<"encode", void>(out); }
	void set(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> obj) { return call_method<"set", void>(name, obj); }
	jni::ref<java::lang::Integer> get(jni::ref<java::lang::String> name) { return call_method<"get", jni::ref<java::lang::Integer>>(name); }
	void delete_(jni::ref<java::lang::String> name) { return call_method<"delete", void>(name); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	InhibitAnyPolicyExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_INHIBITANYPOLICYEXTENSION