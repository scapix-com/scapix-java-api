// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SCHEMACONTENTHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SCHEMACONTENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers { class SchemaContentHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers::SchemaContentHandler>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/traversers/SchemaContentHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::ContentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SCHEMACONTENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SCHEMACONTENTHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SCHEMACONTENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xs::traversers::SchemaContentHandler : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/traversers/SchemaContentHandler",
	java::lang::Object,
	org::xml::sax::ContentHandler>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::SchemaContentHandler> new_object() { return base_::new_object(); }
	jni::ref<org::w3c::dom::Document> getDocument() { return call_method<"getDocument", jni::ref<org::w3c::dom::Document>>(); }
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
	void reset(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser> p1, jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p2, jboolean p3, jboolean p4) { return call_method<"reset", void>(p1, p2, p3, p4); }

protected:

	SchemaContentHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_SCHEMACONTENTHANDLER