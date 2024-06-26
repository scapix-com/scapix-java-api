// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/crypto/dom/DOMCryptoContext.h>
#include <scapix/java_api/javax/xml/crypto/dsig/XMLSignContext.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DOM_DOMSIGNCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DOM_DOMSIGNCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::dom { class DOMSignContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::dom::DOMSignContext>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/dom/DOMSignContext";
	using base_classes = std::tuple<scapix::java_api::javax::xml::crypto::dom::DOMCryptoContext, scapix::java_api::javax::xml::crypto::dsig::XMLSignContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DOM_DOMSIGNCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DOM_DOMSIGNCONTEXT)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DOM_DOMSIGNCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/javax/xml/crypto/KeySelector.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::dom::DOMSignContext : public jni::object_base<"javax/xml/crypto/dsig/dom/DOMSignContext",
	javax::xml::crypto::dom::DOMCryptoContext,
	javax::xml::crypto::dsig::XMLSignContext>
{
public:

	static jni::ref<javax::xml::crypto::dsig::dom::DOMSignContext> new_object(jni::ref<java::security::Key> p1, jni::ref<org::w3c::dom::Node> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::crypto::dsig::dom::DOMSignContext> new_object(jni::ref<java::security::Key> p1, jni::ref<org::w3c::dom::Node> p2, jni::ref<org::w3c::dom::Node> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::xml::crypto::dsig::dom::DOMSignContext> new_object(jni::ref<javax::xml::crypto::KeySelector> p1, jni::ref<org::w3c::dom::Node> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::crypto::dsig::dom::DOMSignContext> new_object(jni::ref<javax::xml::crypto::KeySelector> p1, jni::ref<org::w3c::dom::Node> p2, jni::ref<org::w3c::dom::Node> p3) { return base_::new_object(p1, p2, p3); }
	void setParent(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setParent", void>(p1); }
	void setNextSibling(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setNextSibling", void>(p1); }
	jni::ref<org::w3c::dom::Node> getParent() { return call_method<"getParent", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> getNextSibling() { return call_method<"getNextSibling", jni::ref<org::w3c::dom::Node>>(); }

protected:

	DOMSignContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DOM_DOMSIGNCONTEXT
