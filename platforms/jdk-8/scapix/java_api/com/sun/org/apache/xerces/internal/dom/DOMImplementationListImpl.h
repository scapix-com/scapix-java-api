// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/DOMImplementationList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONLISTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONLISTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DOMImplementationListImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DOMImplementationListImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DOMImplementationListImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::DOMImplementationList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONLISTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONLISTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONLISTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/org/w3c/dom/DOMImplementation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DOMImplementationListImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DOMImplementationListImpl",
	java::lang::Object,
	org::w3c::dom::DOMImplementationList>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMImplementationListImpl> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMImplementationListImpl> new_object(jni::ref<java::util::List> p1) { return base_::new_object(p1); }
	jni::ref<org::w3c::dom::DOMImplementation> item(jint p1) { return call_method<"item", jni::ref<org::w3c::dom::DOMImplementation>>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }

protected:

	DOMImplementationListImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMIMPLEMENTATIONLISTIMPL