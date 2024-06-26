// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_ELEMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_ELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class Element; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::Element>
{
	static constexpr fixed_string class_name = "org/w3c/dom/Element";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_ELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_ELEMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_ELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Attr.h>
#include <scapix/java_api/org/w3c/dom/NodeList.h>
#include <scapix/java_api/org/w3c/dom/TypeInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::Element : public jni::object_base<"org/w3c/dom/Element",
	java::lang::Object,
	org::w3c::dom::Node>
{
public:

	jni::ref<java::lang::String> getTagName() { return call_method<"getTagName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<java::lang::String>>(p1); }
	void setAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setAttribute", void>(p1, p2); }
	void removeAttribute(jni::ref<java::lang::String> p1) { return call_method<"removeAttribute", void>(p1); }
	jni::ref<org::w3c::dom::Attr> getAttributeNode(jni::ref<java::lang::String> p1) { return call_method<"getAttributeNode", jni::ref<org::w3c::dom::Attr>>(p1); }
	jni::ref<org::w3c::dom::Attr> setAttributeNode(jni::ref<org::w3c::dom::Attr> p1) { return call_method<"setAttributeNode", jni::ref<org::w3c::dom::Attr>>(p1); }
	jni::ref<org::w3c::dom::Attr> removeAttributeNode(jni::ref<org::w3c::dom::Attr> p1) { return call_method<"removeAttributeNode", jni::ref<org::w3c::dom::Attr>>(p1); }
	jni::ref<org::w3c::dom::NodeList> getElementsByTagName(jni::ref<java::lang::String> p1) { return call_method<"getElementsByTagName", jni::ref<org::w3c::dom::NodeList>>(p1); }
	jni::ref<java::lang::String> getAttributeNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttributeNS", jni::ref<java::lang::String>>(p1, p2); }
	void setAttributeNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"setAttributeNS", void>(p1, p2, p3); }
	void removeAttributeNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"removeAttributeNS", void>(p1, p2); }
	jni::ref<org::w3c::dom::Attr> getAttributeNodeNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttributeNodeNS", jni::ref<org::w3c::dom::Attr>>(p1, p2); }
	jni::ref<org::w3c::dom::Attr> setAttributeNodeNS(jni::ref<org::w3c::dom::Attr> p1) { return call_method<"setAttributeNodeNS", jni::ref<org::w3c::dom::Attr>>(p1); }
	jni::ref<org::w3c::dom::NodeList> getElementsByTagNameNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getElementsByTagNameNS", jni::ref<org::w3c::dom::NodeList>>(p1, p2); }
	jboolean hasAttribute(jni::ref<java::lang::String> p1) { return call_method<"hasAttribute", jboolean>(p1); }
	jboolean hasAttributeNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"hasAttributeNS", jboolean>(p1, p2); }
	jni::ref<org::w3c::dom::TypeInfo> getSchemaTypeInfo() { return call_method<"getSchemaTypeInfo", jni::ref<org::w3c::dom::TypeInfo>>(); }
	void setIdAttribute(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setIdAttribute", void>(p1, p2); }
	void setIdAttributeNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jboolean p3) { return call_method<"setIdAttributeNS", void>(p1, p2, p3); }
	void setIdAttributeNode(jni::ref<org::w3c::dom::Attr> p1, jboolean p2) { return call_method<"setIdAttributeNode", void>(p1, p2); }

protected:

	Element(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_ELEMENT
