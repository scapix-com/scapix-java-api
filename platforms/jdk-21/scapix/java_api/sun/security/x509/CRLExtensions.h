// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLEXTENSIONS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLEXTENSIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class CRLExtensions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::CRLExtensions>
{
	static constexpr fixed_string class_name = "sun/security/x509/CRLExtensions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLEXTENSIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLEXTENSIONS)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLEXTENSIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/x509/Extension.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::CRLExtensions : public jni::object_base<"sun/security/x509/CRLExtensions",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::x509::CRLExtensions> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::x509::CRLExtensions> new_object(jni::ref<sun::security::util::DerInputStream> in) { return base_::new_object(in); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out, jboolean isExplicit) { return call_method<"encode", void>(out, isExplicit); }
	jni::ref<sun::security::x509::Extension> getExtension(jni::ref<java::lang::String> alias) { return call_method<"getExtension", jni::ref<sun::security::x509::Extension>>(alias); }
	void setExtension(jni::ref<java::lang::String> alias, jni::ref<sun::security::x509::Extension> ext) { return call_method<"setExtension", void>(alias, ext); }
	void delete_(jni::ref<java::lang::String> alias) { return call_method<"delete", void>(alias); }
	jni::ref<java::util::Collection> getAllExtensions() { return call_method<"getAllExtensions", jni::ref<java::util::Collection>>(); }
	jboolean hasUnsupportedCriticalExtension() { return call_method<"hasUnsupportedCriticalExtension", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CRLExtensions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLEXTENSIONS