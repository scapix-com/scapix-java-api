// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/AbstractPipeline.h>
#include <scapix/java_api/java/util/stream/LongStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_LONGPIPELINE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_LONGPIPELINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class LongPipeline; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::LongPipeline>
{
	static constexpr fixed_string class_name = "java/util/stream/LongPipeline";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::AbstractPipeline, scapix::java_api::java::util::stream::LongStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_LONGPIPELINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_LONGPIPELINE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_LONGPIPELINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/LongSummaryStatistics.h>
#include <scapix/java_api/java/util/OptionalDouble.h>
#include <scapix/java_api/java/util/OptionalLong.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfLong.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>
#include <scapix/java_api/java/util/function/LongFunction.h>
#include <scapix/java_api/java/util/function/LongPredicate.h>
#include <scapix/java_api/java/util/function/LongToDoubleFunction.h>
#include <scapix/java_api/java/util/function/LongToIntFunction.h>
#include <scapix/java_api/java/util/function/LongUnaryOperator.h>
#include <scapix/java_api/java/util/function/ObjLongConsumer.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream_LongMapMultiConsumer.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::LongPipeline : public jni::object_base<"java/util/stream/LongPipeline",
	java::util::stream::AbstractPipeline,
	java::util::stream::LongStream>
{
public:

	jni::ref<java::util::PrimitiveIterator_OfLong> iterator() { return call_method<"iterator", jni::ref<java::util::PrimitiveIterator_OfLong>>(); }
	jni::ref<java::util::Spliterator_OfLong> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator_OfLong>>(); }
	jni::ref<java::util::stream::DoubleStream> asDoubleStream() { return call_method<"asDoubleStream", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::stream::Stream> boxed() { return call_method<"boxed", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::LongStream> map(jni::ref<java::util::function::LongUnaryOperator> mapper) { return call_method<"map", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::Stream> mapToObj(jni::ref<java::util::function::LongFunction> mapper) { return call_method<"mapToObj", jni::ref<java::util::stream::Stream>>(mapper); }
	jni::ref<java::util::stream::IntStream> mapToInt(jni::ref<java::util::function::LongToIntFunction> mapper) { return call_method<"mapToInt", jni::ref<java::util::stream::IntStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> mapToDouble(jni::ref<java::util::function::LongToDoubleFunction> mapper) { return call_method<"mapToDouble", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> flatMap(jni::ref<java::util::function::LongFunction> mapper) { return call_method<"flatMap", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> mapMulti(jni::ref<java::util::stream::LongStream_LongMapMultiConsumer> mapper) { return call_method<"mapMulti", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> unordered() { return call_method<"unordered", jni::ref<java::util::stream::LongStream>>(); }
	jni::ref<java::util::stream::LongStream> filter(jni::ref<java::util::function::LongPredicate> predicate) { return call_method<"filter", jni::ref<java::util::stream::LongStream>>(predicate); }
	jni::ref<java::util::stream::LongStream> peek(jni::ref<java::util::function::LongConsumer> action) { return call_method<"peek", jni::ref<java::util::stream::LongStream>>(action); }
	jni::ref<java::util::stream::LongStream> limit(jlong maxSize) { return call_method<"limit", jni::ref<java::util::stream::LongStream>>(maxSize); }
	jni::ref<java::util::stream::LongStream> skip(jlong n) { return call_method<"skip", jni::ref<java::util::stream::LongStream>>(n); }
	jni::ref<java::util::stream::LongStream> takeWhile(jni::ref<java::util::function::LongPredicate> predicate) { return call_method<"takeWhile", jni::ref<java::util::stream::LongStream>>(predicate); }
	jni::ref<java::util::stream::LongStream> dropWhile(jni::ref<java::util::function::LongPredicate> predicate) { return call_method<"dropWhile", jni::ref<java::util::stream::LongStream>>(predicate); }
	jni::ref<java::util::stream::LongStream> sorted() { return call_method<"sorted", jni::ref<java::util::stream::LongStream>>(); }
	jni::ref<java::util::stream::LongStream> distinct() { return call_method<"distinct", jni::ref<java::util::stream::LongStream>>(); }
	void forEach(jni::ref<java::util::function::LongConsumer> action) { return call_method<"forEach", void>(action); }
	void forEachOrdered(jni::ref<java::util::function::LongConsumer> action) { return call_method<"forEachOrdered", void>(action); }
	jlong sum() { return call_method<"sum", jlong>(); }
	jni::ref<java::util::OptionalLong> min() { return call_method<"min", jni::ref<java::util::OptionalLong>>(); }
	jni::ref<java::util::OptionalLong> max() { return call_method<"max", jni::ref<java::util::OptionalLong>>(); }
	jni::ref<java::util::OptionalDouble> average() { return call_method<"average", jni::ref<java::util::OptionalDouble>>(); }
	jlong count() { return call_method<"count", jlong>(); }
	jni::ref<java::util::LongSummaryStatistics> summaryStatistics() { return call_method<"summaryStatistics", jni::ref<java::util::LongSummaryStatistics>>(); }
	jlong reduce(jlong identity, jni::ref<java::util::function::LongBinaryOperator> p2) { return call_method<"reduce", jlong>(identity, p2); }
	jni::ref<java::util::OptionalLong> reduce(jni::ref<java::util::function::LongBinaryOperator> op) { return call_method<"reduce", jni::ref<java::util::OptionalLong>>(op); }
	jni::ref<java::lang::Object> collect(jni::ref<java::util::function::Supplier> supplier, jni::ref<java::util::function::ObjLongConsumer> accumulator, jni::ref<java::util::function::BiConsumer> combiner) { return call_method<"collect", jni::ref<java::lang::Object>>(supplier, accumulator, combiner); }
	jboolean anyMatch(jni::ref<java::util::function::LongPredicate> predicate) { return call_method<"anyMatch", jboolean>(predicate); }
	jboolean allMatch(jni::ref<java::util::function::LongPredicate> predicate) { return call_method<"allMatch", jboolean>(predicate); }
	jboolean noneMatch(jni::ref<java::util::function::LongPredicate> predicate) { return call_method<"noneMatch", jboolean>(predicate); }
	jni::ref<java::util::OptionalLong> findFirst() { return call_method<"findFirst", jni::ref<java::util::OptionalLong>>(); }
	jni::ref<java::util::OptionalLong> findAny() { return call_method<"findAny", jni::ref<java::util::OptionalLong>>(); }
	jni::ref<jni::array<jlong>> toArray() { return call_method<"toArray", jni::ref<jni::array<jlong>>>(); }

protected:

	LongPipeline(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_LONGPIPELINE
