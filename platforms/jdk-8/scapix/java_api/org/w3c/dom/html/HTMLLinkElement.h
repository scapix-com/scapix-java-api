// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLINKELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLINKELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLLinkElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLLinkElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLLinkElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLINKELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLINKELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLINKELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLLinkElement : public jni::object_base<"org/w3c/dom/html/HTMLLinkElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jboolean getDisabled() { return call_method<"getDisabled", jboolean>(); }
	void setDisabled(jboolean p1) { return call_method<"setDisabled", void>(p1); }
	jni::ref<java::lang::String> getCharset() { return call_method<"getCharset", jni::ref<java::lang::String>>(); }
	void setCharset(jni::ref<java::lang::String> p1) { return call_method<"setCharset", void>(p1); }
	jni::ref<java::lang::String> getHref() { return call_method<"getHref", jni::ref<java::lang::String>>(); }
	void setHref(jni::ref<java::lang::String> p1) { return call_method<"setHref", void>(p1); }
	jni::ref<java::lang::String> getHreflang() { return call_method<"getHreflang", jni::ref<java::lang::String>>(); }
	void setHreflang(jni::ref<java::lang::String> p1) { return call_method<"setHreflang", void>(p1); }
	jni::ref<java::lang::String> getMedia() { return call_method<"getMedia", jni::ref<java::lang::String>>(); }
	void setMedia(jni::ref<java::lang::String> p1) { return call_method<"setMedia", void>(p1); }
	jni::ref<java::lang::String> getRel() { return call_method<"getRel", jni::ref<java::lang::String>>(); }
	void setRel(jni::ref<java::lang::String> p1) { return call_method<"setRel", void>(p1); }
	jni::ref<java::lang::String> getRev() { return call_method<"getRev", jni::ref<java::lang::String>>(); }
	void setRev(jni::ref<java::lang::String> p1) { return call_method<"setRev", void>(p1); }
	jni::ref<java::lang::String> getTarget() { return call_method<"getTarget", jni::ref<java::lang::String>>(); }
	void setTarget(jni::ref<java::lang::String> p1) { return call_method<"setTarget", void>(p1); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	void setType(jni::ref<java::lang::String> p1) { return call_method<"setType", void>(p1); }

protected:

	HTMLLinkElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLINKELEMENT
