// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelFilter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDPROCESSOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDPROCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd { class XMLDTDProcessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDPROCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDPROCESSOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDPROCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::parser::XMLComponent,
	com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter,
	com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelFilter>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor> new_object() { return base_::new_object(); }
	void reset(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager> p1) { return call_method<"reset", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getRecognizedFeatures() { return call_method<"getRecognizedFeatures", jni::ref<jni::array<java::lang::String>>>(); }
	void setFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setFeature", void>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> getRecognizedProperties() { return call_method<"getRecognizedProperties", jni::ref<jni::array<java::lang::String>>>(); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jni::ref<java::lang::Boolean> getFeatureDefault(jni::ref<java::lang::String> p1) { return call_method<"getFeatureDefault", jni::ref<java::lang::Boolean>>(p1); }
	jni::ref<java::lang::Object> getPropertyDefault(jni::ref<java::lang::String> p1) { return call_method<"getPropertyDefault", jni::ref<java::lang::Object>>(p1); }
	void setDTDHandler(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDHandler> p1) { return call_method<"setDTDHandler", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDHandler> getDTDHandler() { return call_method<"getDTDHandler", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDHandler>>(); }
	void setDTDContentModelHandler(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler> p1) { return call_method<"setDTDContentModelHandler", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler> getDTDContentModelHandler() { return call_method<"getDTDContentModelHandler", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler>>(); }
	void startExternalSubset(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startExternalSubset", void>(p1, p2); }
	void endExternalSubset(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endExternalSubset", void>(p1); }
	void comment(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"comment", void>(p1, p2); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"processingInstruction", void>(p1, p2, p3); }
	void startDTD(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLLocator> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startDTD", void>(p1, p2); }
	void ignoredCharacters(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"ignoredCharacters", void>(p1, p2); }
	void textDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"textDecl", void>(p1, p2, p3); }
	void startParameterEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startParameterEntity", void>(p1, p2, p3, p4); }
	void endParameterEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endParameterEntity", void>(p1, p2); }
	void elementDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"elementDecl", void>(p1, p2, p3); }
	void startAttlist(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startAttlist", void>(p1, p2); }
	void attributeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<jni::array<java::lang::String>> p4, jni::ref<java::lang::String> p5, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p6, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p7, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p8) { return call_method<"attributeDecl", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void endAttlist(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endAttlist", void>(p1); }
	void internalEntityDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"internalEntityDecl", void>(p1, p2, p3, p4); }
	void externalEntityDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"externalEntityDecl", void>(p1, p2, p3); }
	void unparsedEntityDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"unparsedEntityDecl", void>(p1, p2, p3, p4); }
	void notationDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"notationDecl", void>(p1, p2, p3); }
	void startConditional(jshort p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startConditional", void>(p1, p2); }
	void endConditional(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endConditional", void>(p1); }
	void endDTD(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endDTD", void>(p1); }
	void setDTDSource(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource> p1) { return call_method<"setDTDSource", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource> getDTDSource() { return call_method<"getDTDSource", jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource>>(); }
	void setDTDContentModelSource(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource> p1) { return call_method<"setDTDContentModelSource", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource> getDTDContentModelSource() { return call_method<"getDTDContentModelSource", jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource>>(); }
	void startContentModel(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startContentModel", void>(p1, p2); }
	void any(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"any", void>(p1); }
	void empty(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"empty", void>(p1); }
	void startGroup(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"startGroup", void>(p1); }
	void pcdata(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"pcdata", void>(p1); }
	void element(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"element", void>(p1, p2); }
	void separator(jshort p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"separator", void>(p1, p2); }
	void occurrence(jshort p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"occurrence", void>(p1, p2); }
	void endGroup(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endGroup", void>(p1); }
	void endContentModel(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endContentModel", void>(p1); }

protected:

	XMLDTDProcessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDPROCESSOR
