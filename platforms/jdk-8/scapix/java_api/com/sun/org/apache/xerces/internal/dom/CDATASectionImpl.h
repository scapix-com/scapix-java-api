// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <scapix/java_api/org/w3c/dom/CDATASection.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_CDATASECTIONIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_CDATASECTIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class CDATASectionImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::CDATASectionImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/CDATASectionImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::dom::TextImpl, scapix::java_api::org::w3c::dom::CDATASection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_CDATASECTIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_CDATASECTIONIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_CDATASECTIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::CDATASectionImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/CDATASectionImpl",
	com::sun::org::apache::xerces::internal::dom::TextImpl,
	org::w3c::dom::CDATASection>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::dom::CDATASectionImpl> new_object(jni::ref<com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jshort getNodeType() { return call_method<"getNodeType", jshort>(); }
	jni::ref<java::lang::String> getNodeName() { return call_method<"getNodeName", jni::ref<java::lang::String>>(); }

protected:

	CDATASectionImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_CDATASECTIONIMPL
