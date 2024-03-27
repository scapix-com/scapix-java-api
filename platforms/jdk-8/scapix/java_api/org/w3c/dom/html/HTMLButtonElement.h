// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLBUTTONELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLBUTTONELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLButtonElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLButtonElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLButtonElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLBUTTONELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLBUTTONELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLBUTTONELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLFormElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLButtonElement : public jni::object_base<"org/w3c/dom/html/HTMLButtonElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<org::w3c::dom::html::HTMLFormElement> getForm() { return call_method<"getForm", jni::ref<org::w3c::dom::html::HTMLFormElement>>(); }
	jni::ref<java::lang::String> getAccessKey() { return call_method<"getAccessKey", jni::ref<java::lang::String>>(); }
	void setAccessKey(jni::ref<java::lang::String> p1) { return call_method<"setAccessKey", void>(p1); }
	jboolean getDisabled() { return call_method<"getDisabled", jboolean>(); }
	void setDisabled(jboolean p1) { return call_method<"setDisabled", void>(p1); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void setName(jni::ref<java::lang::String> p1) { return call_method<"setName", void>(p1); }
	jint getTabIndex() { return call_method<"getTabIndex", jint>(); }
	void setTabIndex(jint p1) { return call_method<"setTabIndex", void>(p1); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getValue() { return call_method<"getValue", jni::ref<java::lang::String>>(); }
	void setValue(jni::ref<java::lang::String> p1) { return call_method<"setValue", void>(p1); }

protected:

	HTMLButtonElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLBUTTONELEMENT
