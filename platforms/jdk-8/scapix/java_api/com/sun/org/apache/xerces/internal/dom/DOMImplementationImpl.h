// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <scapix/java_api/org/w3c/dom/DOMImplementation.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DOMImplementationImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl, scapix::java_api::org::w3c::dom::DOMImplementation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/DocumentType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl",
	com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl,
	org::w3c::dom::DOMImplementation>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl> new_object() { return base_::new_object(); }
	static jni::ref<org::w3c::dom::DOMImplementation> getDOMImplementation() { return call_static_method<"getDOMImplementation", jni::ref<org::w3c::dom::DOMImplementation>>(); }
	jboolean hasFeature(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"hasFeature", jboolean>(p1, p2); }
	jni::ref<org::w3c::dom::Document> createDocument(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<org::w3c::dom::DocumentType> p3) { return call_method<"createDocument", jni::ref<org::w3c::dom::Document>>(p1, p2, p3); }

protected:

	DOMImplementationImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONIMPL