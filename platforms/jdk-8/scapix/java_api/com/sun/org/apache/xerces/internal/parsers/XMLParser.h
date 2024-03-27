// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class XMLParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::XMLParser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/XMLParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLPARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::XMLParser : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/XMLParser",
	java::lang::Object>
{
public:

	jboolean getFeature(jni::ref<java::lang::String> p1) { return call_method<"getFeature", jboolean>(p1); }
	void parse(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p1) { return call_method<"parse", void>(p1); }

protected:

	XMLParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLPARSER
