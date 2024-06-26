// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_FILTEREXPRITERATORSIMPLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_FILTEREXPRITERATORSIMPLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::axes { class FilterExprIteratorSimple; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::axes::LocPathIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_FILTEREXPRITERATORSIMPLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_FILTEREXPRITERATORSIMPLE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_FILTEREXPRITERATORSIMPLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple : public jni::object_base<"com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple",
	com::sun::org::apache::xpath::internal::axes::LocPathIterator>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple> new_object(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return base_::new_object(p1); }
	void setRoot(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"setRoot", void>(p1, p2); }
	static jni::ref<com::sun::org::apache::xpath::internal::objects::XNodeSet> executeFilterExpr(jint p1, jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p2, jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> p3, jboolean p4, jint p5, jni::ref<com::sun::org::apache::xpath::internal::Expression> p6) { return call_static_method<"executeFilterExpr", jni::ref<com::sun::org::apache::xpath::internal::objects::XNodeSet>>(p1, p2, p3, p4, p5, p6); }
	jint nextNode() { return call_method<"nextNode", jint>(); }
	void detach() { return call_method<"detach", void>(); }
	void fixupVariables(jni::ref<java::util::Vector> p1, jint p2) { return call_method<"fixupVariables", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xpath::internal::Expression> getInnerExpression() { return call_method<"getInnerExpression", jni::ref<com::sun::org::apache::xpath::internal::Expression>>(); }
	void setInnerExpression(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return call_method<"setInnerExpression", void>(p1); }
	jint getAnalysisBits() { return call_method<"getAnalysisBits", jint>(); }
	jboolean isDocOrdered() { return call_method<"isDocOrdered", jboolean>(); }
	void callPredicateVisitors(jni::ref<com::sun::org::apache::xpath::internal::XPathVisitor> p1) { return call_method<"callPredicateVisitors", void>(p1); }
	jboolean deepEquals(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return call_method<"deepEquals", jboolean>(p1); }
	jint getAxis() { return call_method<"getAxis", jint>(); }

protected:

	FilterExprIteratorSimple(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_FILTEREXPRITERATORSIMPLE
