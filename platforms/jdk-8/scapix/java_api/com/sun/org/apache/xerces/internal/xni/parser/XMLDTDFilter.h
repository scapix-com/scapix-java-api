// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDFILTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser { class XMLDTDFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDFILTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter : public jni::object_base<"com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::XMLDTDHandler,
	com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource>
{
public:


protected:

	XMLDTDFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_PARSER_XMLDTDFILTER