// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLECELLELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLECELLELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLTableCellElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLTableCellElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLTableCellElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLECELLELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLECELLELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLECELLELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLTableCellElement : public jni::object_base<"org/w3c/dom/html/HTMLTableCellElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jint getCellIndex() { return call_method<"getCellIndex", jint>(); }
	jni::ref<java::lang::String> getAbbr() { return call_method<"getAbbr", jni::ref<java::lang::String>>(); }
	void setAbbr(jni::ref<java::lang::String> p1) { return call_method<"setAbbr", void>(p1); }
	jni::ref<java::lang::String> getAlign() { return call_method<"getAlign", jni::ref<java::lang::String>>(); }
	void setAlign(jni::ref<java::lang::String> p1) { return call_method<"setAlign", void>(p1); }
	jni::ref<java::lang::String> getAxis() { return call_method<"getAxis", jni::ref<java::lang::String>>(); }
	void setAxis(jni::ref<java::lang::String> p1) { return call_method<"setAxis", void>(p1); }
	jni::ref<java::lang::String> getBgColor() { return call_method<"getBgColor", jni::ref<java::lang::String>>(); }
	void setBgColor(jni::ref<java::lang::String> p1) { return call_method<"setBgColor", void>(p1); }
	jni::ref<java::lang::String> getCh() { return call_method<"getCh", jni::ref<java::lang::String>>(); }
	void setCh(jni::ref<java::lang::String> p1) { return call_method<"setCh", void>(p1); }
	jni::ref<java::lang::String> getChOff() { return call_method<"getChOff", jni::ref<java::lang::String>>(); }
	void setChOff(jni::ref<java::lang::String> p1) { return call_method<"setChOff", void>(p1); }
	jint getColSpan() { return call_method<"getColSpan", jint>(); }
	void setColSpan(jint p1) { return call_method<"setColSpan", void>(p1); }
	jni::ref<java::lang::String> getHeaders() { return call_method<"getHeaders", jni::ref<java::lang::String>>(); }
	void setHeaders(jni::ref<java::lang::String> p1) { return call_method<"setHeaders", void>(p1); }
	jni::ref<java::lang::String> getHeight() { return call_method<"getHeight", jni::ref<java::lang::String>>(); }
	void setHeight(jni::ref<java::lang::String> p1) { return call_method<"setHeight", void>(p1); }
	jboolean getNoWrap() { return call_method<"getNoWrap", jboolean>(); }
	void setNoWrap(jboolean p1) { return call_method<"setNoWrap", void>(p1); }
	jint getRowSpan() { return call_method<"getRowSpan", jint>(); }
	void setRowSpan(jint p1) { return call_method<"setRowSpan", void>(p1); }
	jni::ref<java::lang::String> getScope() { return call_method<"getScope", jni::ref<java::lang::String>>(); }
	void setScope(jni::ref<java::lang::String> p1) { return call_method<"setScope", void>(p1); }
	jni::ref<java::lang::String> getVAlign() { return call_method<"getVAlign", jni::ref<java::lang::String>>(); }
	void setVAlign(jni::ref<java::lang::String> p1) { return call_method<"setVAlign", void>(p1); }
	jni::ref<java::lang::String> getWidth() { return call_method<"getWidth", jni::ref<java::lang::String>>(); }
	void setWidth(jni::ref<java::lang::String> p1) { return call_method<"setWidth", void>(p1); }

protected:

	HTMLTableCellElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLTABLECELLELEMENT