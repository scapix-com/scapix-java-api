// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_STREAM_XMLSTREAMWRITER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_XMLSTREAMWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::stream { class XMLStreamWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::stream::XMLStreamWriter>
{
	static constexpr fixed_string class_name = "javax/xml/stream/XMLStreamWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_XMLSTREAMWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_STREAM_XMLSTREAMWRITER)
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_XMLSTREAMWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/namespace/NamespaceContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::stream::XMLStreamWriter : public jni::object_base<"javax/xml/stream/XMLStreamWriter",
	java::lang::Object>
{
public:

	void writeStartElement(jni::ref<java::lang::String> p1) { return call_method<"writeStartElement", void>(p1); }
	void writeStartElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"writeStartElement", void>(p1, p2); }
	void writeStartElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"writeStartElement", void>(p1, p2, p3); }
	void writeEmptyElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"writeEmptyElement", void>(p1, p2); }
	void writeEmptyElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"writeEmptyElement", void>(p1, p2, p3); }
	void writeEmptyElement(jni::ref<java::lang::String> p1) { return call_method<"writeEmptyElement", void>(p1); }
	void writeEndElement() { return call_method<"writeEndElement", void>(); }
	void writeEndDocument() { return call_method<"writeEndDocument", void>(); }
	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void writeAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"writeAttribute", void>(p1, p2); }
	void writeAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_method<"writeAttribute", void>(p1, p2, p3, p4); }
	void writeAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"writeAttribute", void>(p1, p2, p3); }
	void writeNamespace(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"writeNamespace", void>(p1, p2); }
	void writeDefaultNamespace(jni::ref<java::lang::String> p1) { return call_method<"writeDefaultNamespace", void>(p1); }
	void writeComment(jni::ref<java::lang::String> p1) { return call_method<"writeComment", void>(p1); }
	void writeProcessingInstruction(jni::ref<java::lang::String> p1) { return call_method<"writeProcessingInstruction", void>(p1); }
	void writeProcessingInstruction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"writeProcessingInstruction", void>(p1, p2); }
	void writeCData(jni::ref<java::lang::String> p1) { return call_method<"writeCData", void>(p1); }
	void writeDTD(jni::ref<java::lang::String> p1) { return call_method<"writeDTD", void>(p1); }
	void writeEntityRef(jni::ref<java::lang::String> p1) { return call_method<"writeEntityRef", void>(p1); }
	void writeStartDocument() { return call_method<"writeStartDocument", void>(); }
	void writeStartDocument(jni::ref<java::lang::String> p1) { return call_method<"writeStartDocument", void>(p1); }
	void writeStartDocument(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"writeStartDocument", void>(p1, p2); }
	void writeCharacters(jni::ref<java::lang::String> p1) { return call_method<"writeCharacters", void>(p1); }
	void writeCharacters(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"writeCharacters", void>(p1, p2, p3); }
	jni::ref<java::lang::String> getPrefix(jni::ref<java::lang::String> p1) { return call_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	void setPrefix(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setPrefix", void>(p1, p2); }
	void setDefaultNamespace(jni::ref<java::lang::String> p1) { return call_method<"setDefaultNamespace", void>(p1); }
	void setNamespaceContext(jni::ref<javax::xml::namespace_::NamespaceContext> p1) { return call_method<"setNamespaceContext", void>(p1); }
	jni::ref<javax::xml::namespace_::NamespaceContext> getNamespaceContext() { return call_method<"getNamespaceContext", jni::ref<javax::xml::namespace_::NamespaceContext>>(); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1); }

protected:

	XMLStreamWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_XMLSTREAMWRITER
