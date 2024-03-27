// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/EntityReferenceImpl.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/DeferredNode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDENTITYREFERENCEIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDENTITYREFERENCEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DeferredEntityReferenceImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DeferredEntityReferenceImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DeferredEntityReferenceImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::dom::EntityReferenceImpl, scapix::java_api::com::sun::org::apache::xerces::internal::dom::DeferredNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDENTITYREFERENCEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDENTITYREFERENCEIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDENTITYREFERENCEIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DeferredEntityReferenceImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DeferredEntityReferenceImpl",
	com::sun::org::apache::xerces::internal::dom::EntityReferenceImpl,
	com::sun::org::apache::xerces::internal::dom::DeferredNode>
{
public:

	jint getNodeIndex() { return call_method<"getNodeIndex", jint>(); }

protected:

	DeferredEntityReferenceImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DEFERREDENTITYREFERENCEIMPL
