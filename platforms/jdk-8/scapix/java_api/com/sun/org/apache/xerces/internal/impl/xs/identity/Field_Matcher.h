// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_FIELD_MATCHER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_FIELD_MATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity { class Field_Matcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity::Field_Matcher>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/identity/Field$Matcher";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_FIELD_MATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_FIELD_MATCHER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_FIELD_MATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/Field_XPath.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::identity::Field_Matcher : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/identity/Field$Matcher",
	com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::Field_Matcher> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::Field> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::Field_XPath> p2, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore> p3) { return base_::new_object(p1, p2, p3); }

protected:

	Field_Matcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_FIELD_MATCHER