// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_DOMDOCUMENTHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_DOMDOCUMENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::validation { class DOMDocumentHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::validation::DOMDocumentHandler>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/jaxp/validation/DOMDocumentHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_DOMDOCUMENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_DOMDOCUMENTHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_DOMDOCUMENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/xml/transform/dom/DOMResult.h>
#include <scapix/java_api/org/w3c/dom/CDATASection.h>
#include <scapix/java_api/org/w3c/dom/Comment.h>
#include <scapix/java_api/org/w3c/dom/DocumentType.h>
#include <scapix/java_api/org/w3c/dom/ProcessingInstruction.h>
#include <scapix/java_api/org/w3c/dom/Text.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::jaxp::validation::DOMDocumentHandler : public jni::object_base<"com/sun/org/apache/xerces/internal/jaxp/validation/DOMDocumentHandler",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler>
{
public:

	void setDOMResult(jni::ref<javax::xml::transform::dom::DOMResult> p1) { return call_method<"setDOMResult", void>(p1); }
	void doctypeDecl(jni::ref<org::w3c::dom::DocumentType> p1) { return call_method<"doctypeDecl", void>(p1); }
	void characters(jni::ref<org::w3c::dom::Text> p1) { return call_method<"characters", void>(p1); }
	void cdata(jni::ref<org::w3c::dom::CDATASection> p1) { return call_method<"cdata", void>(p1); }
	void comment(jni::ref<org::w3c::dom::Comment> p1) { return call_method<"comment", void>(p1); }
	void processingInstruction(jni::ref<org::w3c::dom::ProcessingInstruction> p1) { return call_method<"processingInstruction", void>(p1); }
	void setIgnoringCharacters(jboolean p1) { return call_method<"setIgnoringCharacters", void>(p1); }

protected:

	DOMDocumentHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_DOMDOCUMENTHANDLER
