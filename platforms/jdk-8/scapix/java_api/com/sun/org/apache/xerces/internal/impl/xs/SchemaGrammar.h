// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class SchemaGrammar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar_BuiltinSchemaGrammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar_Schema4Annotations.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar,
	com::sun::org::apache::xerces::internal::xs::XSNamespaceItem>
{
public:

	using BuiltinSchemaGrammar = SchemaGrammar_BuiltinSchemaGrammar;
	using Schema4Annotations = SchemaGrammar_Schema4Annotations;

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl> fAnyType() { return get_static_field<"fAnyType", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar_BuiltinSchemaGrammar> SG_SchemaNS() { return get_static_field<"SG_SchemaNS", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar_BuiltinSchemaGrammar>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> fAnySimpleType() { return get_static_field<"fAnySimpleType", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar_BuiltinSchemaGrammar> SG_XSI() { return get_static_field<"SG_XSI", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar_BuiltinSchemaGrammar>>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar> new_object(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSDDescription> p2, jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> getGrammarDescription() { return call_method<"getGrammarDescription", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription>>(); }
	jboolean isNamespaceAware() { return call_method<"isNamespaceAware", jboolean>(); }
	void setImportedGrammars(jni::ref<java::util::List> p1) { return call_method<"setImportedGrammars", void>(p1); }
	jni::ref<java::util::List> getImportedGrammars() { return call_method<"getImportedGrammars", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getTargetNamespace() { return call_method<"getTargetNamespace", jni::ref<java::lang::String>>(); }
	void addGlobalAttributeDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl> p1) { return call_method<"addGlobalAttributeDecl", void>(p1); }
	void addGlobalAttributeDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalAttributeDecl", void>(p1, p2); }
	void addGlobalAttributeGroupDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl> p1) { return call_method<"addGlobalAttributeGroupDecl", void>(p1); }
	void addGlobalAttributeGroupDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalAttributeGroupDecl", void>(p1, p2); }
	void addGlobalElementDeclAll(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> p1) { return call_method<"addGlobalElementDeclAll", void>(p1); }
	void addGlobalElementDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> p1) { return call_method<"addGlobalElementDecl", void>(p1); }
	void addGlobalElementDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalElementDecl", void>(p1, p2); }
	void addGlobalGroupDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl> p1) { return call_method<"addGlobalGroupDecl", void>(p1); }
	void addGlobalGroupDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalGroupDecl", void>(p1, p2); }
	void addGlobalNotationDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl> p1) { return call_method<"addGlobalNotationDecl", void>(p1); }
	void addGlobalNotationDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalNotationDecl", void>(p1, p2); }
	void addGlobalTypeDecl(jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> p1) { return call_method<"addGlobalTypeDecl", void>(p1); }
	void addGlobalTypeDecl(jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalTypeDecl", void>(p1, p2); }
	void addGlobalComplexTypeDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl> p1) { return call_method<"addGlobalComplexTypeDecl", void>(p1); }
	void addGlobalComplexTypeDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalComplexTypeDecl", void>(p1, p2); }
	void addGlobalSimpleTypeDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> p1) { return call_method<"addGlobalSimpleTypeDecl", void>(p1); }
	void addGlobalSimpleTypeDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> p1, jni::ref<java::lang::String> p2) { return call_method<"addGlobalSimpleTypeDecl", void>(p1, p2); }
	void addIDConstraintDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint> p2) { return call_method<"addIDConstraintDecl", void>(p1, p2); }
	void addIDConstraintDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint> p2, jni::ref<java::lang::String> p3) { return call_method<"addIDConstraintDecl", void>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl> getGlobalAttributeDecl(jni::ref<java::lang::String> p1) { return call_method<"getGlobalAttributeDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl> getGlobalAttributeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getGlobalAttributeDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl> getGlobalAttributeGroupDecl(jni::ref<java::lang::String> p1) { return call_method<"getGlobalAttributeGroupDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl> getGlobalAttributeGroupDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getGlobalAttributeGroupDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> getGlobalElementDecl(jni::ref<java::lang::String> p1) { return call_method<"getGlobalElementDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl> getGlobalElementDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getGlobalElementDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl> getGlobalGroupDecl(jni::ref<java::lang::String> p1) { return call_method<"getGlobalGroupDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl> getGlobalGroupDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getGlobalGroupDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl> getGlobalNotationDecl(jni::ref<java::lang::String> p1) { return call_method<"getGlobalNotationDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl> getGlobalNotationDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getGlobalNotationDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> getGlobalTypeDecl(jni::ref<java::lang::String> p1) { return call_method<"getGlobalTypeDecl", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> getGlobalTypeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getGlobalTypeDecl", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint> getIDConstraintDecl(jni::ref<java::lang::String> p1) { return call_method<"getIDConstraintDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint> getIDConstraintDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getIDConstraintDecl", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>>(p1, p2); }
	jboolean hasIDConstraints() { return call_method<"hasIDConstraints", jboolean>(); }
	void addComplexTypeDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator> p2) { return call_method<"addComplexTypeDecl", void>(p1, p2); }
	void addRedefinedGroupDecl(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl> p2, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator> p3) { return call_method<"addRedefinedGroupDecl", void>(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar> getS4SGrammar(jshort p1) { return call_static_method<"getS4SGrammar", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>>(p1); }
	void addDocument(jni::ref<java::lang::Object> p1, jni::ref<java::lang::String> p2) { return call_method<"addDocument", void>(p1, p2); }
	void removeDocument(jint p1) { return call_method<"removeDocument", void>(p1); }
	jni::ref<java::lang::String> getSchemaNamespace() { return call_method<"getSchemaNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap> getComponents(jshort p1) { return call_method<"getComponents", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamedMap>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList> getComponentsExt(jshort p1) { return call_method<"getComponentsExt", jni::ref<com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList>>(p1); }
	void resetComponents() { return call_method<"resetComponents", void>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> getTypeDefinition(jni::ref<java::lang::String> p1) { return call_method<"getTypeDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration> getAttributeDeclaration(jni::ref<java::lang::String> p1) { return call_method<"getAttributeDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration> getElementDeclaration(jni::ref<java::lang::String> p1) { return call_method<"getElementDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition> getAttributeGroup(jni::ref<java::lang::String> p1) { return call_method<"getAttributeGroup", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition> getModelGroupDefinition(jni::ref<java::lang::String> p1) { return call_method<"getModelGroupDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration> getNotationDeclaration(jni::ref<java::lang::String> p1) { return call_method<"getNotationDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSIDCDefinition> getIDCDefinition(jni::ref<java::lang::String> p1) { return call_method<"getIDCDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSIDCDefinition>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::StringList> getDocumentLocations() { return call_method<"getDocumentLocations", jni::ref<com::sun::org::apache::xerces::internal::xs::StringList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel> toXSModel() { return call_method<"toXSModel", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel> toXSModel(jni::ref<jni::array<com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar>> p1) { return call_method<"toXSModel", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAnnotations() { return call_method<"getAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	void addAnnotation(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl> p1) { return call_method<"addAnnotation", void>(p1); }
	void setImmutable(jboolean p1) { return call_method<"setImmutable", void>(p1); }
	jboolean isImmutable() { return call_method<"isImmutable", jboolean>(); }

protected:

	SchemaGrammar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMAGRAMMAR
