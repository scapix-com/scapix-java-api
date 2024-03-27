// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_ELEMENTPSVIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_ELEMENTPSVIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class ElementPSVImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/ElementPSVImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::ElementPSVI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_ELEMENTPSVIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_ELEMENTPSVIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_ELEMENTPSVIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/ElementPSVImpl",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::ElementPSVI>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl> new_object(jboolean p1, jni::ref<com::sun::org::apache::xerces::internal::xs::ElementPSVI> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::ItemPSVI> constant() { return call_method<"constant", jni::ref<com::sun::org::apache::xerces::internal::xs::ItemPSVI>>(); }
	jboolean isConstant() { return call_method<"isConstant", jboolean>(); }
	jni::ref<java::lang::String> getSchemaDefault() { return call_method<"getSchemaDefault", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSchemaNormalizedValue() { return call_method<"getSchemaNormalizedValue", jni::ref<java::lang::String>>(); }
	jboolean getIsSchemaSpecified() { return call_method<"getIsSchemaSpecified", jboolean>(); }
	jshort getValidationAttempted() { return call_method<"getValidationAttempted", jshort>(); }
	jshort getValidity() { return call_method<"getValidity", jshort>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::StringList> getErrorCodes() { return call_method<"getErrorCodes", jni::ref<com::sun::org::apache::xerces::internal::xs::StringList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::StringList> getErrorMessages() { return call_method<"getErrorMessages", jni::ref<com::sun::org::apache::xerces::internal::xs::StringList>>(); }
	jni::ref<java::lang::String> getValidationContext() { return call_method<"getValidationContext", jni::ref<java::lang::String>>(); }
	jboolean getNil() { return call_method<"getNil", jboolean>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration> getNotation() { return call_method<"getNotation", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> getTypeDefinition() { return call_method<"getTypeDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition> getMemberTypeDefinition() { return call_method<"getMemberTypeDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration> getElementDeclaration() { return call_method<"getElementDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSElementDeclaration>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel> getSchemaInformation() { return call_method<"getSchemaInformation", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel>>(); }
	jni::ref<java::lang::Object> getActualNormalizedValue() { return call_method<"getActualNormalizedValue", jni::ref<java::lang::Object>>(); }
	jshort getActualNormalizedValueType() { return call_method<"getActualNormalizedValueType", jshort>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList> getItemValueTypes() { return call_method<"getItemValueTypes", jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSValue> getSchemaValue() { return call_method<"getSchemaValue", jni::ref<com::sun::org::apache::xerces::internal::xs::XSValue>>(); }
	void reset() { return call_method<"reset", void>(); }
	void copySchemaInformationTo(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl> p1) { return call_method<"copySchemaInformationTo", void>(p1); }

protected:

	ElementPSVImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_ELEMENTPSVIMPL
