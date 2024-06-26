// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLMODELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLMODELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLModElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLModElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLModElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLMODELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLMODELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLMODELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLModElement : public jni::object_base<"org/w3c/dom/html/HTMLModElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<java::lang::String> getCite() { return call_method<"getCite", jni::ref<java::lang::String>>(); }
	void setCite(jni::ref<java::lang::String> p1) { return call_method<"setCite", void>(p1); }
	jni::ref<java::lang::String> getDateTime() { return call_method<"getDateTime", jni::ref<java::lang::String>>(); }
	void setDateTime(jni::ref<java::lang::String> p1) { return call_method<"setDateTime", void>(p1); }

protected:

	HTMLModElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLMODELEMENT
