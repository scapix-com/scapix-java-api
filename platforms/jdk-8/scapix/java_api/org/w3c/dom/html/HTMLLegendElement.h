// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLEGENDELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLEGENDELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLLegendElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLLegendElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLLegendElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLEGENDELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLEGENDELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLEGENDELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLFormElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLLegendElement : public jni::object_base<"org/w3c/dom/html/HTMLLegendElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<org::w3c::dom::html::HTMLFormElement> getForm() { return call_method<"getForm", jni::ref<org::w3c::dom::html::HTMLFormElement>>(); }
	jni::ref<java::lang::String> getAccessKey() { return call_method<"getAccessKey", jni::ref<java::lang::String>>(); }
	void setAccessKey(jni::ref<java::lang::String> p1) { return call_method<"setAccessKey", void>(p1); }
	jni::ref<java::lang::String> getAlign() { return call_method<"getAlign", jni::ref<java::lang::String>>(); }
	void setAlign(jni::ref<java::lang::String> p1) { return call_method<"setAlign", void>(p1); }

protected:

	HTMLLegendElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLLEGENDELEMENT
