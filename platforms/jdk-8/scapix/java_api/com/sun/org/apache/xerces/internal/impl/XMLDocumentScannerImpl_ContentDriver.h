// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl_FragmentContentDriver.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_CONTENTDRIVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_CONTENTDRIVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl { class XMLDocumentScannerImpl_ContentDriver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl_ContentDriver>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl_FragmentContentDriver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_CONTENTDRIVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_CONTENTDRIVER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_CONTENTDRIVER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl_ContentDriver : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver",
	com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl_FragmentContentDriver>
{
public:


protected:

	XMLDocumentScannerImpl_ContentDriver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XMLDOCUMENTSCANNERIMPL_CONTENTDRIVER