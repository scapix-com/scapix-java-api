// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSANNOTATIONIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSANNOTATIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class XSAnnotationImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSAnnotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSANNOTATIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSANNOTATIONIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSANNOTATIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::XSAnnotation>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl> new_object(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar> p2) { return base_::new_object(p1, p2); }
	jboolean writeAnnotation(jni::ref<java::lang::Object> p1, jshort p2) { return call_method<"writeAnnotation", jboolean>(p1, p2); }
	jni::ref<java::lang::String> getAnnotationString() { return call_method<"getAnnotationString", jni::ref<java::lang::String>>(); }
	jshort getType() { return call_method<"getType", jshort>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem> getNamespaceItem() { return call_method<"getNamespaceItem", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem>>(); }

protected:

	XSAnnotationImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSANNOTATIONIMPL