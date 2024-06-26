// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/transform/sax/TransformerHandler.h>
#include <scapix/java_api/org/xml/sax/ext/DeclHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERHANDLERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERHANDLERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax { class TransformerHandlerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerHandlerImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/trax/TransformerHandlerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::transform::sax::TransformerHandler, scapix::java_api::org::xml::sax::ext::DeclHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERHANDLERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERHANDLERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERHANDLERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/Result.h>
#include <scapix/java_api/javax/xml/transform/Transformer.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::trax::TransformerHandlerImpl : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/trax/TransformerHandlerImpl",
	java::lang::Object,
	javax::xml::transform::sax::TransformerHandler,
	org::xml::sax::ext::DeclHandler>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::trax::TransformerHandlerImpl> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }
	void setSystemId(jni::ref<java::lang::String> p1) { return call_method<"setSystemId", void>(p1); }
	jni::ref<javax::xml::transform::Transformer> getTransformer() { return call_method<"getTransformer", jni::ref<javax::xml::transform::Transformer>>(); }
	void setResult(jni::ref<javax::xml::transform::Result> p1) { return call_method<"setResult", void>(p1); }
	void characters(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"characters", void>(p1, p2, p3); }
	void startDocument() { return call_method<"startDocument", void>(); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void startElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<org::xml::sax::Attributes> p4) { return call_method<"startElement", void>(p1, p2, p3, p4); }
	void endElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"endElement", void>(p1, p2, p3); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"processingInstruction", void>(p1, p2); }
	void startCDATA() { return call_method<"startCDATA", void>(); }
	void endCDATA() { return call_method<"endCDATA", void>(); }
	void comment(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"comment", void>(p1, p2, p3); }
	void ignorableWhitespace(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"ignorableWhitespace", void>(p1, p2, p3); }
	void setDocumentLocator(jni::ref<org::xml::sax::Locator> p1) { return call_method<"setDocumentLocator", void>(p1); }
	void skippedEntity(jni::ref<java::lang::String> p1) { return call_method<"skippedEntity", void>(p1); }
	void startPrefixMapping(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"startPrefixMapping", void>(p1, p2); }
	void endPrefixMapping(jni::ref<java::lang::String> p1) { return call_method<"endPrefixMapping", void>(p1); }
	void startDTD(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"startDTD", void>(p1, p2, p3); }
	void endDTD() { return call_method<"endDTD", void>(); }
	void startEntity(jni::ref<java::lang::String> p1) { return call_method<"startEntity", void>(p1); }
	void endEntity(jni::ref<java::lang::String> p1) { return call_method<"endEntity", void>(p1); }
	void unparsedEntityDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_method<"unparsedEntityDecl", void>(p1, p2, p3, p4); }
	void notationDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"notationDecl", void>(p1, p2, p3); }
	void attributeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return call_method<"attributeDecl", void>(p1, p2, p3, p4, p5); }
	void elementDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"elementDecl", void>(p1, p2); }
	void externalEntityDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"externalEntityDecl", void>(p1, p2, p3); }
	void internalEntityDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"internalEntityDecl", void>(p1, p2); }
	void reset() { return call_method<"reset", void>(); }

protected:

	TransformerHandlerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRANSFORMERHANDLERIMPL
