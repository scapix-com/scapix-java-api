// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATUREFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATUREFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig { class XMLSignatureFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::XMLSignatureFactory>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/XMLSignatureFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATUREFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATUREFACTORY)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATUREFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/xml/crypto/Data.h>
#include <scapix/java_api/javax/xml/crypto/URIDereferencer.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>
#include <scapix/java_api/javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <scapix/java_api/javax/xml/crypto/dsig/DigestMethod.h>
#include <scapix/java_api/javax/xml/crypto/dsig/Manifest.h>
#include <scapix/java_api/javax/xml/crypto/dsig/Reference.h>
#include <scapix/java_api/javax/xml/crypto/dsig/SignatureMethod.h>
#include <scapix/java_api/javax/xml/crypto/dsig/SignatureProperties.h>
#include <scapix/java_api/javax/xml/crypto/dsig/SignatureProperty.h>
#include <scapix/java_api/javax/xml/crypto/dsig/SignedInfo.h>
#include <scapix/java_api/javax/xml/crypto/dsig/Transform.h>
#include <scapix/java_api/javax/xml/crypto/dsig/XMLObject.h>
#include <scapix/java_api/javax/xml/crypto/dsig/XMLSignature.h>
#include <scapix/java_api/javax/xml/crypto/dsig/XMLValidateContext.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/KeyInfoFactory.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::XMLSignatureFactory : public jni::object_base<"javax/xml/crypto/dsig/XMLSignatureFactory",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory>>(p1); }
	static jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::security::Provider> p2) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory>>(p1, p2); }
	static jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory>>(p1, p2); }
	static jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory> getInstance() { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::XMLSignatureFactory>>(); }
	jni::ref<java::lang::String> getMechanismType() { return call_method<"getMechanismType", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	jni::ref<javax::xml::crypto::dsig::XMLSignature> newXMLSignature(jni::ref<javax::xml::crypto::dsig::SignedInfo> p1, jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo> p2) { return call_method<"newXMLSignature", jni::ref<javax::xml::crypto::dsig::XMLSignature>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::XMLSignature> newXMLSignature(jni::ref<javax::xml::crypto::dsig::SignedInfo> p1, jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo> p2, jni::ref<java::util::List> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return call_method<"newXMLSignature", jni::ref<javax::xml::crypto::dsig::XMLSignature>>(p1, p2, p3, p4, p5); }
	jni::ref<javax::xml::crypto::dsig::Reference> newReference(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::DigestMethod> p2) { return call_method<"newReference", jni::ref<javax::xml::crypto::dsig::Reference>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::Reference> newReference(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::DigestMethod> p2, jni::ref<java::util::List> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return call_method<"newReference", jni::ref<javax::xml::crypto::dsig::Reference>>(p1, p2, p3, p4, p5); }
	jni::ref<javax::xml::crypto::dsig::Reference> newReference(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::DigestMethod> p2, jni::ref<java::util::List> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5, jni::ref<jni::array<jbyte>> p6) { return call_method<"newReference", jni::ref<javax::xml::crypto::dsig::Reference>>(p1, p2, p3, p4, p5, p6); }
	jni::ref<javax::xml::crypto::dsig::Reference> newReference(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::DigestMethod> p2, jni::ref<java::util::List> p3, jni::ref<javax::xml::crypto::Data> p4, jni::ref<java::util::List> p5, jni::ref<java::lang::String> p6, jni::ref<java::lang::String> p7) { return call_method<"newReference", jni::ref<javax::xml::crypto::dsig::Reference>>(p1, p2, p3, p4, p5, p6, p7); }
	jni::ref<javax::xml::crypto::dsig::SignedInfo> newSignedInfo(jni::ref<javax::xml::crypto::dsig::CanonicalizationMethod> p1, jni::ref<javax::xml::crypto::dsig::SignatureMethod> p2, jni::ref<java::util::List> p3) { return call_method<"newSignedInfo", jni::ref<javax::xml::crypto::dsig::SignedInfo>>(p1, p2, p3); }
	jni::ref<javax::xml::crypto::dsig::SignedInfo> newSignedInfo(jni::ref<javax::xml::crypto::dsig::CanonicalizationMethod> p1, jni::ref<javax::xml::crypto::dsig::SignatureMethod> p2, jni::ref<java::util::List> p3, jni::ref<java::lang::String> p4) { return call_method<"newSignedInfo", jni::ref<javax::xml::crypto::dsig::SignedInfo>>(p1, p2, p3, p4); }
	jni::ref<javax::xml::crypto::dsig::XMLObject> newXMLObject(jni::ref<java::util::List> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_method<"newXMLObject", jni::ref<javax::xml::crypto::dsig::XMLObject>>(p1, p2, p3, p4); }
	jni::ref<javax::xml::crypto::dsig::Manifest> newManifest(jni::ref<java::util::List> p1) { return call_method<"newManifest", jni::ref<javax::xml::crypto::dsig::Manifest>>(p1); }
	jni::ref<javax::xml::crypto::dsig::Manifest> newManifest(jni::ref<java::util::List> p1, jni::ref<java::lang::String> p2) { return call_method<"newManifest", jni::ref<javax::xml::crypto::dsig::Manifest>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::SignatureProperty> newSignatureProperty(jni::ref<java::util::List> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"newSignatureProperty", jni::ref<javax::xml::crypto::dsig::SignatureProperty>>(p1, p2, p3); }
	jni::ref<javax::xml::crypto::dsig::SignatureProperties> newSignatureProperties(jni::ref<java::util::List> p1, jni::ref<java::lang::String> p2) { return call_method<"newSignatureProperties", jni::ref<javax::xml::crypto::dsig::SignatureProperties>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::DigestMethod> newDigestMethod(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::spec::DigestMethodParameterSpec> p2) { return call_method<"newDigestMethod", jni::ref<javax::xml::crypto::dsig::DigestMethod>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::SignatureMethod> newSignatureMethod(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec> p2) { return call_method<"newSignatureMethod", jni::ref<javax::xml::crypto::dsig::SignatureMethod>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::Transform> newTransform(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::spec::TransformParameterSpec> p2) { return call_method<"newTransform", jni::ref<javax::xml::crypto::dsig::Transform>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::Transform> newTransform(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::XMLStructure> p2) { return call_method<"newTransform", jni::ref<javax::xml::crypto::dsig::Transform>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::CanonicalizationMethod> newCanonicalizationMethod(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::dsig::spec::C14NMethodParameterSpec> p2) { return call_method<"newCanonicalizationMethod", jni::ref<javax::xml::crypto::dsig::CanonicalizationMethod>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::CanonicalizationMethod> newCanonicalizationMethod(jni::ref<java::lang::String> p1, jni::ref<javax::xml::crypto::XMLStructure> p2) { return call_method<"newCanonicalizationMethod", jni::ref<javax::xml::crypto::dsig::CanonicalizationMethod>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory> getKeyInfoFactory() { return call_method<"getKeyInfoFactory", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory>>(); }
	jni::ref<javax::xml::crypto::dsig::XMLSignature> unmarshalXMLSignature(jni::ref<javax::xml::crypto::dsig::XMLValidateContext> p1) { return call_method<"unmarshalXMLSignature", jni::ref<javax::xml::crypto::dsig::XMLSignature>>(p1); }
	jni::ref<javax::xml::crypto::dsig::XMLSignature> unmarshalXMLSignature(jni::ref<javax::xml::crypto::XMLStructure> p1) { return call_method<"unmarshalXMLSignature", jni::ref<javax::xml::crypto::dsig::XMLSignature>>(p1); }
	jboolean isFeatureSupported(jni::ref<java::lang::String> p1) { return call_method<"isFeatureSupported", jboolean>(p1); }
	jni::ref<javax::xml::crypto::URIDereferencer> getURIDereferencer() { return call_method<"getURIDereferencer", jni::ref<javax::xml::crypto::URIDereferencer>>(); }

protected:

	XMLSignatureFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLSIGNATUREFACTORY
