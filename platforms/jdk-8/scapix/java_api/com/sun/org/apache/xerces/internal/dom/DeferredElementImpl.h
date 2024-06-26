// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/DeferredNode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDELEMENTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDELEMENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DeferredElementImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DeferredElementImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DeferredElementImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::dom::ElementImpl, scapix::java_api::com::sun::org::apache::xerces::internal::dom::DeferredNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDELEMENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDELEMENTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDELEMENTIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DeferredElementImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DeferredElementImpl",
	com::sun::org::apache::xerces::internal::dom::ElementImpl,
	com::sun::org::apache::xerces::internal::dom::DeferredNode>
{
public:

	jint getNodeIndex() { return call_method<"getNodeIndex", jint>(); }

protected:

	DeferredElementImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDELEMENTIMPL
