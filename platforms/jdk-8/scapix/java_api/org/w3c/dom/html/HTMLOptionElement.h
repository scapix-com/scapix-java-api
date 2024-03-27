// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTIONELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTIONELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLOptionElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLOptionElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLOptionElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTIONELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTIONELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTIONELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLFormElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLOptionElement : public jni::object_base<"org/w3c/dom/html/HTMLOptionElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<org::w3c::dom::html::HTMLFormElement> getForm() { return call_method<"getForm", jni::ref<org::w3c::dom::html::HTMLFormElement>>(); }
	jboolean getDefaultSelected() { return call_method<"getDefaultSelected", jboolean>(); }
	void setDefaultSelected(jboolean p1) { return call_method<"setDefaultSelected", void>(p1); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jboolean getDisabled() { return call_method<"getDisabled", jboolean>(); }
	void setDisabled(jboolean p1) { return call_method<"setDisabled", void>(p1); }
	jni::ref<java::lang::String> getLabel() { return call_method<"getLabel", jni::ref<java::lang::String>>(); }
	void setLabel(jni::ref<java::lang::String> p1) { return call_method<"setLabel", void>(p1); }
	jboolean getSelected() { return call_method<"getSelected", jboolean>(); }
	void setSelected(jboolean p1) { return call_method<"setSelected", void>(p1); }
	jni::ref<java::lang::String> getValue() { return call_method<"getValue", jni::ref<java::lang::String>>(); }
	void setValue(jni::ref<java::lang::String> p1) { return call_method<"setValue", void>(p1); }

protected:

	HTMLOptionElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTIONELEMENT