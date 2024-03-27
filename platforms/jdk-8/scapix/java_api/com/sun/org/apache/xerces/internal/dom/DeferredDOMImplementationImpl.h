// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDDOMIMPLEMENTATIONIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDDOMIMPLEMENTATIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DeferredDOMImplementationImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DeferredDOMImplementationImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDDOMIMPLEMENTATIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDDOMIMPLEMENTATIONIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDDOMIMPLEMENTATIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/w3c/dom/DOMImplementation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DeferredDOMImplementationImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl",
	com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::dom::DeferredDOMImplementationImpl> new_object() { return base_::new_object(); }
	static jni::ref<org::w3c::dom::DOMImplementation> getDOMImplementation() { return call_static_method<"getDOMImplementation", jni::ref<org::w3c::dom::DOMImplementation>>(); }

protected:

	DeferredDOMImplementationImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDDOMIMPLEMENTATIONIMPL