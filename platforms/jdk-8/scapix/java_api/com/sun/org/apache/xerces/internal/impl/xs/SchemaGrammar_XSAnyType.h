// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_XSANYTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_XSANYTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class SchemaGrammar_XSAnyType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar_XSAnyType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$XSAnyType";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_XSANYTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_XSANYTYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_XSANYTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar_XSAnyType : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$XSAnyType",
	com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar_XSAnyType> new_object() { return base_::new_object(); }
	void setValues(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> p3, jshort p4, jshort p5, jshort p6, jshort p7, jboolean p8, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl> p9, jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> p10, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl> p11) { return call_method<"setValues", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	void setName(jni::ref<java::lang::String> p1) { return call_method<"setName", void>(p1); }
	void setIsAbstractType() { return call_method<"setIsAbstractType", void>(); }
	void setContainsTypeID() { return call_method<"setContainsTypeID", void>(); }
	void setIsAnonymous() { return call_method<"setIsAnonymous", void>(); }
	void reset() { return call_method<"reset", void>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAnnotations() { return call_method<"getAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem> getNamespaceItem() { return call_method<"getNamespaceItem", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem>>(); }

protected:

	SchemaGrammar_XSAnyType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_XSANYTYPE