// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMSERVICE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::browser::dom { class DOMService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::browser::dom::DOMService>
{
	static constexpr fixed_string class_name = "com/sun/java/browser/dom/DOMService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMSERVICE)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/browser/dom/DOMAction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::browser::dom::DOMService : public jni::object_base<"com/sun/java/browser/dom/DOMService",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::java::browser::dom::DOMService> getService(jni::ref<java::lang::Object> p1) { return call_static_method<"getService", jni::ref<com::sun::java::browser::dom::DOMService>>(p1); }
	static jni::ref<com::sun::java::browser::dom::DOMService> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> invokeAndWait(jni::ref<com::sun::java::browser::dom::DOMAction> p1) { return call_method<"invokeAndWait", jni::ref<java::lang::Object>>(p1); }
	void invokeLater(jni::ref<com::sun::java::browser::dom::DOMAction> p1) { return call_method<"invokeLater", void>(p1); }

protected:

	DOMService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMSERVICE
