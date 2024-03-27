// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_SPANS_SPANINTERSECTION_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_SPANS_SPANINTERSECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d { class Spans_SpanIntersection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::Spans_SpanIntersection>
{
	static constexpr fixed_string class_name = "sun/java2d/Spans$SpanIntersection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_SPANS_SPANINTERSECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_SPANS_SPANINTERSECTION)
#define SCAPIX_JAVA_API_SUN_JAVA2D_SPANS_SPANINTERSECTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::Spans_SpanIntersection : public jni::object_base<"sun/java2d/Spans$SpanIntersection",
	java::lang::Object,
	java::util::Comparator>
{
public:

	jint compare(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	Spans_SpanIntersection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_SPANS_SPANINTERSECTION