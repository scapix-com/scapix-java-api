// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATURE_SIGNATUREVALUE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATURE_SIGNATUREVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig { class XMLSignature_SignatureValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::XMLSignature_SignatureValue>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/XMLSignature$SignatureValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::XMLStructure>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATURE_SIGNATUREVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATURE_SIGNATUREVALUE)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATURE_SIGNATUREVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/crypto/dsig/XMLValidateContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::XMLSignature_SignatureValue : public jni::object_base<"javax/xml/crypto/dsig/XMLSignature$SignatureValue",
	java::lang::Object,
	javax::xml::crypto::XMLStructure>
{
public:

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getValue() { return call_method<"getValue", jni::ref<jni::array<jbyte>>>(); }
	jboolean validate(jni::ref<javax::xml::crypto::dsig::XMLValidateContext> p1) { return call_method<"validate", jboolean>(p1); }

protected:

	XMLSignature_SignatureValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATURE_SIGNATUREVALUE