// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractIDConstraintTraverser.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDKEYREFTRAVERSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDKEYREFTRAVERSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers { class XSDKeyrefTraverser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDKeyrefTraverser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDKeyrefTraverser";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDKEYREFTRAVERSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDKEYREFTRAVERSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDKEYREFTRAVERSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDKeyrefTraverser : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDKeyrefTraverser",
	com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDKeyrefTraverser> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker> p2) { return base_::new_object(p1, p2); }

protected:

	XSDKeyrefTraverser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDKEYREFTRAVERSER
