// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLESECTIONELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLESECTIONELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLTableSectionElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLTableSectionElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLTableSectionElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLESECTIONELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLESECTIONELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLESECTIONELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLCollection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLTableSectionElement : public jni::object_base<"org/w3c/dom/html/HTMLTableSectionElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<java::lang::String> getAlign() { return call_method<"getAlign", jni::ref<java::lang::String>>(); }
	void setAlign(jni::ref<java::lang::String> p1) { return call_method<"setAlign", void>(p1); }
	jni::ref<java::lang::String> getCh() { return call_method<"getCh", jni::ref<java::lang::String>>(); }
	void setCh(jni::ref<java::lang::String> p1) { return call_method<"setCh", void>(p1); }
	jni::ref<java::lang::String> getChOff() { return call_method<"getChOff", jni::ref<java::lang::String>>(); }
	void setChOff(jni::ref<java::lang::String> p1) { return call_method<"setChOff", void>(p1); }
	jni::ref<java::lang::String> getVAlign() { return call_method<"getVAlign", jni::ref<java::lang::String>>(); }
	void setVAlign(jni::ref<java::lang::String> p1) { return call_method<"setVAlign", void>(p1); }
	jni::ref<org::w3c::dom::html::HTMLCollection> getRows() { return call_method<"getRows", jni::ref<org::w3c::dom::html::HTMLCollection>>(); }
	jni::ref<org::w3c::dom::html::HTMLElement> insertRow(jint p1) { return call_method<"insertRow", jni::ref<org::w3c::dom::html::HTMLElement>>(p1); }
	void deleteRow(jint p1) { return call_method<"deleteRow", void>(p1); }

protected:

	HTMLTableSectionElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLESECTIONELEMENT
