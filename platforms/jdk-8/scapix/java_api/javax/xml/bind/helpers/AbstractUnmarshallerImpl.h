// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/bind/Unmarshaller.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_ABSTRACTUNMARSHALLERIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_ABSTRACTUNMARSHALLERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::helpers { class AbstractUnmarshallerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::helpers::AbstractUnmarshallerImpl>
{
	static constexpr fixed_string class_name = "javax/xml/bind/helpers/AbstractUnmarshallerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::bind::Unmarshaller>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_ABSTRACTUNMARSHALLERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_ABSTRACTUNMARSHALLERIMPL)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_ABSTRACTUNMARSHALLERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/javax/xml/bind/JAXBElement.h>
#include <scapix/java_api/javax/xml/bind/Unmarshaller_Listener.h>
#include <scapix/java_api/javax/xml/bind/ValidationEventHandler.h>
#include <scapix/java_api/javax/xml/bind/annotation/adapters/XmlAdapter.h>
#include <scapix/java_api/javax/xml/bind/attachment/AttachmentUnmarshaller.h>
#include <scapix/java_api/javax/xml/stream/XMLEventReader.h>
#include <scapix/java_api/javax/xml/stream/XMLStreamReader.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#include <scapix/java_api/javax/xml/validation/Schema.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::helpers::AbstractUnmarshallerImpl : public jni::object_base<"javax/xml/bind/helpers/AbstractUnmarshallerImpl",
	java::lang::Object,
	javax::xml::bind::Unmarshaller>
{
public:

	static jni::ref<javax::xml::bind::helpers::AbstractUnmarshallerImpl> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<javax::xml::transform::Source> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<org::xml::sax::InputSource> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<java::net::URL> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<java::io::File> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<java::io::InputStream> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<java::io::Reader> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jboolean isValidating() { return call_method<"isValidating", jboolean>(); }
	void setEventHandler(jni::ref<javax::xml::bind::ValidationEventHandler> p1) { return call_method<"setEventHandler", void>(p1); }
	void setValidating(jboolean p1) { return call_method<"setValidating", void>(p1); }
	jni::ref<javax::xml::bind::ValidationEventHandler> getEventHandler() { return call_method<"getEventHandler", jni::ref<javax::xml::bind::ValidationEventHandler>>(); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<javax::xml::stream::XMLEventReader> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> unmarshal(jni::ref<javax::xml::stream::XMLStreamReader> p1) { return call_method<"unmarshal", jni::ref<java::lang::Object>>(p1); }
	jni::ref<javax::xml::bind::JAXBElement> unmarshal(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::Class> p2) { return call_method<"unmarshal", jni::ref<javax::xml::bind::JAXBElement>>(p1, p2); }
	jni::ref<javax::xml::bind::JAXBElement> unmarshal(jni::ref<javax::xml::transform::Source> p1, jni::ref<java::lang::Class> p2) { return call_method<"unmarshal", jni::ref<javax::xml::bind::JAXBElement>>(p1, p2); }
	jni::ref<javax::xml::bind::JAXBElement> unmarshal(jni::ref<javax::xml::stream::XMLStreamReader> p1, jni::ref<java::lang::Class> p2) { return call_method<"unmarshal", jni::ref<javax::xml::bind::JAXBElement>>(p1, p2); }
	jni::ref<javax::xml::bind::JAXBElement> unmarshal(jni::ref<javax::xml::stream::XMLEventReader> p1, jni::ref<java::lang::Class> p2) { return call_method<"unmarshal", jni::ref<javax::xml::bind::JAXBElement>>(p1, p2); }
	void setSchema(jni::ref<javax::xml::validation::Schema> p1) { return call_method<"setSchema", void>(p1); }
	jni::ref<javax::xml::validation::Schema> getSchema() { return call_method<"getSchema", jni::ref<javax::xml::validation::Schema>>(); }
	void setAdapter(jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter> p1) { return call_method<"setAdapter", void>(p1); }
	void setAdapter(jni::ref<java::lang::Class> p1, jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter> p2) { return call_method<"setAdapter", void>(p1, p2); }
	jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter> getAdapter(jni::ref<java::lang::Class> p1) { return call_method<"getAdapter", jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter>>(p1); }
	void setAttachmentUnmarshaller(jni::ref<javax::xml::bind::attachment::AttachmentUnmarshaller> p1) { return call_method<"setAttachmentUnmarshaller", void>(p1); }
	jni::ref<javax::xml::bind::attachment::AttachmentUnmarshaller> getAttachmentUnmarshaller() { return call_method<"getAttachmentUnmarshaller", jni::ref<javax::xml::bind::attachment::AttachmentUnmarshaller>>(); }
	void setListener(jni::ref<javax::xml::bind::Unmarshaller_Listener> p1) { return call_method<"setListener", void>(p1); }
	jni::ref<javax::xml::bind::Unmarshaller_Listener> getListener() { return call_method<"getListener", jni::ref<javax::xml::bind::Unmarshaller_Listener>>(); }

protected:

	AbstractUnmarshallerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_ABSTRACTUNMARSHALLERIMPL