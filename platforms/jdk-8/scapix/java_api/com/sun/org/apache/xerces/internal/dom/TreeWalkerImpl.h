// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/traversal/TreeWalker.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_TREEWALKERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_TREEWALKERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class TreeWalkerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::TreeWalkerImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/TreeWalkerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::traversal::TreeWalker>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_TREEWALKERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_TREEWALKERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_TREEWALKERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/traversal/NodeFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::TreeWalkerImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/TreeWalkerImpl",
	java::lang::Object,
	org::w3c::dom::traversal::TreeWalker>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::dom::TreeWalkerImpl> new_object(jni::ref<org::w3c::dom::Node> p1, jint p2, jni::ref<org::w3c::dom::traversal::NodeFilter> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<org::w3c::dom::Node> getRoot() { return call_method<"getRoot", jni::ref<org::w3c::dom::Node>>(); }
	jint getWhatToShow() { return call_method<"getWhatToShow", jint>(); }
	void setWhatShow(jint p1) { return call_method<"setWhatShow", void>(p1); }
	jni::ref<org::w3c::dom::traversal::NodeFilter> getFilter() { return call_method<"getFilter", jni::ref<org::w3c::dom::traversal::NodeFilter>>(); }
	jboolean getExpandEntityReferences() { return call_method<"getExpandEntityReferences", jboolean>(); }
	jni::ref<org::w3c::dom::Node> getCurrentNode() { return call_method<"getCurrentNode", jni::ref<org::w3c::dom::Node>>(); }
	void setCurrentNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setCurrentNode", void>(p1); }
	jni::ref<org::w3c::dom::Node> parentNode() { return call_method<"parentNode", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> firstChild() { return call_method<"firstChild", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> lastChild() { return call_method<"lastChild", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> previousSibling() { return call_method<"previousSibling", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> nextSibling() { return call_method<"nextSibling", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> previousNode() { return call_method<"previousNode", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> nextNode() { return call_method<"nextNode", jni::ref<org::w3c::dom::Node>>(); }

protected:

	TreeWalkerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_TREEWALKERIMPL