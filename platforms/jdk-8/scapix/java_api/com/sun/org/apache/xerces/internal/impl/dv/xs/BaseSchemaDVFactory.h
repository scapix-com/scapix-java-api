// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_BASESCHEMADVFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_BASESCHEMADVFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs { class BaseSchemaDVFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs::BaseSchemaDVFactory>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dv/xs/BaseSchemaDVFactory";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_BASESCHEMADVFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_BASESCHEMADVFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_BASESCHEMADVFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dv::xs::BaseSchemaDVFactory : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dv/xs/BaseSchemaDVFactory",
	com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dv::xs::BaseSchemaDVFactory> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> createTypeRestriction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jshort p3, jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> p4, jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> p5) { return call_method<"createTypeRestriction", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> createTypeList(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jshort p3, jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> p4, jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> p5) { return call_method<"createTypeList", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> createTypeUnion(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jshort p3, jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>> p4, jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> p5) { return call_method<"createTypeUnion", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(p1, p2, p3, p4, p5); }
	void setDeclPool(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool> p1) { return call_method<"setDeclPool", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl> newXSSimpleTypeDecl() { return call_method<"newXSSimpleTypeDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>>(); }

protected:

	BaseSchemaDVFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_BASESCHEMADVFACTORY