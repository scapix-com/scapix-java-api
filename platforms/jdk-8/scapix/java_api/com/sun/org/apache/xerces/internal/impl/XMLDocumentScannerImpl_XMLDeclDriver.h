// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl_Driver.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_XMLDECLDRIVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_XMLDECLDRIVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl { class XMLDocumentScannerImpl_XMLDeclDriver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl_XMLDeclDriver>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$XMLDeclDriver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl_Driver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_XMLDECLDRIVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_XMLDECLDRIVER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_XMLDECLDRIVER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl_XMLDeclDriver : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$XMLDeclDriver",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl_Driver>
{
public:

	jint next() { return call_method<"next", jint>(); }

protected:

	XMLDocumentScannerImpl_XMLDeclDriver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_XMLDECLDRIVER
