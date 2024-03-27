// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDSOURCE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser { class XMLDTDSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDSOURCE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource : public jni::object_base<"com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource",
	java::lang::Object>
{
public:

	void setDTDHandler(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDHandler> p1) { return call_method<"setDTDHandler", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDHandler> getDTDHandler() { return call_method<"getDTDHandler", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLDTDHandler>>(); }

protected:

	XMLDTDSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDSOURCE
