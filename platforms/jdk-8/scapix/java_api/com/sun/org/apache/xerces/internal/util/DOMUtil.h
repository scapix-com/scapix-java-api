// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMUTIL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class DOMUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::DOMUtil>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/DOMUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMUTIL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/org/w3c/dom/Attr.h>
#include <scapix/java_api/org/w3c/dom/DOMException.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/Element.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/ls/LSException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::DOMUtil : public jni::object_base<"com/sun/org/apache/xerces/internal/util/DOMUtil",
	java::lang::Object>
{
public:

	static void copyInto(jni::ref<org::w3c::dom::Node> p1, jni::ref<org::w3c::dom::Node> p2) { return call_static_method<"copyInto", void>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getFirstChildElement(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getFirstChildElement", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Element> getFirstVisibleChildElement(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getFirstVisibleChildElement", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Element> getFirstVisibleChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::util::Map> p2) { return call_static_method<"getFirstVisibleChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getLastChildElement(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getLastChildElement", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Element> getLastVisibleChildElement(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getLastVisibleChildElement", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Element> getLastVisibleChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::util::Map> p2) { return call_static_method<"getLastVisibleChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getNextSiblingElement(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getNextSiblingElement", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Element> getNextVisibleSiblingElement(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getNextVisibleSiblingElement", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Element> getNextVisibleSiblingElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::util::Map> p2) { return call_static_method<"getNextVisibleSiblingElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static void setHidden(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"setHidden", void>(p1); }
	static void setHidden(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::util::Map> p2) { return call_static_method<"setHidden", void>(p1, p2); }
	static void setVisible(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"setVisible", void>(p1); }
	static void setVisible(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::util::Map> p2) { return call_static_method<"setVisible", void>(p1, p2); }
	static jboolean isHidden(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"isHidden", jboolean>(p1); }
	static jboolean isHidden(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::util::Map> p2) { return call_static_method<"isHidden", jboolean>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getFirstChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getFirstChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getLastChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getLastChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getNextSiblingElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getNextSiblingElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getFirstChildElementNS(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getFirstChildElementNS", jni::ref<org::w3c::dom::Element>>(p1, p2, p3); }
	static jni::ref<org::w3c::dom::Element> getLastChildElementNS(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getLastChildElementNS", jni::ref<org::w3c::dom::Element>>(p1, p2, p3); }
	static jni::ref<org::w3c::dom::Element> getNextSiblingElementNS(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getNextSiblingElementNS", jni::ref<org::w3c::dom::Element>>(p1, p2, p3); }
	static jni::ref<org::w3c::dom::Element> getFirstChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_static_method<"getFirstChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getLastChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_static_method<"getLastChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getNextSiblingElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_static_method<"getNextSiblingElement", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getFirstChildElementNS(jni::ref<org::w3c::dom::Node> p1, jni::ref<jni::array<jni::array<java::lang::String>>> p2) { return call_static_method<"getFirstChildElementNS", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getLastChildElementNS(jni::ref<org::w3c::dom::Node> p1, jni::ref<jni::array<jni::array<java::lang::String>>> p2) { return call_static_method<"getLastChildElementNS", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getNextSiblingElementNS(jni::ref<org::w3c::dom::Node> p1, jni::ref<jni::array<jni::array<java::lang::String>>> p2) { return call_static_method<"getNextSiblingElementNS", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	static jni::ref<org::w3c::dom::Element> getFirstChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_static_method<"getFirstChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2, p3, p4); }
	static jni::ref<org::w3c::dom::Element> getLastChildElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_static_method<"getLastChildElement", jni::ref<org::w3c::dom::Element>>(p1, p2, p3, p4); }
	static jni::ref<org::w3c::dom::Element> getNextSiblingElement(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_static_method<"getNextSiblingElement", jni::ref<org::w3c::dom::Element>>(p1, p2, p3, p4); }
	static jni::ref<java::lang::String> getChildText(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getChildText", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getName(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getLocalName(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getLocalName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<org::w3c::dom::Element> getParent(jni::ref<org::w3c::dom::Element> p1) { return call_static_method<"getParent", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Document> getDocument(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getDocument", jni::ref<org::w3c::dom::Document>>(p1); }
	static jni::ref<org::w3c::dom::Element> getRoot(jni::ref<org::w3c::dom::Document> p1) { return call_static_method<"getRoot", jni::ref<org::w3c::dom::Element>>(p1); }
	static jni::ref<org::w3c::dom::Attr> getAttr(jni::ref<org::w3c::dom::Element> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getAttr", jni::ref<org::w3c::dom::Attr>>(p1, p2); }
	static jni::ref<org::w3c::dom::Attr> getAttrNS(jni::ref<org::w3c::dom::Element> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getAttrNS", jni::ref<org::w3c::dom::Attr>>(p1, p2, p3); }
	static jni::ref<jni::array<org::w3c::dom::Attr>> getAttrs(jni::ref<org::w3c::dom::Element> p1) { return call_static_method<"getAttrs", jni::ref<jni::array<org::w3c::dom::Attr>>>(p1); }
	static jni::ref<java::lang::String> getValue(jni::ref<org::w3c::dom::Attr> p1) { return call_static_method<"getValue", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getAttrValue(jni::ref<org::w3c::dom::Element> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getAttrValue", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<java::lang::String> getAttrValueNS(jni::ref<org::w3c::dom::Element> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getAttrValueNS", jni::ref<java::lang::String>>(p1, p2, p3); }
	static jni::ref<java::lang::String> getPrefix(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getNamespaceURI(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getAnnotation(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getAnnotation", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getSyntheticAnnotation(jni::ref<org::w3c::dom::Node> p1) { return call_static_method<"getSyntheticAnnotation", jni::ref<java::lang::String>>(p1); }
	static jni::ref<org::w3c::dom::DOMException> createDOMException(jshort p1, jni::ref<java::lang::Throwable> p2) { return call_static_method<"createDOMException", jni::ref<org::w3c::dom::DOMException>>(p1, p2); }
	static jni::ref<org::w3c::dom::ls::LSException> createLSException(jshort p1, jni::ref<java::lang::Throwable> p2) { return call_static_method<"createLSException", jni::ref<org::w3c::dom::ls::LSException>>(p1, p2); }

protected:

	DOMUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMUTIL
