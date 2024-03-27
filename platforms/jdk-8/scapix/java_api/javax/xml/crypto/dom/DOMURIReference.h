// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/URIReference.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DOM_DOMURIREFERENCE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DOM_DOMURIREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dom { class DOMURIReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dom::DOMURIReference>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dom/DOMURIReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::URIReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DOM_DOMURIREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DOM_DOMURIREFERENCE)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DOM_DOMURIREFERENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dom::DOMURIReference : public jni::object_base<"javax/xml/crypto/dom/DOMURIReference",
	java::lang::Object,
	javax::xml::crypto::URIReference>
{
public:

	jni::ref<org::w3c::dom::Node> getHere() { return call_method<"getHere", jni::ref<org::w3c::dom::Node>>(); }

protected:

	DOMURIReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DOM_DOMURIREFERENCE
