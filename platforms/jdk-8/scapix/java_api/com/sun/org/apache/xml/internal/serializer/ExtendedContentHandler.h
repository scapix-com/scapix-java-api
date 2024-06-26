// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_EXTENDEDCONTENTHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_EXTENDEDCONTENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class ExtendedContentHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::ContentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_EXTENDEDCONTENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_EXTENDEDCONTENTHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_EXTENDEDCONTENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/SourceLocator.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler",
	java::lang::Object,
	org::xml::sax::ContentHandler>
{
public:

	static jint NO_BAD_CHARS() { return get_static_field<"NO_BAD_CHARS", jint>(); }
	static jint HTML_ATTREMPTY() { return get_static_field<"HTML_ATTREMPTY", jint>(); }
	static jint HTML_ATTRURL() { return get_static_field<"HTML_ATTRURL", jint>(); }

	void addAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5, jboolean p6) { return call_method<"addAttribute", void>(p1, p2, p3, p4, p5, p6); }
	void addAttributes(jni::ref<org::xml::sax::Attributes> p1) { return call_method<"addAttributes", void>(p1); }
	void addAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addAttribute", void>(p1, p2); }
	void characters(jni::ref<java::lang::String> p1) { return call_method<"characters", void>(p1); }
	void characters(jni::ref<org::w3c::dom::Node> p1) { return call_method<"characters", void>(p1); }
	void endElement(jni::ref<java::lang::String> p1) { return call_method<"endElement", void>(p1); }
	void startElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"startElement", void>(p1, p2, p3); }
	void startElement(jni::ref<java::lang::String> p1) { return call_method<"startElement", void>(p1); }
	void namespaceAfterStartElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"namespaceAfterStartElement", void>(p1, p2); }
	jboolean startPrefixMapping(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jboolean p3) { return call_method<"startPrefixMapping", jboolean>(p1, p2, p3); }
	void entityReference(jni::ref<java::lang::String> p1) { return call_method<"entityReference", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::serializer::NamespaceMappings> getNamespaceMappings() { return call_method<"getNamespaceMappings", jni::ref<com::sun::org::apache::xml::internal::serializer::NamespaceMappings>>(); }
	jni::ref<java::lang::String> getPrefix(jni::ref<java::lang::String> p1) { return call_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNamespaceURI(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getNamespaceURIFromPrefix(jni::ref<java::lang::String> p1) { return call_method<"getNamespaceURIFromPrefix", jni::ref<java::lang::String>>(p1); }
	void setSourceLocator(jni::ref<javax::xml::transform::SourceLocator> p1) { return call_method<"setSourceLocator", void>(p1); }
	void addUniqueAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return call_method<"addUniqueAttribute", void>(p1, p2, p3); }
	void addXSLAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"addXSLAttribute", void>(p1, p2, p3); }
	void addAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return call_method<"addAttribute", void>(p1, p2, p3, p4, p5); }

protected:

	ExtendedContentHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_EXTENDEDCONTENTHANDLER
