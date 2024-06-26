// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SAX2XNI_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SAX2XNI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class SAX2XNI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::SAX2XNI>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/SAX2XNI";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::ContentHandler, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SAX2XNI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SAX2XNI)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SAX2XNI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::SAX2XNI : public jni::object_base<"com/sun/org/apache/xerces/internal/util/SAX2XNI",
	java::lang::Object,
	org::xml::sax::ContentHandler,
	com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::SAX2XNI> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler> p1) { return base_::new_object(p1); }
	void setDocumentHandler(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler> p1) { return call_method<"setDocumentHandler", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler> getDocumentHandler() { return call_method<"getDocumentHandler", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler>>(); }
	void startDocument() { return call_method<"startDocument", void>(); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void startElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<org::xml::sax::Attributes> p4) { return call_method<"startElement", void>(p1, p2, p3, p4); }
	void endElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"endElement", void>(p1, p2, p3); }
	void characters(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"characters", void>(p1, p2, p3); }
	void ignorableWhitespace(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"ignorableWhitespace", void>(p1, p2, p3); }
	void startPrefixMapping(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"startPrefixMapping", void>(p1, p2); }
	void endPrefixMapping(jni::ref<java::lang::String> p1) { return call_method<"endPrefixMapping", void>(p1); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"processingInstruction", void>(p1, p2); }
	void skippedEntity(jni::ref<java::lang::String> p1) { return call_method<"skippedEntity", void>(p1); }
	void setDocumentLocator(jni::ref<org::xml::sax::Locator> p1) { return call_method<"setDocumentLocator", void>(p1); }

protected:

	SAX2XNI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SAX2XNI
