// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSATTRIBUTEGROUPDECL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSATTRIBUTEGROUPDECL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class XSAttributeGroupDecl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSATTRIBUTEGROUPDECL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSATTRIBUTEGROUPDECL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSATTRIBUTEGROUPDECL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition>
{
public:

	jni::ref<java::lang::String> fName() { return get_field<"fName", jni::ref<java::lang::String>>(); }
	void fName(jni::ref<java::lang::String> v) { set_field<"fName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> fTargetNamespace() { return get_field<"fTargetNamespace", jni::ref<java::lang::String>>(); }
	void fTargetNamespace(jni::ref<java::lang::String> v) { set_field<"fTargetNamespace", jni::ref<java::lang::String>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl> fAttributeWC() { return get_field<"fAttributeWC", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl>>(); }
	void fAttributeWC(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl> v) { set_field<"fAttributeWC", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl>>(v); }
	jni::ref<java::lang::String> fIDAttrName() { return get_field<"fIDAttrName", jni::ref<java::lang::String>>(); }
	void fIDAttrName(jni::ref<java::lang::String> v) { set_field<"fIDAttrName", jni::ref<java::lang::String>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> fAnnotations() { return get_field<"fAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	void fAnnotations(jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> v) { set_field<"fAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(v); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> addAttributeUse(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl> p1) { return call_method<"addAttributeUse", jni::ref<java::lang::String>>(p1); }
	void replaceAttributeUse(jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeUse> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl> p2) { return call_method<"replaceAttributeUse", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeUse> getAttributeUse(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttributeUse", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeUse>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeUse> getAttributeUseNoProhibited(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttributeUseNoProhibited", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeUse>>(p1, p2); }
	void removeProhibitedAttrs() { return call_method<"removeProhibitedAttrs", void>(); }
	jni::ref<jni::array<java::lang::Object>> validRestrictionOf(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl> p2) { return call_method<"validRestrictionOf", jni::ref<jni::array<java::lang::Object>>>(p1, p2); }
	void reset() { return call_method<"reset", void>(); }
	jshort getType() { return call_method<"getType", jshort>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAttributeUses() { return call_method<"getAttributeUses", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSWildcard> getAttributeWildcard() { return call_method<"getAttributeWildcard", jni::ref<com::sun::org::apache::xerces::internal::xs::XSWildcard>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAnnotation> getAnnotation() { return call_method<"getAnnotation", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAnnotation>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAnnotations() { return call_method<"getAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem> getNamespaceItem() { return call_method<"getNamespaceItem", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem>>(); }

protected:

	XSAttributeGroupDecl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSATTRIBUTEGROUPDECL