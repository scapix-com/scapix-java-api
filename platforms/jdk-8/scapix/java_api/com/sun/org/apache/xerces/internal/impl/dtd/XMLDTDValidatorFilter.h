// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDVALIDATORFILTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDVALIDATORFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd { class XMLDTDValidatorFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDVALIDATORFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDVALIDATORFILTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDVALIDATORFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter>
{
public:

	jboolean hasGrammar() { return call_method<"hasGrammar", jboolean>(); }
	jboolean validate() { return call_method<"validate", jboolean>(); }

protected:

	XMLDTDValidatorFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLDTDVALIDATORFILTER
