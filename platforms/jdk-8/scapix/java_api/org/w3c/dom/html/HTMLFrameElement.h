// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFRAMEELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFRAMEELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLFrameElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLFrameElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLFrameElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFRAMEELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFRAMEELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFRAMEELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLFrameElement : public jni::object_base<"org/w3c/dom/html/HTMLFrameElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<java::lang::String> getFrameBorder() { return call_method<"getFrameBorder", jni::ref<java::lang::String>>(); }
	void setFrameBorder(jni::ref<java::lang::String> p1) { return call_method<"setFrameBorder", void>(p1); }
	jni::ref<java::lang::String> getLongDesc() { return call_method<"getLongDesc", jni::ref<java::lang::String>>(); }
	void setLongDesc(jni::ref<java::lang::String> p1) { return call_method<"setLongDesc", void>(p1); }
	jni::ref<java::lang::String> getMarginHeight() { return call_method<"getMarginHeight", jni::ref<java::lang::String>>(); }
	void setMarginHeight(jni::ref<java::lang::String> p1) { return call_method<"setMarginHeight", void>(p1); }
	jni::ref<java::lang::String> getMarginWidth() { return call_method<"getMarginWidth", jni::ref<java::lang::String>>(); }
	void setMarginWidth(jni::ref<java::lang::String> p1) { return call_method<"setMarginWidth", void>(p1); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void setName(jni::ref<java::lang::String> p1) { return call_method<"setName", void>(p1); }
	jboolean getNoResize() { return call_method<"getNoResize", jboolean>(); }
	void setNoResize(jboolean p1) { return call_method<"setNoResize", void>(p1); }
	jni::ref<java::lang::String> getScrolling() { return call_method<"getScrolling", jni::ref<java::lang::String>>(); }
	void setScrolling(jni::ref<java::lang::String> p1) { return call_method<"setScrolling", void>(p1); }
	jni::ref<java::lang::String> getSrc() { return call_method<"getSrc", jni::ref<java::lang::String>>(); }
	void setSrc(jni::ref<java::lang::String> p1) { return call_method<"setSrc", void>(p1); }
	jni::ref<org::w3c::dom::Document> getContentDocument() { return call_method<"getContentDocument", jni::ref<org::w3c::dom::Document>>(); }

protected:

	HTMLFrameElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFRAMEELEMENT
