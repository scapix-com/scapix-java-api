// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_ERRORHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_ERRORHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax { class ErrorHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::ErrorHandler>
{
	static constexpr fixed_string class_name = "org/xml/sax/ErrorHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_ERRORHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_ERRORHANDLER)
#define SCAPIX_JAVA_API_ORG_XML_SAX_ERRORHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/xml/sax/SAXParseException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::ErrorHandler : public jni::object_base<"org/xml/sax/ErrorHandler",
	java::lang::Object>
{
public:

	void warning(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"warning", void>(p1); }
	void error(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"error", void>(p1); }
	void fatalError(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"fatalError", void>(p1); }

protected:

	ErrorHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_ERRORHANDLER
