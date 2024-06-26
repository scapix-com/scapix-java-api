// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/AbstractPipeline.h>
#include <scapix/java_api/java/util/stream/DoubleStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLEPIPELINE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLEPIPELINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class DoublePipeline; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::DoublePipeline>
{
	static constexpr fixed_string class_name = "java/util/stream/DoublePipeline";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::AbstractPipeline, scapix::java_api::java::util::stream::DoubleStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLEPIPELINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLEPIPELINE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLEPIPELINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/DoubleSummaryStatistics.h>
#include <scapix/java_api/java/util/OptionalDouble.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfDouble.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/DoubleBinaryOperator.h>
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#include <scapix/java_api/java/util/function/DoubleFunction.h>
#include <scapix/java_api/java/util/function/DoublePredicate.h>
#include <scapix/java_api/java/util/function/DoubleToIntFunction.h>
#include <scapix/java_api/java/util/function/DoubleToLongFunction.h>
#include <scapix/java_api/java/util/function/DoubleUnaryOperator.h>
#include <scapix/java_api/java/util/function/ObjDoubleConsumer.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/DoubleStream_DoubleMapMultiConsumer.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::DoublePipeline : public jni::object_base<"java/util/stream/DoublePipeline",
	java::util::stream::AbstractPipeline,
	java::util::stream::DoubleStream>
{
public:

	jni::ref<java::util::PrimitiveIterator_OfDouble> iterator() { return call_method<"iterator", jni::ref<java::util::PrimitiveIterator_OfDouble>>(); }
	jni::ref<java::util::Spliterator_OfDouble> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator_OfDouble>>(); }
	jni::ref<java::util::stream::Stream> boxed() { return call_method<"boxed", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::DoubleStream> map(jni::ref<java::util::function::DoubleUnaryOperator> mapper) { return call_method<"map", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::Stream> mapToObj(jni::ref<java::util::function::DoubleFunction> mapper) { return call_method<"mapToObj", jni::ref<java::util::stream::Stream>>(mapper); }
	jni::ref<java::util::stream::IntStream> mapToInt(jni::ref<java::util::function::DoubleToIntFunction> mapper) { return call_method<"mapToInt", jni::ref<java::util::stream::IntStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> mapToLong(jni::ref<java::util::function::DoubleToLongFunction> mapper) { return call_method<"mapToLong", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> flatMap(jni::ref<java::util::function::DoubleFunction> mapper) { return call_method<"flatMap", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> mapMulti(jni::ref<java::util::stream::DoubleStream_DoubleMapMultiConsumer> mapper) { return call_method<"mapMulti", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> unordered() { return call_method<"unordered", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::stream::DoubleStream> filter(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"filter", jni::ref<java::util::stream::DoubleStream>>(predicate); }
	jni::ref<java::util::stream::DoubleStream> peek(jni::ref<java::util::function::DoubleConsumer> action) { return call_method<"peek", jni::ref<java::util::stream::DoubleStream>>(action); }
	jni::ref<java::util::stream::DoubleStream> limit(jlong maxSize) { return call_method<"limit", jni::ref<java::util::stream::DoubleStream>>(maxSize); }
	jni::ref<java::util::stream::DoubleStream> skip(jlong n) { return call_method<"skip", jni::ref<java::util::stream::DoubleStream>>(n); }
	jni::ref<java::util::stream::DoubleStream> takeWhile(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"takeWhile", jni::ref<java::util::stream::DoubleStream>>(predicate); }
	jni::ref<java::util::stream::DoubleStream> dropWhile(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"dropWhile", jni::ref<java::util::stream::DoubleStream>>(predicate); }
	jni::ref<java::util::stream::DoubleStream> sorted() { return call_method<"sorted", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::stream::DoubleStream> distinct() { return call_method<"distinct", jni::ref<java::util::stream::DoubleStream>>(); }
	void forEach(jni::ref<java::util::function::DoubleConsumer> consumer) { return call_method<"forEach", void>(consumer); }
	void forEachOrdered(jni::ref<java::util::function::DoubleConsumer> consumer) { return call_method<"forEachOrdered", void>(consumer); }
	jdouble sum() { return call_method<"sum", jdouble>(); }
	jni::ref<java::util::OptionalDouble> min() { return call_method<"min", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<java::util::OptionalDouble> max() { return call_method<"max", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<java::util::OptionalDouble> average() { return call_method<"average", jni::ref<java::util::OptionalDouble>>(); }
	jlong count() { return call_method<"count", jlong>(); }
	jni::ref<java::util::DoubleSummaryStatistics> summaryStatistics() { return call_method<"summaryStatistics", jni::ref<java::util::DoubleSummaryStatistics>>(); }
	jdouble reduce(jdouble identity, jni::ref<java::util::function::DoubleBinaryOperator> p2) { return call_method<"reduce", jdouble>(identity, p2); }
	jni::ref<java::util::OptionalDouble> reduce(jni::ref<java::util::function::DoubleBinaryOperator> op) { return call_method<"reduce", jni::ref<java::util::OptionalDouble>>(op); }
	jni::ref<java::lang::Object> collect(jni::ref<java::util::function::Supplier> supplier, jni::ref<java::util::function::ObjDoubleConsumer> accumulator, jni::ref<java::util::function::BiConsumer> combiner) { return call_method<"collect", jni::ref<java::lang::Object>>(supplier, accumulator, combiner); }
	jboolean anyMatch(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"anyMatch", jboolean>(predicate); }
	jboolean allMatch(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"allMatch", jboolean>(predicate); }
	jboolean noneMatch(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"noneMatch", jboolean>(predicate); }
	jni::ref<java::util::OptionalDouble> findFirst() { return call_method<"findFirst", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<java::util::OptionalDouble> findAny() { return call_method<"findAny", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<jni::array<jdouble>> toArray() { return call_method<"toArray", jni::ref<jni::array<jdouble>>>(); }

protected:

	DoublePipeline(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLEPIPELINE
