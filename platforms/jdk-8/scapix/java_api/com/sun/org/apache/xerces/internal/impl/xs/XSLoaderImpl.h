// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSLoader.h>
#include <scapix/java_api/org/w3c/dom/DOMConfiguration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSLOADERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSLOADERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class XSLoaderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XSLoaderImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/XSLoaderImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSLoader, scapix::java_api::org::w3c::dom::DOMConfiguration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSLOADERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSLOADERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSLOADERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/LSInputList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMStringList.h>
#include <scapix/java_api/org/w3c/dom/ls/LSInput.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::XSLoaderImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/XSLoaderImpl",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::XSLoader,
	org::w3c::dom::DOMConfiguration>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSLoaderImpl> new_object() { return base_::new_object(); }
	jni::ref<org::w3c::dom::DOMConfiguration> getConfig() { return call_method<"getConfig", jni::ref<org::w3c::dom::DOMConfiguration>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel> loadURIList(jni::ref<com::sun::org::apache::xerces::internal::xs::StringList> p1) { return call_method<"loadURIList", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel> loadInputList(jni::ref<com::sun::org::apache::xerces::internal::xs::LSInputList> p1) { return call_method<"loadInputList", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel> loadURI(jni::ref<java::lang::String> p1) { return call_method<"loadURI", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel> load(jni::ref<org::w3c::dom::ls::LSInput> p1) { return call_method<"load", jni::ref<com::sun::org::apache::xerces::internal::xs::XSModel>>(p1); }
	void setParameter(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setParameter", void>(p1, p2); }
	jni::ref<java::lang::Object> getParameter(jni::ref<java::lang::String> p1) { return call_method<"getParameter", jni::ref<java::lang::Object>>(p1); }
	jboolean canSetParameter(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"canSetParameter", jboolean>(p1, p2); }
	jni::ref<org::w3c::dom::DOMStringList> getParameterNames() { return call_method<"getParameterNames", jni::ref<org::w3c::dom::DOMStringList>>(); }

protected:

	XSLoaderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSLOADERIMPL
