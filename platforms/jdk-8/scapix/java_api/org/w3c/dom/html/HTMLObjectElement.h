// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLElement.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOBJECTELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOBJECTELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::html { class HTMLObjectElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::html::HTMLObjectElement>
{
	static constexpr fixed_string class_name = "org/w3c/dom/html/HTMLObjectElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::html::HTMLElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOBJECTELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOBJECTELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOBJECTELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/html/HTMLFormElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::html::HTMLObjectElement : public jni::object_base<"org/w3c/dom/html/HTMLObjectElement",
	java::lang::Object,
	org::w3c::dom::html::HTMLElement>
{
public:

	jni::ref<org::w3c::dom::html::HTMLFormElement> getForm() { return call_method<"getForm", jni::ref<org::w3c::dom::html::HTMLFormElement>>(); }
	jni::ref<java::lang::String> getCode() { return call_method<"getCode", jni::ref<java::lang::String>>(); }
	void setCode(jni::ref<java::lang::String> p1) { return call_method<"setCode", void>(p1); }
	jni::ref<java::lang::String> getAlign() { return call_method<"getAlign", jni::ref<java::lang::String>>(); }
	void setAlign(jni::ref<java::lang::String> p1) { return call_method<"setAlign", void>(p1); }
	jni::ref<java::lang::String> getArchive() { return call_method<"getArchive", jni::ref<java::lang::String>>(); }
	void setArchive(jni::ref<java::lang::String> p1) { return call_method<"setArchive", void>(p1); }
	jni::ref<java::lang::String> getBorder() { return call_method<"getBorder", jni::ref<java::lang::String>>(); }
	void setBorder(jni::ref<java::lang::String> p1) { return call_method<"setBorder", void>(p1); }
	jni::ref<java::lang::String> getCodeBase() { return call_method<"getCodeBase", jni::ref<java::lang::String>>(); }
	void setCodeBase(jni::ref<java::lang::String> p1) { return call_method<"setCodeBase", void>(p1); }
	jni::ref<java::lang::String> getCodeType() { return call_method<"getCodeType", jni::ref<java::lang::String>>(); }
	void setCodeType(jni::ref<java::lang::String> p1) { return call_method<"setCodeType", void>(p1); }
	jni::ref<java::lang::String> getData() { return call_method<"getData", jni::ref<java::lang::String>>(); }
	void setData(jni::ref<java::lang::String> p1) { return call_method<"setData", void>(p1); }
	jboolean getDeclare() { return call_method<"getDeclare", jboolean>(); }
	void setDeclare(jboolean p1) { return call_method<"setDeclare", void>(p1); }
	jni::ref<java::lang::String> getHeight() { return call_method<"getHeight", jni::ref<java::lang::String>>(); }
	void setHeight(jni::ref<java::lang::String> p1) { return call_method<"setHeight", void>(p1); }
	jni::ref<java::lang::String> getHspace() { return call_method<"getHspace", jni::ref<java::lang::String>>(); }
	void setHspace(jni::ref<java::lang::String> p1) { return call_method<"setHspace", void>(p1); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void setName(jni::ref<java::lang::String> p1) { return call_method<"setName", void>(p1); }
	jni::ref<java::lang::String> getStandby() { return call_method<"getStandby", jni::ref<java::lang::String>>(); }
	void setStandby(jni::ref<java::lang::String> p1) { return call_method<"setStandby", void>(p1); }
	jint getTabIndex() { return call_method<"getTabIndex", jint>(); }
	void setTabIndex(jint p1) { return call_method<"setTabIndex", void>(p1); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	void setType(jni::ref<java::lang::String> p1) { return call_method<"setType", void>(p1); }
	jni::ref<java::lang::String> getUseMap() { return call_method<"getUseMap", jni::ref<java::lang::String>>(); }
	void setUseMap(jni::ref<java::lang::String> p1) { return call_method<"setUseMap", void>(p1); }
	jni::ref<java::lang::String> getVspace() { return call_method<"getVspace", jni::ref<java::lang::String>>(); }
	void setVspace(jni::ref<java::lang::String> p1) { return call_method<"setVspace", void>(p1); }
	jni::ref<java::lang::String> getWidth() { return call_method<"getWidth", jni::ref<java::lang::String>>(); }
	void setWidth(jni::ref<java::lang::String> p1) { return call_method<"setWidth", void>(p1); }
	jni::ref<org::w3c::dom::Document> getContentDocument() { return call_method<"getContentDocument", jni::ref<org::w3c::dom::Document>>(); }

protected:

	HTMLObjectElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_HTML_HTMLOBJECTELEMENT
