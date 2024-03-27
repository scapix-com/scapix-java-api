// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_OCSPNOCHECKEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_OCSPNOCHECKEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class OCSPNoCheckExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::OCSPNoCheckExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/OCSPNoCheckExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_OCSPNOCHECKEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_OCSPNOCHECKEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_OCSPNOCHECKEXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::OCSPNoCheckExtension : public jni::object_base<"sun/security/x509/OCSPNoCheckExtension",
	sun::security::x509::Extension>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::OCSPNoCheckExtension> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::x509::OCSPNoCheckExtension> new_object(jni::ref<java::lang::Boolean> critical, jni::ref<java::lang::Object> value) { return base_::new_object(critical, value); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	OCSPNoCheckExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_OCSPNOCHECKEXTENSION
