// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_MARSHALLER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_MARSHALLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class Marshaller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::Marshaller>
{
	static constexpr fixed_string class_name = "javax/xml/bind/Marshaller";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_MARSHALLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_MARSHALLER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_MARSHALLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/bind/Marshaller_Listener.h>
#include <scapix/java_api/javax/xml/bind/ValidationEventHandler.h>
#include <scapix/java_api/javax/xml/bind/annotation/adapters/XmlAdapter.h>
#include <scapix/java_api/javax/xml/bind/attachment/AttachmentMarshaller.h>
#include <scapix/java_api/javax/xml/stream/XMLEventWriter.h>
#include <scapix/java_api/javax/xml/stream/XMLStreamWriter.h>
#include <scapix/java_api/javax/xml/transform/Result.h>
#include <scapix/java_api/javax/xml/validation/Schema.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::Marshaller : public jni::object_base<"javax/xml/bind/Marshaller",
	java::lang::Object>
{
public:

	using Listener = Marshaller_Listener;

	static jni::ref<java::lang::String> JAXB_ENCODING() { return get_static_field<"JAXB_ENCODING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JAXB_FORMATTED_OUTPUT() { return get_static_field<"JAXB_FORMATTED_OUTPUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JAXB_SCHEMA_LOCATION() { return get_static_field<"JAXB_SCHEMA_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JAXB_NO_NAMESPACE_SCHEMA_LOCATION() { return get_static_field<"JAXB_NO_NAMESPACE_SCHEMA_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JAXB_FRAGMENT() { return get_static_field<"JAXB_FRAGMENT", jni::ref<java::lang::String>>(); }

	void marshal(jni::ref<java::lang::Object> p1, jni::ref<javax::xml::transform::Result> p2) { return call_method<"marshal", void>(p1, p2); }
	void marshal(jni::ref<java::lang::Object> p1, jni::ref<java::io::OutputStream> p2) { return call_method<"marshal", void>(p1, p2); }
	void marshal(jni::ref<java::lang::Object> p1, jni::ref<java::io::File> p2) { return call_method<"marshal", void>(p1, p2); }
	void marshal(jni::ref<java::lang::Object> p1, jni::ref<java::io::Writer> p2) { return call_method<"marshal", void>(p1, p2); }
	void marshal(jni::ref<java::lang::Object> p1, jni::ref<org::xml::sax::ContentHandler> p2) { return call_method<"marshal", void>(p1, p2); }
	void marshal(jni::ref<java::lang::Object> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"marshal", void>(p1, p2); }
	void marshal(jni::ref<java::lang::Object> p1, jni::ref<javax::xml::stream::XMLStreamWriter> p2) { return call_method<"marshal", void>(p1, p2); }
	void marshal(jni::ref<java::lang::Object> p1, jni::ref<javax::xml::stream::XMLEventWriter> p2) { return call_method<"marshal", void>(p1, p2); }
	jni::ref<org::w3c::dom::Node> getNode(jni::ref<java::lang::Object> p1) { return call_method<"getNode", jni::ref<org::w3c::dom::Node>>(p1); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1); }
	void setEventHandler(jni::ref<javax::xml::bind::ValidationEventHandler> p1) { return call_method<"setEventHandler", void>(p1); }
	jni::ref<javax::xml::bind::ValidationEventHandler> getEventHandler() { return call_method<"getEventHandler", jni::ref<javax::xml::bind::ValidationEventHandler>>(); }
	void setAdapter(jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter> p1) { return call_method<"setAdapter", void>(p1); }
	void setAdapter(jni::ref<java::lang::Class> p1, jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter> p2) { return call_method<"setAdapter", void>(p1, p2); }
	jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter> getAdapter(jni::ref<java::lang::Class> p1) { return call_method<"getAdapter", jni::ref<javax::xml::bind::annotation::adapters::XmlAdapter>>(p1); }
	void setAttachmentMarshaller(jni::ref<javax::xml::bind::attachment::AttachmentMarshaller> p1) { return call_method<"setAttachmentMarshaller", void>(p1); }
	jni::ref<javax::xml::bind::attachment::AttachmentMarshaller> getAttachmentMarshaller() { return call_method<"getAttachmentMarshaller", jni::ref<javax::xml::bind::attachment::AttachmentMarshaller>>(); }
	void setSchema(jni::ref<javax::xml::validation::Schema> p1) { return call_method<"setSchema", void>(p1); }
	jni::ref<javax::xml::validation::Schema> getSchema() { return call_method<"getSchema", jni::ref<javax::xml::validation::Schema>>(); }
	void setListener(jni::ref<javax::xml::bind::Marshaller_Listener> p1) { return call_method<"setListener", void>(p1); }
	jni::ref<javax::xml::bind::Marshaller_Listener> getListener() { return call_method<"getListener", jni::ref<javax::xml::bind::Marshaller_Listener>>(); }

protected:

	Marshaller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_MARSHALLER
