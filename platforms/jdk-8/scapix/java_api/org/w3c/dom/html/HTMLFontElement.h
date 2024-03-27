// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFONTELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFONTELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLFontElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLFontElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLFontElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFONTELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFONTELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFONTELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLFontElement : public jni::object_base<"org/w3c/dom/html/HTMLFontElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<java::lang::String> getColor() { return call_method<"getColor", jni::ref<java::lang::String>>(); }
	void setColor(jni::ref<java::lang::String> p1) { return call_method<"setColor", void>(p1); }
	jni::ref<java::lang::String> getFace() { return call_method<"getFace", jni::ref<java::lang::String>>(); }
	void setFace(jni::ref<java::lang::String> p1) { return call_method<"setFace", void>(p1); }
	jni::ref<java::lang::String> getSize() { return call_method<"getSize", jni::ref<java::lang::String>>(); }
	void setSize(jni::ref<java::lang::String> p1) { return call_method<"setSize", void>(p1); }

protected:

	HTMLFontElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLFONTELEMENT
