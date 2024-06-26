// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/Extension.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_EXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_EXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class Extension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::Extension>
{
	static constexpr fixed_string class_name = "sun/security/x509/Extension";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::cert::Extension>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_EXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_EXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_EXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::Extension : public jni::object_base<"sun/security/x509/Extension",
	java::lang::Object,
	java::security::cert::Extension>
{
public:

	static jni::ref<sun::security::x509::Extension> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::x509::Extension> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::Extension> new_object(jni::ref<sun::security::util::ObjectIdentifier> p1, jboolean p2, jni::ref<jni::array<jbyte>> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::security::x509::Extension> new_object(jni::ref<sun::security::x509::Extension> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::Extension> newExtension(jni::ref<sun::security::util::ObjectIdentifier> p1, jboolean p2, jni::ref<jni::array<jbyte>> p3) { return call_static_method<"newExtension", jni::ref<sun::security::x509::Extension>>(p1, p2, p3); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }
	void encode(jni::ref<sun::security::util::DerOutputStream> p1) { return call_method<"encode", void>(p1); }
	jboolean isCritical() { return call_method<"isCritical", jboolean>(); }
	jni::ref<sun::security::util::ObjectIdentifier> getExtensionId() { return call_method<"getExtensionId", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	jni::ref<jni::array<jbyte>> getValue() { return call_method<"getValue", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getExtensionValue() { return call_method<"getExtensionValue", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	Extension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_EXTENSION
