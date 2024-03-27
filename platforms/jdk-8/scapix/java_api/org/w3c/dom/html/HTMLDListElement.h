// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDLISTELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDLISTELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLDListElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLDListElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLDListElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDLISTELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDLISTELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDLISTELEMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLDListElement : public jni::object_base<"org/w3c/dom/html/HTMLDListElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jboolean getCompact() { return call_method<"getCompact", jboolean>(); }
	void setCompact(jboolean p1) { return call_method<"setCompact", void>(p1); }

protected:

	HTMLDListElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLDLISTELEMENT
