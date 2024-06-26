// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_NODESORTRECORD_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_NODESORTRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class NodeSortRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_NODESORTRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_NODESORTRECORD)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_NODESORTRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/SortSettings.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/Collator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord",
	java::lang::Object>
{
public:

	static jint COMPARE_STRING() { return get_static_field<"COMPARE_STRING", jint>(); }
	static jint COMPARE_NUMERIC() { return get_static_field<"COMPARE_NUMERIC", jint>(); }
	static jint COMPARE_ASCENDING() { return get_static_field<"COMPARE_ASCENDING", jint>(); }
	static jint COMPARE_DESCENDING() { return get_static_field<"COMPARE_DESCENDING", jint>(); }

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord> new_object() { return base_::new_object(); }
	void initialize(jint p1, jint p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p3, jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::SortSettings> p4) { return call_method<"initialize", void>(p1, p2, p3, p4); }
	jint getNode() { return call_method<"getNode", jint>(); }
	jint compareDocOrder(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord> p1) { return call_method<"compareDocOrder", jint>(p1); }
	jint compareTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<jni::array<java::text::Collator>> getCollator() { return call_method<"getCollator", jni::ref<jni::array<java::text::Collator>>>(); }
	jni::ref<java::lang::String> extractValueFromDOM(jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p1, jint p2, jint p3, jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet> p4, jint p5) { return call_method<"extractValueFromDOM", jni::ref<java::lang::String>>(p1, p2, p3, p4, p5); }

protected:

	NodeSortRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_NODESORTRECORD
