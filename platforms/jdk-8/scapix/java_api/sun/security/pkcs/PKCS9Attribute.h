// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/DerEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs { class PKCS9Attribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs::PKCS9Attribute>
{
	static constexpr fixed_string class_name = "sun/security/pkcs/PKCS9Attribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::DerEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::pkcs::PKCS9Attribute : public jni::object_base<"sun/security/pkcs/PKCS9Attribute",
	java::lang::Object,
	sun::security::util::DerEncoder>
{
public:

	static jni::ref<sun::security::util::ObjectIdentifier> EMAIL_ADDRESS_OID() { return get_static_field<"EMAIL_ADDRESS_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> UNSTRUCTURED_NAME_OID() { return get_static_field<"UNSTRUCTURED_NAME_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> CONTENT_TYPE_OID() { return get_static_field<"CONTENT_TYPE_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> MESSAGE_DIGEST_OID() { return get_static_field<"MESSAGE_DIGEST_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SIGNING_TIME_OID() { return get_static_field<"SIGNING_TIME_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> COUNTERSIGNATURE_OID() { return get_static_field<"COUNTERSIGNATURE_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> CHALLENGE_PASSWORD_OID() { return get_static_field<"CHALLENGE_PASSWORD_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> UNSTRUCTURED_ADDRESS_OID() { return get_static_field<"UNSTRUCTURED_ADDRESS_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> EXTENDED_CERTIFICATE_ATTRIBUTES_OID() { return get_static_field<"EXTENDED_CERTIFICATE_ATTRIBUTES_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> ISSUER_SERIALNUMBER_OID() { return get_static_field<"ISSUER_SERIALNUMBER_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> EXTENSION_REQUEST_OID() { return get_static_field<"EXTENSION_REQUEST_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SIGNING_CERTIFICATE_OID() { return get_static_field<"SIGNING_CERTIFICATE_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SIGNATURE_TIMESTAMP_TOKEN_OID() { return get_static_field<"SIGNATURE_TIMESTAMP_TOKEN_OID", jni::ref<sun::security::util::ObjectIdentifier>>(); }

	static jni::ref<sun::security::pkcs::PKCS9Attribute> new_object(jni::ref<sun::security::util::ObjectIdentifier> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::pkcs::PKCS9Attribute> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	void derEncode(jni::ref<java::io::OutputStream> p1) { return call_method<"derEncode", void>(p1); }
	jboolean isKnown() { return call_method<"isKnown", jboolean>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jboolean isSingleValued() { return call_method<"isSingleValued", jboolean>(); }
	jni::ref<sun::security::util::ObjectIdentifier> getOID() { return call_method<"getOID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> getOID(jni::ref<java::lang::String> p1) { return call_static_method<"getOID", jni::ref<sun::security::util::ObjectIdentifier>>(p1); }
	static jni::ref<java::lang::String> getName(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_static_method<"getName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PKCS9Attribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PKCS9ATTRIBUTE