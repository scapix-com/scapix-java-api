// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::helpers { class DefaultHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::helpers::DefaultHandler>
{
	static constexpr fixed_string class_name = "org/xml/sax/helpers/DefaultHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::EntityResolver, scapix::java_api::org::xml::sax::DTDHandler, scapix::java_api::org::xml::sax::ContentHandler, scapix::java_api::org::xml::sax::ErrorHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_DEFAULTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_DEFAULTHANDLER)
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_DEFAULTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#include <scapix/java_api/org/xml/sax/SAXParseException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::helpers::DefaultHandler : public jni::object_base<"org/xml/sax/helpers/DefaultHandler",
	java::lang::Object,
	org::xml::sax::EntityResolver,
	org::xml::sax::DTDHandler,
	org::xml::sax::ContentHandler,
	org::xml::sax::ErrorHandler>
{
public:

	static jni::ref<org::xml::sax::helpers::DefaultHandler> new_object() { return base_::new_object(); }
	jni::ref<org::xml::sax::InputSource> resolveEntity(jni::ref<java::lang::String> publicId, jni::ref<java::lang::String> systemId) { return call_method<"resolveEntity", jni::ref<org::xml::sax::InputSource>>(publicId, systemId); }
	void notationDecl(jni::ref<java::lang::String> name, jni::ref<java::lang::String> publicId, jni::ref<java::lang::String> systemId) { return call_method<"notationDecl", void>(name, publicId, systemId); }
	void unparsedEntityDecl(jni::ref<java::lang::String> name, jni::ref<java::lang::String> publicId, jni::ref<java::lang::String> systemId, jni::ref<java::lang::String> notationName) { return call_method<"unparsedEntityDecl", void>(name, publicId, systemId, notationName); }
	void setDocumentLocator(jni::ref<org::xml::sax::Locator> locator) { return call_method<"setDocumentLocator", void>(locator); }
	void startDocument() { return call_method<"startDocument", void>(); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void startPrefixMapping(jni::ref<java::lang::String> prefix, jni::ref<java::lang::String> uri) { return call_method<"startPrefixMapping", void>(prefix, uri); }
	void endPrefixMapping(jni::ref<java::lang::String> prefix) { return call_method<"endPrefixMapping", void>(prefix); }
	void startElement(jni::ref<java::lang::String> uri, jni::ref<java::lang::String> localName, jni::ref<java::lang::String> qName, jni::ref<org::xml::sax::Attributes> attributes) { return call_method<"startElement", void>(uri, localName, qName, attributes); }
	void endElement(jni::ref<java::lang::String> uri, jni::ref<java::lang::String> localName, jni::ref<java::lang::String> qName) { return call_method<"endElement", void>(uri, localName, qName); }
	void characters(jni::ref<jni::array<jchar>> ch, jint start, jint length) { return call_method<"characters", void>(ch, start, length); }
	void ignorableWhitespace(jni::ref<jni::array<jchar>> ch, jint start, jint length) { return call_method<"ignorableWhitespace", void>(ch, start, length); }
	void processingInstruction(jni::ref<java::lang::String> target, jni::ref<java::lang::String> data) { return call_method<"processingInstruction", void>(target, data); }
	void skippedEntity(jni::ref<java::lang::String> name) { return call_method<"skippedEntity", void>(name); }
	void warning(jni::ref<org::xml::sax::SAXParseException> e) { return call_method<"warning", void>(e); }
	void error(jni::ref<org::xml::sax::SAXParseException> e) { return call_method<"error", void>(e); }
	void fatalError(jni::ref<org::xml::sax::SAXParseException> e) { return call_method<"fatalError", void>(e); }

protected:

	DefaultHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_DEFAULTHANDLER
