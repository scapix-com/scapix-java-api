// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDIVELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDIVELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLDivElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLDivElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLDivElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDIVELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDIVELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDIVELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLDivElement : public jni::object_base<"org/w3c/dom/html/HTMLDivElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<java::lang::String> getAlign() { return call_method<"getAlign", jni::ref<java::lang::String>>(); }
	void setAlign(jni::ref<java::lang::String> p1) { return call_method<"setAlign", void>(p1); }

protected:

	HTMLDivElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDIVELEMENT
