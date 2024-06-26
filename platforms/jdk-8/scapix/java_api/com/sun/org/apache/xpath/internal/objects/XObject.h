// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XOBJECT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::objects { class XObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::objects::XObject>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/objects/XObject";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::Expression, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XOBJECT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/org/w3c/dom/DocumentFragment.h>
#include <scapix/java_api/org/w3c/dom/NodeList.h>
#include <scapix/java_api/org/w3c/dom/traversal/NodeIterator.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::objects::XObject : public jni::object_base<"com/sun/org/apache/xpath/internal/objects/XObject",
	com::sun::org::apache::xpath::internal::Expression,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jint CLASS_NULL() { return get_static_field<"CLASS_NULL", jint>(); }
	static jint CLASS_UNKNOWN() { return get_static_field<"CLASS_UNKNOWN", jint>(); }
	static jint CLASS_BOOLEAN() { return get_static_field<"CLASS_BOOLEAN", jint>(); }
	static jint CLASS_NUMBER() { return get_static_field<"CLASS_NUMBER", jint>(); }
	static jint CLASS_STRING() { return get_static_field<"CLASS_STRING", jint>(); }
	static jint CLASS_NODESET() { return get_static_field<"CLASS_NODESET", jint>(); }
	static jint CLASS_RTREEFRAG() { return get_static_field<"CLASS_RTREEFRAG", jint>(); }
	static jint CLASS_UNRESOLVEDVARIABLE() { return get_static_field<"CLASS_UNRESOLVEDVARIABLE", jint>(); }

	static jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	void allowDetachToRelease(jboolean p1) { return call_method<"allowDetachToRelease", void>(p1); }
	void detach() { return call_method<"detach", void>(); }
	void destruct() { return call_method<"destruct", void>(); }
	void reset() { return call_method<"reset", void>(); }
	void dispatchCharactersEvents(jni::ref<org::xml::sax::ContentHandler> p1) { return call_method<"dispatchCharactersEvents", void>(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> create(jni::ref<java::lang::Object> p1) { return call_static_method<"create", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> create(jni::ref<java::lang::Object> p1, jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p2) { return call_static_method<"create", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1, p2); }
	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getTypeString() { return call_method<"getTypeString", jni::ref<java::lang::String>>(); }
	jdouble num() { return call_method<"num", jdouble>(); }
	jdouble numWithSideEffects() { return call_method<"numWithSideEffects", jdouble>(); }
	jboolean bool_() { return call_method<"bool", jboolean>(); }
	jboolean boolWithSideEffects() { return call_method<"boolWithSideEffects", jboolean>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> xstr() { return call_method<"xstr", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(); }
	jni::ref<java::lang::String> str() { return call_method<"str", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint rtf(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"rtf", jint>(p1); }
	jni::ref<org::w3c::dom::DocumentFragment> rtree(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"rtree", jni::ref<org::w3c::dom::DocumentFragment>>(p1); }
	jni::ref<org::w3c::dom::DocumentFragment> rtree() { return call_method<"rtree", jni::ref<org::w3c::dom::DocumentFragment>>(); }
	jint rtf() { return call_method<"rtf", jint>(); }
	jni::ref<java::lang::Object> object() { return call_method<"object", jni::ref<java::lang::Object>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> iter() { return call_method<"iter", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> getFresh() { return call_method<"getFresh", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(); }
	jni::ref<org::w3c::dom::traversal::NodeIterator> nodeset() { return call_method<"nodeset", jni::ref<org::w3c::dom::traversal::NodeIterator>>(); }
	jni::ref<org::w3c::dom::NodeList> nodelist() { return call_method<"nodelist", jni::ref<org::w3c::dom::NodeList>>(); }
	jni::ref<com::sun::org::apache::xpath::internal::NodeSetDTM> mutableNodeset() { return call_method<"mutableNodeset", jni::ref<com::sun::org::apache::xpath::internal::NodeSetDTM>>(); }
	jni::ref<java::lang::Object> castToType(jint p1, jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p2) { return call_method<"castToType", jni::ref<java::lang::Object>>(p1, p2); }
	jboolean lessThan(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"lessThan", jboolean>(p1); }
	jboolean lessThanOrEqual(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"lessThanOrEqual", jboolean>(p1); }
	jboolean greaterThan(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"greaterThan", jboolean>(p1); }
	jboolean greaterThanOrEqual(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"greaterThanOrEqual", jboolean>(p1); }
	jboolean equals(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean notEquals(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"notEquals", jboolean>(p1); }
	void fixupVariables(jni::ref<java::util::Vector> p1, jint p2) { return call_method<"fixupVariables", void>(p1, p2); }
	void appendToFsb(jni::ref<com::sun::org::apache::xml::internal::utils::FastStringBuffer> p1) { return call_method<"appendToFsb", void>(p1); }
	void callVisitors(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::XPathVisitor> p2) { return call_method<"callVisitors", void>(p1, p2); }
	jboolean deepEquals(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return call_method<"deepEquals", jboolean>(p1); }

protected:

	XObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XOBJECT
