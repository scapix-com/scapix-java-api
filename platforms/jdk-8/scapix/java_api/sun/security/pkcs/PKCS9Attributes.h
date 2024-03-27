// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTES_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs { class PKCS9Attributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs::PKCS9Attributes>
{
	static constexpr fixed_string class_name = "sun/security/pkcs/PKCS9Attributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTES)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/pkcs/PKCS9Attribute.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::pkcs::PKCS9Attributes : public jni::object_base<"sun/security/pkcs/PKCS9Attributes",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::pkcs::PKCS9Attributes> new_object(jni::ref<jni::array<sun::security::util::ObjectIdentifier>> p1, jni::ref<sun::security::util::DerInputStream> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::pkcs::PKCS9Attributes> new_object(jni::ref<sun::security::util::DerInputStream> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::pkcs::PKCS9Attributes> new_object(jni::ref<sun::security::util::DerInputStream> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::pkcs::PKCS9Attributes> new_object(jni::ref<jni::array<sun::security::pkcs::PKCS9Attribute>> p1) { return base_::new_object(p1); }
	void encode(jbyte p1, jni::ref<java::io::OutputStream> p2) { return call_method<"encode", void>(p1, p2); }
	jni::ref<jni::array<jbyte>> getDerEncoding() { return call_method<"getDerEncoding", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<sun::security::pkcs::PKCS9Attribute> getAttribute(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_method<"getAttribute", jni::ref<sun::security::pkcs::PKCS9Attribute>>(p1); }
	jni::ref<sun::security::pkcs::PKCS9Attribute> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<sun::security::pkcs::PKCS9Attribute>>(p1); }
	jni::ref<jni::array<sun::security::pkcs::PKCS9Attribute>> getAttributes() { return call_method<"getAttributes", jni::ref<jni::array<sun::security::pkcs::PKCS9Attribute>>>(); }
	jni::ref<java::lang::Object> getAttributeValue(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_method<"getAttributeValue", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAttributeValue(jni::ref<java::lang::String> p1) { return call_method<"getAttributeValue", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PKCS9Attributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTES
