// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers { class XSDHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/org/w3c/dom/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ENTITY_RESOLVER() { return get_static_field<"ENTITY_RESOLVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ERROR_REPORTER() { return get_static_field<"ERROR_REPORTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XMLGRAMMAR_POOL() { return get_static_field<"XMLGRAMMAR_POOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYMBOL_TABLE() { return get_static_field<"SYMBOL_TABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REDEF_IDENTIFIER() { return get_static_field<"REDEF_IDENTIFIER", jni::ref<java::lang::String>>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar> parseSchema(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSDDescription> p2, jni::ref<java::util::Map> p3) { return call_method<"parseSchema", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>>(p1, p2, p3); }
	jni::ref<java::lang::String> schemaDocument2SystemId(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo> p1) { return call_method<"schemaDocument2SystemId", jni::ref<java::lang::String>>(p1); }
	void setDeclPool(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool> p1) { return call_method<"setDeclPool", void>(p1); }
	void setDVFactory(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory> p1) { return call_method<"setDVFactory", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory> getDVFactory() { return call_method<"getDVFactory", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory>>(); }
	void reset(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager> p1) { return call_method<"reset", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator> element2Locator(jni::ref<org::w3c::dom::Element> p1) { return call_method<"element2Locator", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>>(p1); }
	jboolean element2Locator(jni::ref<org::w3c::dom::Element> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator> p2) { return call_method<"element2Locator", jboolean>(p1, p2); }
	void setGenerateSyntheticAnnotations(jboolean p1) { return call_method<"setGenerateSyntheticAnnotations", void>(p1); }

protected:

	XSDHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_XSDHANDLER
