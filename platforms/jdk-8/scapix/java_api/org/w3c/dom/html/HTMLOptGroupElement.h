// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTGROUPELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTGROUPELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLOptGroupElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLOptGroupElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLOptGroupElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTGROUPELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTGROUPELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTGROUPELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLOptGroupElement : public jni::object_base<"org/w3c/dom/html/HTMLOptGroupElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jboolean getDisabled() { return call_method<"getDisabled", jboolean>(); }
	void setDisabled(jboolean p1) { return call_method<"setDisabled", void>(p1); }
	jni::ref<java::lang::String> getLabel() { return call_method<"getLabel", jni::ref<java::lang::String>>(); }
	void setLabel(jni::ref<java::lang::String> p1) { return call_method<"setLabel", void>(p1); }

protected:

	HTMLOptGroupElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOPTGROUPELEMENT