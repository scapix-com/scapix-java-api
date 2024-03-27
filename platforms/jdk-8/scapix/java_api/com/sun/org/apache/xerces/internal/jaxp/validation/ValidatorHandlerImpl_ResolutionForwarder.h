// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ext/EntityResolver2.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_VALIDATORHANDLERIMPL_RESOLUTIONFORWARDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_VALIDATORHANDLERIMPL_RESOLUTIONFORWARDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::validation { class ValidatorHandlerImpl_ResolutionForwarder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl_ResolutionForwarder>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$ResolutionForwarder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::ext::EntityResolver2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_VALIDATORHANDLERIMPL_RESOLUTIONFORWARDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_VALIDATORHANDLERIMPL_RESOLUTIONFORWARDER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_VALIDATORHANDLERIMPL_RESOLUTIONFORWARDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/ls/LSResourceResolver.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl_ResolutionForwarder : public jni::object_base<"com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$ResolutionForwarder",
	java::lang::Object,
	org::xml::sax::ext::EntityResolver2>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl_ResolutionForwarder> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl_ResolutionForwarder> new_object(jni::ref<org::w3c::dom::ls::LSResourceResolver> p1) { return base_::new_object(p1); }
	void setEntityResolver(jni::ref<org::w3c::dom::ls::LSResourceResolver> p1) { return call_method<"setEntityResolver", void>(p1); }
	jni::ref<org::w3c::dom::ls::LSResourceResolver> getEntityResolver() { return call_method<"getEntityResolver", jni::ref<org::w3c::dom::ls::LSResourceResolver>>(); }
	jni::ref<org::xml::sax::InputSource> getExternalSubset(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getExternalSubset", jni::ref<org::xml::sax::InputSource>>(p1, p2); }
	jni::ref<org::xml::sax::InputSource> resolveEntity(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_method<"resolveEntity", jni::ref<org::xml::sax::InputSource>>(p1, p2, p3, p4); }
	jni::ref<org::xml::sax::InputSource> resolveEntity(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"resolveEntity", jni::ref<org::xml::sax::InputSource>>(p1, p2); }

protected:

	ValidatorHandlerImpl_ResolutionForwarder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_VALIDATORHANDLERIMPL_RESOLUTIONFORWARDER
