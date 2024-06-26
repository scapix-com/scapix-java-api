// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_XMLFILTER_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_XMLFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax { class XMLFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::XMLFilter>
{
	static constexpr fixed_string class_name = "org/xml/sax/XMLFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::XMLReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_XMLFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_XMLFILTER)
#define SCAPIX_JAVA_API_ORG_XML_SAX_XMLFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::XMLFilter : public jni::object_base<"org/xml/sax/XMLFilter",
	java::lang::Object,
	org::xml::sax::XMLReader>
{
public:

	void setParent(jni::ref<org::xml::sax::XMLReader> p1) { return call_method<"setParent", void>(p1); }
	jni::ref<org::xml::sax::XMLReader> getParent() { return call_method<"getParent", jni::ref<org::xml::sax::XMLReader>>(); }

protected:

	XMLFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_XMLFILTER
