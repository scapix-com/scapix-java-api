// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Collectors; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Collectors>
{
	static constexpr fixed_string class_name = "java/util/stream/Collectors";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/BinaryOperator.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/function/ToDoubleFunction.h>
#include <scapix/java_api/java/util/function/ToIntFunction.h>
#include <scapix/java_api/java/util/function/ToLongFunction.h>
#include <scapix/java_api/java/util/stream/Collector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Collectors : public jni::object_base<"java/util/stream/Collectors",
	java::lang::Object>
{
public:

	static jni::ref<java::util::stream::Collector> toCollection(jni::ref<java::util::function::Supplier> p1) { return call_static_method<"toCollection", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> toList() { return call_static_method<"toList", jni::ref<java::util::stream::Collector>>(); }
	static jni::ref<java::util::stream::Collector> toSet() { return call_static_method<"toSet", jni::ref<java::util::stream::Collector>>(); }
	static jni::ref<java::util::stream::Collector> joining() { return call_static_method<"joining", jni::ref<java::util::stream::Collector>>(); }
	static jni::ref<java::util::stream::Collector> joining(jni::ref<java::lang::CharSequence> p1) { return call_static_method<"joining", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> joining(jni::ref<java::lang::CharSequence> p1, jni::ref<java::lang::CharSequence> p2, jni::ref<java::lang::CharSequence> p3) { return call_static_method<"joining", jni::ref<java::util::stream::Collector>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Collector> mapping(jni::ref<java::util::function::Function> p1, jni::ref<java::util::stream::Collector> p2) { return call_static_method<"mapping", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> collectingAndThen(jni::ref<java::util::stream::Collector> p1, jni::ref<java::util::function::Function> p2) { return call_static_method<"collectingAndThen", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> counting() { return call_static_method<"counting", jni::ref<java::util::stream::Collector>>(); }
	static jni::ref<java::util::stream::Collector> minBy(jni::ref<java::util::Comparator> p1) { return call_static_method<"minBy", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> maxBy(jni::ref<java::util::Comparator> p1) { return call_static_method<"maxBy", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> summingInt(jni::ref<java::util::function::ToIntFunction> p1) { return call_static_method<"summingInt", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> summingLong(jni::ref<java::util::function::ToLongFunction> p1) { return call_static_method<"summingLong", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> summingDouble(jni::ref<java::util::function::ToDoubleFunction> p1) { return call_static_method<"summingDouble", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> averagingInt(jni::ref<java::util::function::ToIntFunction> p1) { return call_static_method<"averagingInt", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> averagingLong(jni::ref<java::util::function::ToLongFunction> p1) { return call_static_method<"averagingLong", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> averagingDouble(jni::ref<java::util::function::ToDoubleFunction> p1) { return call_static_method<"averagingDouble", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> reducing(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BinaryOperator> p2) { return call_static_method<"reducing", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> reducing(jni::ref<java::util::function::BinaryOperator> p1) { return call_static_method<"reducing", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> reducing(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BinaryOperator> p3) { return call_static_method<"reducing", jni::ref<java::util::stream::Collector>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Collector> groupingBy(jni::ref<java::util::function::Function> p1) { return call_static_method<"groupingBy", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> groupingBy(jni::ref<java::util::function::Function> p1, jni::ref<java::util::stream::Collector> p2) { return call_static_method<"groupingBy", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> groupingBy(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Supplier> p2, jni::ref<java::util::stream::Collector> p3) { return call_static_method<"groupingBy", jni::ref<java::util::stream::Collector>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Collector> groupingByConcurrent(jni::ref<java::util::function::Function> p1) { return call_static_method<"groupingByConcurrent", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> groupingByConcurrent(jni::ref<java::util::function::Function> p1, jni::ref<java::util::stream::Collector> p2) { return call_static_method<"groupingByConcurrent", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> groupingByConcurrent(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Supplier> p2, jni::ref<java::util::stream::Collector> p3) { return call_static_method<"groupingByConcurrent", jni::ref<java::util::stream::Collector>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Collector> partitioningBy(jni::ref<java::util::function::Predicate> p1) { return call_static_method<"partitioningBy", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> partitioningBy(jni::ref<java::util::function::Predicate> p1, jni::ref<java::util::stream::Collector> p2) { return call_static_method<"partitioningBy", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> toMap(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Function> p2) { return call_static_method<"toMap", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> toMap(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BinaryOperator> p3) { return call_static_method<"toMap", jni::ref<java::util::stream::Collector>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Collector> toMap(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BinaryOperator> p3, jni::ref<java::util::function::Supplier> p4) { return call_static_method<"toMap", jni::ref<java::util::stream::Collector>>(p1, p2, p3, p4); }
	static jni::ref<java::util::stream::Collector> toConcurrentMap(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Function> p2) { return call_static_method<"toConcurrentMap", jni::ref<java::util::stream::Collector>>(p1, p2); }
	static jni::ref<java::util::stream::Collector> toConcurrentMap(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BinaryOperator> p3) { return call_static_method<"toConcurrentMap", jni::ref<java::util::stream::Collector>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Collector> toConcurrentMap(jni::ref<java::util::function::Function> p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BinaryOperator> p3, jni::ref<java::util::function::Supplier> p4) { return call_static_method<"toConcurrentMap", jni::ref<java::util::stream::Collector>>(p1, p2, p3, p4); }
	static jni::ref<java::util::stream::Collector> summarizingInt(jni::ref<java::util::function::ToIntFunction> p1) { return call_static_method<"summarizingInt", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> summarizingLong(jni::ref<java::util::function::ToLongFunction> p1) { return call_static_method<"summarizingLong", jni::ref<java::util::stream::Collector>>(p1); }
	static jni::ref<java::util::stream::Collector> summarizingDouble(jni::ref<java::util::function::ToDoubleFunction> p1) { return call_static_method<"summarizingDouble", jni::ref<java::util::stream::Collector>>(p1); }

protected:

	Collectors(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS