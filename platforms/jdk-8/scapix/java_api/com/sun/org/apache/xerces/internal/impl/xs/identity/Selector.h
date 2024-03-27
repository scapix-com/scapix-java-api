// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_SELECTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_SELECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity { class Selector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/identity/Selector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_SELECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_SELECTOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_SELECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/Selector_XPath.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/Selector_Matcher.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::identity::Selector : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/identity/Selector",
	java::lang::Object>
{
public:

	using XPath = Selector_XPath;
	using Matcher = Selector_Matcher;

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::Selector> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::Selector_XPath> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath> getXPath() { return call_method<"getXPath", jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint> getIDConstraint() { return call_method<"getIDConstraint", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher> createMatcher(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator> p1, jint p2) { return call_method<"createMatcher", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher>>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Selector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_SELECTOR