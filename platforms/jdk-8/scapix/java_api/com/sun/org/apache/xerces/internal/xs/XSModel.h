// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSMODEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xs { class XSModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSModel>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xs/XSModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSMODEL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamespaceItemList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xs::XSModel : public jni::object_base<"com/sun/org/apache/xerces/internal/xs/XSModel",
	java::lang::Object>
{
public:

	jni::ref<com::sun::org::apache::xerces::internal::xs::StringList> getNamespaces() { return call_method<"getNamespaces", jni::ref<com::sun::org::apache::xerces::internal::xs::StringList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList> getNamespaceItems() { return call_method<"getNamespaceItems", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap> getComponents(jshort p1) { return call_method<"getComponents", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap> getComponentsByNamespace(jshort p1, jni::ref<java::lang::String> p2) { return call_method<"getComponentsByNamespace", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAnnotations() { return call_method<"getAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration> getElementDeclaration(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getElementDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration> getAttributeDeclaration(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttributeDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> getTypeDefinition(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getTypeDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition> getAttributeGroup(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttributeGroup", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition> getModelGroupDefinition(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getModelGroupDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration> getNotationDeclaration(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getNotationDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSIDCDefinition> getIDCDefinition(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getIDCDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSIDCDefinition>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getSubstitutionGroup(jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration> p1) { return call_method<"getSubstitutionGroup", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(p1); }

protected:

	XSModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSMODEL