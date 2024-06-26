// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_TEEXMLDOCUMENTFILTERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_TEEXMLDOCUMENTFILTERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class TeeXMLDocumentFilterImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::TeeXMLDocumentFilterImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/TeeXMLDocumentFilterImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_TEEXMLDOCUMENTFILTERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_TEEXMLDOCUMENTFILTERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_TEEXMLDOCUMENTFILTERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::TeeXMLDocumentFilterImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/util/TeeXMLDocumentFilterImpl",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::TeeXMLDocumentFilterImpl> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler> getSide() { return call_method<"getSide", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler>>(); }
	void setSide(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler> p1) { return call_method<"setSide", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource> getDocumentSource() { return call_method<"getDocumentSource", jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource>>(); }
	void setDocumentSource(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource> p1) { return call_method<"setDocumentSource", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler> getDocumentHandler() { return call_method<"getDocumentHandler", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler>>(); }
	void setDocumentHandler(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler> p1) { return call_method<"setDocumentHandler", void>(p1); }
	void characters(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"characters", void>(p1, p2); }
	void comment(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"comment", void>(p1, p2); }
	void doctypeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"doctypeDecl", void>(p1, p2, p3, p4); }
	void emptyElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"emptyElement", void>(p1, p2, p3); }
	void endCDATA(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endCDATA", void>(p1); }
	void endDocument(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endDocument", void>(p1); }
	void endElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endElement", void>(p1, p2); }
	void endGeneralEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endGeneralEntity", void>(p1, p2); }
	void ignorableWhitespace(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"ignorableWhitespace", void>(p1, p2); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"processingInstruction", void>(p1, p2, p3); }
	void startCDATA(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"startCDATA", void>(p1); }
	void startDocument(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLLocator> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::NamespaceContext> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startDocument", void>(p1, p2, p3, p4); }
	void startElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"startElement", void>(p1, p2, p3); }
	void startGeneralEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startGeneralEntity", void>(p1, p2, p3, p4); }
	void textDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"textDecl", void>(p1, p2, p3); }
	void xmlDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"xmlDecl", void>(p1, p2, p3, p4); }

protected:

	TeeXMLDocumentFilterImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_TEEXMLDOCUMENTFILTERIMPL
