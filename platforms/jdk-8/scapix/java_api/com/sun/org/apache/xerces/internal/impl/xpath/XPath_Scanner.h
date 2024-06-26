// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_SCANNER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_SCANNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath { class XPath_Scanner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::XPath_Scanner>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xpath/XPath$Scanner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_SCANNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_SCANNER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_SCANNER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/XPath_Tokens.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xpath::XPath_Scanner : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xpath/XPath$Scanner",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath_Scanner> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return base_::new_object(p1); }
	jboolean scanExpr(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath_Tokens> p2, jni::ref<java::lang::String> p3, jint p4, jint p5) { return call_method<"scanExpr", jboolean>(p1, p2, p3, p4, p5); }

protected:

	XPath_Scanner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_SCANNER
