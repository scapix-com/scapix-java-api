// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERFACTORY_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::helpers { class ParserFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::helpers::ParserFactory>
{
	static constexpr fixed_string class_name = "org/xml/sax/helpers/ParserFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERFACTORY)
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/Parser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::helpers::ParserFactory : public jni::object_base<"org/xml/sax/helpers/ParserFactory",
	java::lang::Object>
{
public:

	static jni::ref<org::xml::sax::Parser> makeParser() { return call_static_method<"makeParser", jni::ref<org::xml::sax::Parser>>(); }
	static jni::ref<org::xml::sax::Parser> makeParser(jni::ref<java::lang::String> className) { return call_static_method<"makeParser", jni::ref<org::xml::sax::Parser>>(className); }

protected:

	ParserFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERFACTORY