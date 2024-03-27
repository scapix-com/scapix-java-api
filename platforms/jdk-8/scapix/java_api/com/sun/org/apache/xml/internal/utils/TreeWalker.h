// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_TREEWALKER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_TREEWALKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class TreeWalker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::TreeWalker>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/TreeWalker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_TREEWALKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_TREEWALKER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_TREEWALKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::TreeWalker : public jni::object_base<"com/sun/org/apache/xml/internal/utils/TreeWalker",
	java::lang::Object>
{
public:

	jni::ref<org::xml::sax::ContentHandler> getContentHandler() { return call_method<"getContentHandler", jni::ref<org::xml::sax::ContentHandler>>(); }
	void setContentHandler(jni::ref<org::xml::sax::ContentHandler> p1) { return call_method<"setContentHandler", void>(p1); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::TreeWalker> new_object(jni::ref<org::xml::sax::ContentHandler> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::TreeWalker> new_object(jni::ref<org::xml::sax::ContentHandler> p1) { return base_::new_object(p1); }
	void traverse(jni::ref<org::w3c::dom::Node> p1) { return call_method<"traverse", void>(p1); }
	void traverseFragment(jni::ref<org::w3c::dom::Node> p1) { return call_method<"traverseFragment", void>(p1); }
	void traverse(jni::ref<org::w3c::dom::Node> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"traverse", void>(p1, p2); }

protected:

	TreeWalker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_TREEWALKER
