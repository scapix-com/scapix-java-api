// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/DerEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS10_PKCS10ATTRIBUTE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS10_PKCS10ATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs10 { class PKCS10Attribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs10::PKCS10Attribute>
{
	static constexpr fixed_string class_name = "sun/security/pkcs10/PKCS10Attribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::DerEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS10_PKCS10ATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS10_PKCS10ATTRIBUTE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS10_PKCS10ATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/pkcs/PKCS9Attribute.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::pkcs10::PKCS10Attribute : public jni::object_base<"sun/security/pkcs10/PKCS10Attribute",
	java::lang::Object,
	sun::security::util::DerEncoder>
{
public:

	static jni::ref<sun::security::pkcs10::PKCS10Attribute> new_object(jni::ref<sun::security::util::DerValue> derVal) { return base_::new_object(derVal); }
	static jni::ref<sun::security::pkcs10::PKCS10Attribute> new_object(jni::ref<sun::security::util::ObjectIdentifier> attributeId, jni::ref<java::lang::Object> attributeValue) { return base_::new_object(attributeId, attributeValue); }
	static jni::ref<sun::security::pkcs10::PKCS10Attribute> new_object(jni::ref<sun::security::pkcs::PKCS9Attribute> attr) { return base_::new_object(attr); }
	void derEncode(jni::ref<java::io::OutputStream> out) { return call_method<"derEncode", void>(out); }
	jni::ref<sun::security::util::ObjectIdentifier> getAttributeId() { return call_method<"getAttributeId", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	jni::ref<java::lang::Object> getAttributeValue() { return call_method<"getAttributeValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PKCS10Attribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS10_PKCS10ATTRIBUTE
