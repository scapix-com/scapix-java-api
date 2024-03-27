// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_NODEITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_NODEITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc { class NodeIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::NodeIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/NodeIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_NODEITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_NODEITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_NODEITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::NodeIterator : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/NodeIterator",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jint END() { return get_static_field<"END", jint>(); }

	jint next() { return call_method<"next", jint>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::NodeIterator> reset() { return call_method<"reset", jni::ref<com::sun::org::apache::xalan::internal::xsltc::NodeIterator>>(); }
	jint getLast() { return call_method<"getLast", jint>(); }
	jint getPosition() { return call_method<"getPosition", jint>(); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::NodeIterator> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::NodeIterator>>(p1); }
	jboolean isReverse() { return call_method<"isReverse", jboolean>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::NodeIterator> cloneIterator() { return call_method<"cloneIterator", jni::ref<com::sun::org::apache::xalan::internal::xsltc::NodeIterator>>(); }
	void setRestartable(jboolean p1) { return call_method<"setRestartable", void>(p1); }

protected:

	NodeIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_NODEITERATOR