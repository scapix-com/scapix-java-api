// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMNORMALIZER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMNORMALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DOMNormalizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DOMNormalizer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DOMNormalizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMNORMALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMNORMALIZER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMNORMALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Attr.h>
#include <scapix/java_api/org/w3c/dom/DOMErrorHandler.h>
#include <scapix/java_api/org/w3c/dom/NamedNodeMap.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DOMNormalizer : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DOMNormalizer",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> EMPTY_STRING() { return get_static_field<"EMPTY_STRING", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString>>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMNormalizer> new_object() { return base_::new_object(); }
	static void isCDataWF(jni::ref<org::w3c::dom::DOMErrorHandler> p1, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMErrorImpl> p2, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl> p3, jni::ref<java::lang::String> p4, jboolean p5) { return call_static_method<"isCDataWF", void>(p1, p2, p3, p4, p5); }
	static void isXMLCharWF(jni::ref<org::w3c::dom::DOMErrorHandler> p1, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMErrorImpl> p2, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl> p3, jni::ref<java::lang::String> p4, jboolean p5) { return call_static_method<"isXMLCharWF", void>(p1, p2, p3, p4, p5); }
	static void isCommentWF(jni::ref<org::w3c::dom::DOMErrorHandler> p1, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMErrorImpl> p2, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl> p3, jni::ref<java::lang::String> p4, jboolean p5) { return call_static_method<"isCommentWF", void>(p1, p2, p3, p4, p5); }
	static void isAttrValueWF(jni::ref<org::w3c::dom::DOMErrorHandler> p1, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMErrorImpl> p2, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl> p3, jni::ref<org::w3c::dom::NamedNodeMap> p4, jni::ref<org::w3c::dom::Attr> p5, jni::ref<java::lang::String> p6, jboolean p7) { return call_static_method<"isAttrValueWF", void>(p1, p2, p3, p4, p5, p6, p7); }
	static void reportDOMError(jni::ref<org::w3c::dom::DOMErrorHandler> p1, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMErrorImpl> p2, jni::ref<com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl> p3, jni::ref<java::lang::String> p4, jshort p5, jni::ref<java::lang::String> p6) { return call_static_method<"reportDOMError", void>(p1, p2, p3, p4, p5, p6); }
	void startDocument(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLLocator> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::NamespaceContext> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startDocument", void>(p1, p2, p3, p4); }
	void xmlDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"xmlDecl", void>(p1, p2, p3, p4); }
	void doctypeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"doctypeDecl", void>(p1, p2, p3, p4); }
	void comment(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"comment", void>(p1, p2); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"processingInstruction", void>(p1, p2, p3); }
	void startElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"startElement", void>(p1, p2, p3); }
	void emptyElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"emptyElement", void>(p1, p2, p3); }
	void startGeneralEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startGeneralEntity", void>(p1, p2, p3, p4); }
	void textDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"textDecl", void>(p1, p2, p3); }
	void endGeneralEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endGeneralEntity", void>(p1, p2); }
	void characters(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"characters", void>(p1, p2); }
	void ignorableWhitespace(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"ignorableWhitespace", void>(p1, p2); }
	void endElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endElement", void>(p1, p2); }
	void startCDATA(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"startCDATA", void>(p1); }
	void endCDATA(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endCDATA", void>(p1); }
	void endDocument(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endDocument", void>(p1); }
	void setDocumentSource(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource> p1) { return call_method<"setDocumentSource", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource> getDocumentSource() { return call_method<"getDocumentSource", jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource>>(); }

protected:

	DOMNormalizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMNORMALIZER
