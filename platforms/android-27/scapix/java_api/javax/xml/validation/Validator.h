// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATOR_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::validation { class Validator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::validation::Validator>
{
	static constexpr fixed_string class_name = "javax/xml/validation/Validator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATOR)
#define SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/Result.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#include <scapix/java_api/org/w3c/dom/ls/LSResourceResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::validation::Validator : public jni::object_base<"javax/xml/validation/Validator",
	java::lang::Object>
{
public:

	void reset() { return call_method<"reset", void>(); }
	void validate(jni::ref<javax::xml::transform::Source> source) { return call_method<"validate", void>(source); }
	void validate(jni::ref<javax::xml::transform::Source> p1, jni::ref<javax::xml::transform::Result> p2) { return call_method<"validate", void>(p1, p2); }
	void setErrorHandler(jni::ref<org::xml::sax::ErrorHandler> p1) { return call_method<"setErrorHandler", void>(p1); }
	jni::ref<org::xml::sax::ErrorHandler> getErrorHandler() { return call_method<"getErrorHandler", jni::ref<org::xml::sax::ErrorHandler>>(); }
	void setResourceResolver(jni::ref<org::w3c::dom::ls::LSResourceResolver> p1) { return call_method<"setResourceResolver", void>(p1); }
	jni::ref<org::w3c::dom::ls::LSResourceResolver> getResourceResolver() { return call_method<"getResourceResolver", jni::ref<org::w3c::dom::ls::LSResourceResolver>>(); }
	jboolean getFeature(jni::ref<java::lang::String> name) { return call_method<"getFeature", jboolean>(name); }
	void setFeature(jni::ref<java::lang::String> name, jboolean value) { return call_method<"setFeature", void>(name, value); }
	void setProperty(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> object) { return call_method<"setProperty", void>(name, object); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> name) { return call_method<"getProperty", jni::ref<java::lang::Object>>(name); }

protected:

	Validator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_VALIDATION_VALIDATOR
