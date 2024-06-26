// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/ElementImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_ELEMENTNSIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_ELEMENTNSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class ElementNSImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::ElementNSImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/ElementNSImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::dom::ElementImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_ELEMENTNSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_ELEMENTNSIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_ELEMENTNSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::ElementNSImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/ElementNSImpl",
	com::sun::org::apache::xerces::internal::dom::ElementImpl>
{
public:

	jni::ref<java::lang::String> getNamespaceURI() { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPrefix() { return call_method<"getPrefix", jni::ref<java::lang::String>>(); }
	void setPrefix(jni::ref<java::lang::String> p1) { return call_method<"setPrefix", void>(p1); }
	jni::ref<java::lang::String> getLocalName() { return call_method<"getLocalName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getTypeName() { return call_method<"getTypeName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getTypeNamespace() { return call_method<"getTypeNamespace", jni::ref<java::lang::String>>(); }
	jboolean isDerivedFrom(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return call_method<"isDerivedFrom", jboolean>(p1, p2, p3); }
	void setType(jni::ref<com::sun::org::apache::xerces::internal::xs::XSTypeDefinition> p1) { return call_method<"setType", void>(p1); }

protected:

	ElementNSImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_ELEMENTNSIMPL
