// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_KEYREF_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_KEYREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity { class KeyRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity::KeyRef>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/identity/KeyRef";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_KEYREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_KEYREF)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_KEYREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::identity::KeyRef : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/identity/KeyRef",
	com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::KeyRef> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey> getKey() { return call_method<"getKey", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSIDCDefinition> getRefKey() { return call_method<"getRefKey", jni::ref<com::sun::org::apache::xerces::internal::xs::XSIDCDefinition>>(); }

protected:

	KeyRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_IDENTITY_KEYREF
