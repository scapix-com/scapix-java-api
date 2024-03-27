// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLPULLPARSERCONFIGURATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLPULLPARSERCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser { class XMLPullParserConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLPULLPARSERCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLPULLPARSERCONFIGURATION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLPULLPARSERCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration : public jni::object_base<"com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration>
{
public:

	void setInputSource(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p1) { return call_method<"setInputSource", void>(p1); }
	jboolean parse(jboolean p1) { return call_method<"parse", jboolean>(p1); }
	void cleanup() { return call_method<"cleanup", void>(); }

protected:

	XMLPullParserConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLPULLPARSERCONFIGURATION