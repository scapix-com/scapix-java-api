// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::helpers { class XMLReaderFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::helpers::XMLReaderFactory>
{
	static constexpr fixed_string class_name = "org/xml/sax/helpers/XMLReaderFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERFACTORY)
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::helpers::XMLReaderFactory : public jni::object_base<"org/xml/sax/helpers/XMLReaderFactory",
	java::lang::Object>
{
public:

	static jni::ref<org::xml::sax::XMLReader> createXMLReader() { return call_static_method<"createXMLReader", jni::ref<org::xml::sax::XMLReader>>(); }
	static jni::ref<org::xml::sax::XMLReader> createXMLReader(jni::ref<java::lang::String> className) { return call_static_method<"createXMLReader", jni::ref<org::xml::sax::XMLReader>>(className); }

protected:

	XMLReaderFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_XMLREADERFACTORY