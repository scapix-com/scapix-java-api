// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSELEMENTDECL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSELEMENTDECL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class XSElementDecl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSELEMENTDECL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSELEMENTDECL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSELEMENTDECL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::XSElementDeclaration>
{
public:

	static jshort SCOPE_ABSENT() { return get_static_field<"SCOPE_ABSENT", jshort>(); }
	static jshort SCOPE_GLOBAL() { return get_static_field<"SCOPE_GLOBAL", jshort>(); }
	static jshort SCOPE_LOCAL() { return get_static_field<"SCOPE_LOCAL", jshort>(); }
	jni::ref<java::lang::String> fName() { return get_field<"fName", jni::ref<java::lang::String>>(); }
	void fName(jni::ref<java::lang::String> v) { set_field<"fName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> fTargetNamespace() { return get_field<"fTargetNamespace", jni::ref<java::lang::String>>(); }
	void fTargetNamespace(jni::ref<java::lang::String> v) { set_field<"fTargetNamespace", jni::ref<java::lang::String>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> fType() { return get_field<"fType", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(); }
	void fType(jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> v) { set_field<"fType", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::QName> fUnresolvedTypeName() { return get_field<"fUnresolvedTypeName", jni::ref<com::sun::org::apache::xerces::internal::xni::QName>>(); }
	void fUnresolvedTypeName(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> v) { set_field<"fUnresolvedTypeName", jni::ref<com::sun::org::apache::xerces::internal::xni::QName>>(v); }
	jshort fScope() { return get_field<"fScope", jshort>(); }
	void fScope(jshort v) { set_field<"fScope", jshort>(v); }
	jshort fBlock() { return get_field<"fBlock", jshort>(); }
	void fBlock(jshort v) { set_field<"fBlock", jshort>(v); }
	jshort fFinal() { return get_field<"fFinal", jshort>(); }
	void fFinal(jshort v) { set_field<"fFinal", jshort>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> fAnnotations() { return get_field<"fAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	void fAnnotations(jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> v) { set_field<"fAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo> fDefault() { return get_field<"fDefault", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo>>(); }
	void fDefault(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo> v) { set_field<"fDefault", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> fSubGroup() { return get_field<"fSubGroup", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>>(); }
	void fSubGroup(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> v) { set_field<"fSubGroup", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>>(v); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> new_object() { return base_::new_object(); }
	void setConstraintType(jshort p1) { return call_method<"setConstraintType", void>(p1); }
	void setIsNillable() { return call_method<"setIsNillable", void>(); }
	void setIsAbstract() { return call_method<"setIsAbstract", void>(); }
	void setIsGlobal() { return call_method<"setIsGlobal", void>(); }
	void setIsLocal(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl> p1) { return call_method<"setIsLocal", void>(p1); }
	void addIDConstraint(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint> p1) { return call_method<"addIDConstraint", void>(p1); }
	jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>> getIDConstraints() { return call_method<"getIDConstraints", jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	void reset() { return call_method<"reset", void>(); }
	jshort getType() { return call_method<"getType", jshort>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> getTypeDefinition() { return call_method<"getTypeDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(); }
	jshort getScope() { return call_method<"getScope", jshort>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition> getEnclosingCTDefinition() { return call_method<"getEnclosingCTDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition>>(); }
	jshort getConstraintType() { return call_method<"getConstraintType", jshort>(); }
	jni::ref<java::lang::String> getConstraintValue() { return call_method<"getConstraintValue", jni::ref<java::lang::String>>(); }
	jboolean getNillable() { return call_method<"getNillable", jboolean>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap> getIdentityConstraints() { return call_method<"getIdentityConstraints", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration> getSubstitutionGroupAffiliation() { return call_method<"getSubstitutionGroupAffiliation", jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration>>(); }
	jboolean isSubstitutionGroupExclusion(jshort p1) { return call_method<"isSubstitutionGroupExclusion", jboolean>(p1); }
	jshort getSubstitutionGroupExclusions() { return call_method<"getSubstitutionGroupExclusions", jshort>(); }
	jboolean isDisallowedSubstitution(jshort p1) { return call_method<"isDisallowedSubstitution", jboolean>(p1); }
	jshort getDisallowedSubstitutions() { return call_method<"getDisallowedSubstitutions", jshort>(); }
	jboolean getAbstract() { return call_method<"getAbstract", jboolean>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAnnotation> getAnnotation() { return call_method<"getAnnotation", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAnnotation>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAnnotations() { return call_method<"getAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem> getNamespaceItem() { return call_method<"getNamespaceItem", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem>>(); }
	jni::ref<java::lang::Object> getActualVC() { return call_method<"getActualVC", jni::ref<java::lang::Object>>(); }
	jshort getActualVCType() { return call_method<"getActualVCType", jshort>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList> getItemValueTypes() { return call_method<"getItemValueTypes", jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSValue> getValueConstraintValue() { return call_method<"getValueConstraintValue", jni::ref<com::sun::org::apache::xerces::internal::xs::XSValue>>(); }

protected:

	XSElementDecl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSELEMENTDECL