// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/stream/events/XMLEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_STARTELEMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_STARTELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::stream::events { class StartElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::stream::events::StartElement>
{
	static constexpr fixed_string class_name = "javax/xml/stream/events/StartElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::stream::events::XMLEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_STARTELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_STARTELEMENT)
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_STARTELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/javax/xml/namespace/NamespaceContext.h>
#include <scapix/java_api/javax/xml/namespace/QName.h>
#include <scapix/java_api/javax/xml/stream/events/Attribute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::stream::events::StartElement : public jni::object_base<"javax/xml/stream/events/StartElement",
	java::lang::Object,
	javax::xml::stream::events::XMLEvent>
{
public:

	jni::ref<javax::xml::namespace_::QName> getName() { return call_method<"getName", jni::ref<javax::xml::namespace_::QName>>(); }
	jni::ref<java::util::Iterator> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Iterator> getNamespaces() { return call_method<"getNamespaces", jni::ref<java::util::Iterator>>(); }
	jni::ref<javax::xml::stream::events::Attribute> getAttributeByName(jni::ref<javax::xml::namespace_::QName> p1) { return call_method<"getAttributeByName", jni::ref<javax::xml::stream::events::Attribute>>(p1); }
	jni::ref<javax::xml::namespace_::NamespaceContext> getNamespaceContext() { return call_method<"getNamespaceContext", jni::ref<javax::xml::namespace_::NamespaceContext>>(); }
	jni::ref<java::lang::String> getNamespaceURI(jni::ref<java::lang::String> p1) { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1); }

protected:

	StartElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_STARTELEMENT