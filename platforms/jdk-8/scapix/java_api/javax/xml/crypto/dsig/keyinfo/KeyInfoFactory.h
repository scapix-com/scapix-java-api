// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYINFOFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYINFOFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::keyinfo { class KeyInfoFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/keyinfo/KeyInfoFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYINFOFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYINFOFACTORY)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYINFOFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/xml/crypto/URIDereferencer.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/KeyName.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/PGPData.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/RetrievalMethod.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/X509Data.h>
#include <scapix/java_api/javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::keyinfo::KeyInfoFactory : public jni::object_base<"javax/xml/crypto/dsig/keyinfo/KeyInfoFactory",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory>>(p1); }
	static jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::security::Provider> p2) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory>>(p1, p2); }
	static jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory>>(p1, p2); }
	static jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory> getInstance() { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfoFactory>>(); }
	jni::ref<java::lang::String> getMechanismType() { return call_method<"getMechanismType", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo> newKeyInfo(jni::ref<java::util::List> p1) { return call_method<"newKeyInfo", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo>>(p1); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo> newKeyInfo(jni::ref<java::util::List> p1, jni::ref<java::lang::String> p2) { return call_method<"newKeyInfo", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::KeyName> newKeyName(jni::ref<java::lang::String> p1) { return call_method<"newKeyName", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyName>>(p1); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::KeyValue> newKeyValue(jni::ref<java::security::PublicKey> p1) { return call_method<"newKeyValue", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyValue>>(p1); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::PGPData> newPGPData(jni::ref<jni::array<jbyte>> p1) { return call_method<"newPGPData", jni::ref<javax::xml::crypto::dsig::keyinfo::PGPData>>(p1); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::PGPData> newPGPData(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2, jni::ref<java::util::List> p3) { return call_method<"newPGPData", jni::ref<javax::xml::crypto::dsig::keyinfo::PGPData>>(p1, p2, p3); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::PGPData> newPGPData(jni::ref<jni::array<jbyte>> p1, jni::ref<java::util::List> p2) { return call_method<"newPGPData", jni::ref<javax::xml::crypto::dsig::keyinfo::PGPData>>(p1, p2); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::RetrievalMethod> newRetrievalMethod(jni::ref<java::lang::String> p1) { return call_method<"newRetrievalMethod", jni::ref<javax::xml::crypto::dsig::keyinfo::RetrievalMethod>>(p1); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::RetrievalMethod> newRetrievalMethod(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::util::List> p3) { return call_method<"newRetrievalMethod", jni::ref<javax::xml::crypto::dsig::keyinfo::RetrievalMethod>>(p1, p2, p3); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::X509Data> newX509Data(jni::ref<java::util::List> p1) { return call_method<"newX509Data", jni::ref<javax::xml::crypto::dsig::keyinfo::X509Data>>(p1); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::X509IssuerSerial> newX509IssuerSerial(jni::ref<java::lang::String> p1, jni::ref<java::math::BigInteger> p2) { return call_method<"newX509IssuerSerial", jni::ref<javax::xml::crypto::dsig::keyinfo::X509IssuerSerial>>(p1, p2); }
	jboolean isFeatureSupported(jni::ref<java::lang::String> p1) { return call_method<"isFeatureSupported", jboolean>(p1); }
	jni::ref<javax::xml::crypto::URIDereferencer> getURIDereferencer() { return call_method<"getURIDereferencer", jni::ref<javax::xml::crypto::URIDereferencer>>(); }
	jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo> unmarshalKeyInfo(jni::ref<javax::xml::crypto::XMLStructure> p1) { return call_method<"unmarshalKeyInfo", jni::ref<javax::xml::crypto::dsig::keyinfo::KeyInfo>>(p1); }

protected:

	KeyInfoFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYINFOFACTORY
