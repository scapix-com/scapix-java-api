// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/jaxp/TeeXMLDocumentFilterImpl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPVALIDATORCOMPONENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPVALIDATORCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::jaxp { class JAXPValidatorComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::TeeXMLDocumentFilterImpl, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPVALIDATORCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPVALIDATORCOMPONENT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPVALIDATORCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/validation/ValidatorHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent : public jni::object_base<"com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent",
	com::sun::org::apache::xerces::internal::jaxp::TeeXMLDocumentFilterImpl,
	com::sun::org::apache::xerces::internal::xni::parser::XMLComponent>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent> new_object(jni::ref<javax::xml::validation::ValidatorHandler> p1) { return base_::new_object(p1); }
	void startElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"startElement", void>(p1, p2, p3); }
	void endElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endElement", void>(p1, p2); }
	void emptyElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"emptyElement", void>(p1, p2, p3); }
	void characters(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"characters", void>(p1, p2); }
	void ignorableWhitespace(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"ignorableWhitespace", void>(p1, p2); }
	void reset(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager> p1) { return call_method<"reset", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getRecognizedFeatures() { return call_method<"getRecognizedFeatures", jni::ref<jni::array<java::lang::String>>>(); }
	void setFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setFeature", void>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> getRecognizedProperties() { return call_method<"getRecognizedProperties", jni::ref<jni::array<java::lang::String>>>(); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jni::ref<java::lang::Boolean> getFeatureDefault(jni::ref<java::lang::String> p1) { return call_method<"getFeatureDefault", jni::ref<java::lang::Boolean>>(p1); }
	jni::ref<java::lang::Object> getPropertyDefault(jni::ref<java::lang::String> p1) { return call_method<"getPropertyDefault", jni::ref<java::lang::Object>>(p1); }

protected:

	JAXPValidatorComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPVALIDATORCOMPONENT
