// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#include <scapix/java_api/org/xml/sax/DocumentHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::helpers { class ParserAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::helpers::ParserAdapter>
{
	static constexpr fixed_string class_name = "org/xml/sax/helpers/ParserAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::XMLReader, scapix::java_api::org::xml::sax::DocumentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER)
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/AttributeList.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#include <scapix/java_api/org/xml/sax/Parser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::helpers::ParserAdapter : public jni::object_base<"org/xml/sax/helpers/ParserAdapter",
	java::lang::Object,
	org::xml::sax::XMLReader,
	org::xml::sax::DocumentHandler>
{
public:

	static jni::ref<org::xml::sax::helpers::ParserAdapter> new_object() { return base_::new_object(); }
	static jni::ref<org::xml::sax::helpers::ParserAdapter> new_object(jni::ref<org::xml::sax::Parser> parser) { return base_::new_object(parser); }
	void setFeature(jni::ref<java::lang::String> name, jboolean value) { return call_method<"setFeature", void>(name, value); }
	jboolean getFeature(jni::ref<java::lang::String> name) { return call_method<"getFeature", jboolean>(name); }
	void setProperty(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"setProperty", void>(name, value); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> name) { return call_method<"getProperty", jni::ref<java::lang::Object>>(name); }
	void setEntityResolver(jni::ref<org::xml::sax::EntityResolver> resolver) { return call_method<"setEntityResolver", void>(resolver); }
	jni::ref<org::xml::sax::EntityResolver> getEntityResolver() { return call_method<"getEntityResolver", jni::ref<org::xml::sax::EntityResolver>>(); }
	void setDTDHandler(jni::ref<org::xml::sax::DTDHandler> handler) { return call_method<"setDTDHandler", void>(handler); }
	jni::ref<org::xml::sax::DTDHandler> getDTDHandler() { return call_method<"getDTDHandler", jni::ref<org::xml::sax::DTDHandler>>(); }
	void setContentHandler(jni::ref<org::xml::sax::ContentHandler> handler) { return call_method<"setContentHandler", void>(handler); }
	jni::ref<org::xml::sax::ContentHandler> getContentHandler() { return call_method<"getContentHandler", jni::ref<org::xml::sax::ContentHandler>>(); }
	void setErrorHandler(jni::ref<org::xml::sax::ErrorHandler> handler) { return call_method<"setErrorHandler", void>(handler); }
	jni::ref<org::xml::sax::ErrorHandler> getErrorHandler() { return call_method<"getErrorHandler", jni::ref<org::xml::sax::ErrorHandler>>(); }
	void parse(jni::ref<java::lang::String> systemId) { return call_method<"parse", void>(systemId); }
	void parse(jni::ref<org::xml::sax::InputSource> input) { return call_method<"parse", void>(input); }
	void setDocumentLocator(jni::ref<org::xml::sax::Locator> locator) { return call_method<"setDocumentLocator", void>(locator); }
	void startDocument() { return call_method<"startDocument", void>(); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void startElement(jni::ref<java::lang::String> qName, jni::ref<org::xml::sax::AttributeList> qAtts) { return call_method<"startElement", void>(qName, qAtts); }
	void endElement(jni::ref<java::lang::String> qName) { return call_method<"endElement", void>(qName); }
	void characters(jni::ref<jni::array<jchar>> ch, jint start, jint length) { return call_method<"characters", void>(ch, start, length); }
	void ignorableWhitespace(jni::ref<jni::array<jchar>> ch, jint start, jint length) { return call_method<"ignorableWhitespace", void>(ch, start, length); }
	void processingInstruction(jni::ref<java::lang::String> target, jni::ref<java::lang::String> data) { return call_method<"processingInstruction", void>(target, data); }

protected:

	ParserAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER
