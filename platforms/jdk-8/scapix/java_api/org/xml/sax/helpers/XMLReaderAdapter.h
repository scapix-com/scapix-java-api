// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/Parser.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::helpers { class XMLReaderAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::helpers::XMLReaderAdapter>
{
	static constexpr fixed_string class_name = "org/xml/sax/helpers/XMLReaderAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::Parser, scapix::java_api::org::xml::sax::ContentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERADAPTER)
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/DocumentHandler.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::helpers::XMLReaderAdapter : public jni::object_base<"org/xml/sax/helpers/XMLReaderAdapter",
	java::lang::Object,
	org::xml::sax::Parser,
	org::xml::sax::ContentHandler>
{
public:

	static jni::ref<org::xml::sax::helpers::XMLReaderAdapter> new_object() { return base_::new_object(); }
	static jni::ref<org::xml::sax::helpers::XMLReaderAdapter> new_object(jni::ref<org::xml::sax::XMLReader> p1) { return base_::new_object(p1); }
	void setLocale(jni::ref<java::util::Locale> p1) { return call_method<"setLocale", void>(p1); }
	void setEntityResolver(jni::ref<org::xml::sax::EntityResolver> p1) { return call_method<"setEntityResolver", void>(p1); }
	void setDTDHandler(jni::ref<org::xml::sax::DTDHandler> p1) { return call_method<"setDTDHandler", void>(p1); }
	void setDocumentHandler(jni::ref<org::xml::sax::DocumentHandler> p1) { return call_method<"setDocumentHandler", void>(p1); }
	void setErrorHandler(jni::ref<org::xml::sax::ErrorHandler> p1) { return call_method<"setErrorHandler", void>(p1); }
	void parse(jni::ref<java::lang::String> p1) { return call_method<"parse", void>(p1); }
	void parse(jni::ref<org::xml::sax::InputSource> p1) { return call_method<"parse", void>(p1); }
	void setDocumentLocator(jni::ref<org::xml::sax::Locator> p1) { return call_method<"setDocumentLocator", void>(p1); }
	void startDocument() { return call_method<"startDocument", void>(); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void startPrefixMapping(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"startPrefixMapping", void>(p1, p2); }
	void endPrefixMapping(jni::ref<java::lang::String> p1) { return call_method<"endPrefixMapping", void>(p1); }
	void startElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<org::xml::sax::Attributes> p4) { return call_method<"startElement", void>(p1, p2, p3, p4); }
	void endElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"endElement", void>(p1, p2, p3); }
	void characters(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"characters", void>(p1, p2, p3); }
	void ignorableWhitespace(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"ignorableWhitespace", void>(p1, p2, p3); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"processingInstruction", void>(p1, p2); }
	void skippedEntity(jni::ref<java::lang::String> p1) { return call_method<"skippedEntity", void>(p1); }

protected:

	XMLReaderAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERADAPTER