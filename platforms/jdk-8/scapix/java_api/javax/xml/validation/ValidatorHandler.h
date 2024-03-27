// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATORHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATORHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::validation { class ValidatorHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::validation::ValidatorHandler>
{
	static constexpr fixed_string class_name = "javax/xml/validation/ValidatorHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::ContentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATORHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATORHANDLER)
#define SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATORHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/validation/TypeInfoProvider.h>
#include <scapix/java_api/org/w3c/dom/ls/LSResourceResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::validation::ValidatorHandler : public jni::object_base<"javax/xml/validation/ValidatorHandler",
	java::lang::Object,
	org::xml::sax::ContentHandler>
{
public:

	void setContentHandler(jni::ref<org::xml::sax::ContentHandler> p1) { return call_method<"setContentHandler", void>(p1); }
	jni::ref<org::xml::sax::ContentHandler> getContentHandler() { return call_method<"getContentHandler", jni::ref<org::xml::sax::ContentHandler>>(); }
	void setErrorHandler(jni::ref<org::xml::sax::ErrorHandler> p1) { return call_method<"setErrorHandler", void>(p1); }
	jni::ref<org::xml::sax::ErrorHandler> getErrorHandler() { return call_method<"getErrorHandler", jni::ref<org::xml::sax::ErrorHandler>>(); }
	void setResourceResolver(jni::ref<org::w3c::dom::ls::LSResourceResolver> p1) { return call_method<"setResourceResolver", void>(p1); }
	jni::ref<org::w3c::dom::ls::LSResourceResolver> getResourceResolver() { return call_method<"getResourceResolver", jni::ref<org::w3c::dom::ls::LSResourceResolver>>(); }
	jni::ref<javax::xml::validation::TypeInfoProvider> getTypeInfoProvider() { return call_method<"getTypeInfoProvider", jni::ref<javax::xml::validation::TypeInfoProvider>>(); }
	jboolean getFeature(jni::ref<java::lang::String> p1) { return call_method<"getFeature", jboolean>(p1); }
	void setFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setFeature", void>(p1, p2); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1); }

protected:

	ValidatorHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATORHANDLER
