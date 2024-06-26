// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMACCESSEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMACCESSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::browser::dom { class DOMAccessException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::browser::dom::DOMAccessException>
{
	static constexpr fixed_string class_name = "com/sun/java/browser/dom/DOMAccessException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMACCESSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMACCESSEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMACCESSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::browser::dom::DOMAccessException : public jni::object_base<"com/sun/java/browser/dom/DOMAccessException",
	java::lang::Exception>
{
public:

	static jni::ref<com::sun::java::browser::dom::DOMAccessException> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::java::browser::dom::DOMAccessException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::java::browser::dom::DOMAccessException> new_object(jni::ref<java::lang::Exception> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::java::browser::dom::DOMAccessException> new_object(jni::ref<java::lang::Exception> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	DOMAccessException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_BROWSER_DOM_DOMACCESSEXCEPTION
