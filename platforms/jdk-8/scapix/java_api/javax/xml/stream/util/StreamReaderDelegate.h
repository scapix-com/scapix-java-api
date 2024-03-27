// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/stream/XMLStreamReader.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_STREAM_UTIL_STREAMREADERDELEGATE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_UTIL_STREAMREADERDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::stream::util { class StreamReaderDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::stream::util::StreamReaderDelegate>
{
	static constexpr fixed_string class_name = "javax/xml/stream/util/StreamReaderDelegate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::stream::XMLStreamReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_UTIL_STREAMREADERDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_STREAM_UTIL_STREAMREADERDELEGATE)
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_UTIL_STREAMREADERDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/namespace/NamespaceContext.h>
#include <scapix/java_api/javax/xml/namespace/QName.h>
#include <scapix/java_api/javax/xml/stream/Location.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::stream::util::StreamReaderDelegate : public jni::object_base<"javax/xml/stream/util/StreamReaderDelegate",
	java::lang::Object,
	javax::xml::stream::XMLStreamReader>
{
public:

	static jni::ref<javax::xml::stream::util::StreamReaderDelegate> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::stream::util::StreamReaderDelegate> new_object(jni::ref<javax::xml::stream::XMLStreamReader> p1) { return base_::new_object(p1); }
	void setParent(jni::ref<javax::xml::stream::XMLStreamReader> p1) { return call_method<"setParent", void>(p1); }
	jni::ref<javax::xml::stream::XMLStreamReader> getParent() { return call_method<"getParent", jni::ref<javax::xml::stream::XMLStreamReader>>(); }
	jint next() { return call_method<"next", jint>(); }
	jint nextTag() { return call_method<"nextTag", jint>(); }
	jni::ref<java::lang::String> getElementText() { return call_method<"getElementText", jni::ref<java::lang::String>>(); }
	void require(jint p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"require", void>(p1, p2, p3); }
	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::lang::String> getNamespaceURI(jni::ref<java::lang::String> p1) { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<javax::xml::namespace_::NamespaceContext> getNamespaceContext() { return call_method<"getNamespaceContext", jni::ref<javax::xml::namespace_::NamespaceContext>>(); }
	jboolean isStartElement() { return call_method<"isStartElement", jboolean>(); }
	jboolean isEndElement() { return call_method<"isEndElement", jboolean>(); }
	jboolean isCharacters() { return call_method<"isCharacters", jboolean>(); }
	jboolean isWhiteSpace() { return call_method<"isWhiteSpace", jboolean>(); }
	jni::ref<java::lang::String> getAttributeValue(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttributeValue", jni::ref<java::lang::String>>(p1, p2); }
	jint getAttributeCount() { return call_method<"getAttributeCount", jint>(); }
	jni::ref<javax::xml::namespace_::QName> getAttributeName(jint p1) { return call_method<"getAttributeName", jni::ref<javax::xml::namespace_::QName>>(p1); }
	jni::ref<java::lang::String> getAttributePrefix(jint p1) { return call_method<"getAttributePrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getAttributeNamespace(jint p1) { return call_method<"getAttributeNamespace", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getAttributeLocalName(jint p1) { return call_method<"getAttributeLocalName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getAttributeType(jint p1) { return call_method<"getAttributeType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getAttributeValue(jint p1) { return call_method<"getAttributeValue", jni::ref<java::lang::String>>(p1); }
	jboolean isAttributeSpecified(jint p1) { return call_method<"isAttributeSpecified", jboolean>(p1); }
	jint getNamespaceCount() { return call_method<"getNamespaceCount", jint>(); }
	jni::ref<java::lang::String> getNamespacePrefix(jint p1) { return call_method<"getNamespacePrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNamespaceURI(jint p1) { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1); }
	jint getEventType() { return call_method<"getEventType", jint>(); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }
	jint getTextCharacters(jint p1, jni::ref<jni::array<jchar>> p2, jint p3, jint p4) { return call_method<"getTextCharacters", jint>(p1, p2, p3, p4); }
	jni::ref<jni::array<jchar>> getTextCharacters() { return call_method<"getTextCharacters", jni::ref<jni::array<jchar>>>(); }
	jint getTextStart() { return call_method<"getTextStart", jint>(); }
	jint getTextLength() { return call_method<"getTextLength", jint>(); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }
	jboolean hasText() { return call_method<"hasText", jboolean>(); }
	jni::ref<javax::xml::stream::Location> getLocation() { return call_method<"getLocation", jni::ref<javax::xml::stream::Location>>(); }
	jni::ref<javax::xml::namespace_::QName> getName() { return call_method<"getName", jni::ref<javax::xml::namespace_::QName>>(); }
	jni::ref<java::lang::String> getLocalName() { return call_method<"getLocalName", jni::ref<java::lang::String>>(); }
	jboolean hasName() { return call_method<"hasName", jboolean>(); }
	jni::ref<java::lang::String> getNamespaceURI() { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPrefix() { return call_method<"getPrefix", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	jboolean isStandalone() { return call_method<"isStandalone", jboolean>(); }
	jboolean standaloneSet() { return call_method<"standaloneSet", jboolean>(); }
	jni::ref<java::lang::String> getCharacterEncodingScheme() { return call_method<"getCharacterEncodingScheme", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPITarget() { return call_method<"getPITarget", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPIData() { return call_method<"getPIData", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1); }

protected:

	StreamReaderDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_UTIL_STREAMREADERDELEGATE
