// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_PARSERS_SAXPARSERFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_PARSERS_SAXPARSERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::parsers { class SAXParserFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::parsers::SAXParserFactory>
{
	static constexpr fixed_string class_name = "javax/xml/parsers/SAXParserFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_PARSERS_SAXPARSERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_PARSERS_SAXPARSERFACTORY)
#define SCAPIX_JAVA_API_JAVAX_XML_PARSERS_SAXPARSERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/parsers/SAXParser.h>
#include <scapix/java_api/javax/xml/validation/Schema.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::parsers::SAXParserFactory : public jni::object_base<"javax/xml/parsers/SAXParserFactory",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::parsers::SAXParserFactory> newInstance() { return call_static_method<"newInstance", jni::ref<javax::xml::parsers::SAXParserFactory>>(); }
	static jni::ref<javax::xml::parsers::SAXParserFactory> newInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::ClassLoader> p2) { return call_static_method<"newInstance", jni::ref<javax::xml::parsers::SAXParserFactory>>(p1, p2); }
	jni::ref<javax::xml::parsers::SAXParser> newSAXParser() { return call_method<"newSAXParser", jni::ref<javax::xml::parsers::SAXParser>>(); }
	void setNamespaceAware(jboolean p1) { return call_method<"setNamespaceAware", void>(p1); }
	void setValidating(jboolean p1) { return call_method<"setValidating", void>(p1); }
	jboolean isNamespaceAware() { return call_method<"isNamespaceAware", jboolean>(); }
	jboolean isValidating() { return call_method<"isValidating", jboolean>(); }
	void setFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setFeature", void>(p1, p2); }
	jboolean getFeature(jni::ref<java::lang::String> p1) { return call_method<"getFeature", jboolean>(p1); }
	jni::ref<javax::xml::validation::Schema> getSchema() { return call_method<"getSchema", jni::ref<javax::xml::validation::Schema>>(); }
	void setSchema(jni::ref<javax::xml::validation::Schema> p1) { return call_method<"setSchema", void>(p1); }
	void setXIncludeAware(jboolean p1) { return call_method<"setXIncludeAware", void>(p1); }
	jboolean isXIncludeAware() { return call_method<"isXIncludeAware", jboolean>(); }

protected:

	SAXParserFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_PARSERS_SAXPARSERFACTORY
