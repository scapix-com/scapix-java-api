// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/URIReference.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_RETRIEVALMETHOD_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_RETRIEVALMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::keyinfo { class RetrievalMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::keyinfo::RetrievalMethod>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/keyinfo/RetrievalMethod";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::URIReference, scapix::java_api::javax::xml::crypto::XMLStructure>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_RETRIEVALMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_RETRIEVALMETHOD)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_RETRIEVALMETHOD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/xml/crypto/Data.h>
#include <scapix/java_api/javax/xml/crypto/XMLCryptoContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::keyinfo::RetrievalMethod : public jni::object_base<"javax/xml/crypto/dsig/keyinfo/RetrievalMethod",
	java::lang::Object,
	javax::xml::crypto::URIReference,
	javax::xml::crypto::XMLStructure>
{
public:

	jni::ref<java::util::List> getTransforms() { return call_method<"getTransforms", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getURI() { return call_method<"getURI", jni::ref<java::lang::String>>(); }
	jni::ref<javax::xml::crypto::Data> dereference(jni::ref<javax::xml::crypto::XMLCryptoContext> p1) { return call_method<"dereference", jni::ref<javax::xml::crypto::Data>>(p1); }

protected:

	RetrievalMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_RETRIEVALMETHOD
