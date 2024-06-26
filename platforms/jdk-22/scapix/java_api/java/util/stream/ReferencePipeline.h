// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/AbstractPipeline.h>
#include <scapix/java_api/java/util/stream/Stream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class ReferencePipeline; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::ReferencePipeline>
{
	static constexpr fixed_string class_name = "java/util/stream/ReferencePipeline";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::AbstractPipeline, scapix::java_api::java::util::stream::Stream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/BinaryOperator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/IntFunction.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/function/ToDoubleFunction.h>
#include <scapix/java_api/java/util/function/ToIntFunction.h>
#include <scapix/java_api/java/util/function/ToLongFunction.h>
#include <scapix/java_api/java/util/stream/Collector.h>
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/Gatherer.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::ReferencePipeline : public jni::object_base<"java/util/stream/ReferencePipeline",
	java::util::stream::AbstractPipeline,
	java::util::stream::Stream>
{
public:

	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::stream::Stream> unordered() { return call_method<"unordered", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> filter(jni::ref<java::util::function::Predicate> predicate) { return call_method<"filter", jni::ref<java::util::stream::Stream>>(predicate); }
	jni::ref<java::util::stream::Stream> map(jni::ref<java::util::function::Function> mapper) { return call_method<"map", jni::ref<java::util::stream::Stream>>(mapper); }
	jni::ref<java::util::stream::IntStream> mapToInt(jni::ref<java::util::function::ToIntFunction> mapper) { return call_method<"mapToInt", jni::ref<java::util::stream::IntStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> mapToLong(jni::ref<java::util::function::ToLongFunction> mapper) { return call_method<"mapToLong", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> mapToDouble(jni::ref<java::util::function::ToDoubleFunction> mapper) { return call_method<"mapToDouble", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::Stream> flatMap(jni::ref<java::util::function::Function> mapper) { return call_method<"flatMap", jni::ref<java::util::stream::Stream>>(mapper); }
	jni::ref<java::util::stream::IntStream> flatMapToInt(jni::ref<java::util::function::Function> mapper) { return call_method<"flatMapToInt", jni::ref<java::util::stream::IntStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> flatMapToDouble(jni::ref<java::util::function::Function> mapper) { return call_method<"flatMapToDouble", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> flatMapToLong(jni::ref<java::util::function::Function> mapper) { return call_method<"flatMapToLong", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::Stream> mapMulti(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMulti", jni::ref<java::util::stream::Stream>>(mapper); }
	jni::ref<java::util::stream::IntStream> mapMultiToInt(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMultiToInt", jni::ref<java::util::stream::IntStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> mapMultiToLong(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMultiToLong", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> mapMultiToDouble(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMultiToDouble", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::Stream> peek(jni::ref<java::util::function::Consumer> action) { return call_method<"peek", jni::ref<java::util::stream::Stream>>(action); }
	jni::ref<java::util::stream::Stream> distinct() { return call_method<"distinct", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> sorted() { return call_method<"sorted", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> sorted(jni::ref<java::util::Comparator> comparator) { return call_method<"sorted", jni::ref<java::util::stream::Stream>>(comparator); }
	jni::ref<java::util::stream::Stream> limit(jlong maxSize) { return call_method<"limit", jni::ref<java::util::stream::Stream>>(maxSize); }
	jni::ref<java::util::stream::Stream> skip(jlong n) { return call_method<"skip", jni::ref<java::util::stream::Stream>>(n); }
	jni::ref<java::util::stream::Stream> takeWhile(jni::ref<java::util::function::Predicate> predicate) { return call_method<"takeWhile", jni::ref<java::util::stream::Stream>>(predicate); }
	jni::ref<java::util::stream::Stream> dropWhile(jni::ref<java::util::function::Predicate> predicate) { return call_method<"dropWhile", jni::ref<java::util::stream::Stream>>(predicate); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	void forEachOrdered(jni::ref<java::util::function::Consumer> action) { return call_method<"forEachOrdered", void>(action); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<java::util::function::IntFunction> generator) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(generator); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<java::util::List> toList() { return call_method<"toList", jni::ref<java::util::List>>(); }
	jboolean anyMatch(jni::ref<java::util::function::Predicate> predicate) { return call_method<"anyMatch", jboolean>(predicate); }
	jboolean allMatch(jni::ref<java::util::function::Predicate> predicate) { return call_method<"allMatch", jboolean>(predicate); }
	jboolean noneMatch(jni::ref<java::util::function::Predicate> predicate) { return call_method<"noneMatch", jboolean>(predicate); }
	jni::ref<java::util::Optional> findFirst() { return call_method<"findFirst", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::Optional> findAny() { return call_method<"findAny", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::Object> reduce(jni::ref<java::lang::Object> identity, jni::ref<java::util::function::BinaryOperator> accumulator) { return call_method<"reduce", jni::ref<java::lang::Object>>(identity, accumulator); }
	jni::ref<java::util::Optional> reduce(jni::ref<java::util::function::BinaryOperator> accumulator) { return call_method<"reduce", jni::ref<java::util::Optional>>(accumulator); }
	jni::ref<java::lang::Object> reduce(jni::ref<java::lang::Object> identity, jni::ref<java::util::function::BiFunction> accumulator, jni::ref<java::util::function::BinaryOperator> combiner) { return call_method<"reduce", jni::ref<java::lang::Object>>(identity, accumulator, combiner); }
	jni::ref<java::util::stream::Stream> gather(jni::ref<java::util::stream::Gatherer> gatherer) { return call_method<"gather", jni::ref<java::util::stream::Stream>>(gatherer); }
	jni::ref<java::lang::Object> collect(jni::ref<java::util::stream::Collector> collector) { return call_method<"collect", jni::ref<java::lang::Object>>(collector); }
	jni::ref<java::lang::Object> collect(jni::ref<java::util::function::Supplier> supplier, jni::ref<java::util::function::BiConsumer> accumulator, jni::ref<java::util::function::BiConsumer> combiner) { return call_method<"collect", jni::ref<java::lang::Object>>(supplier, accumulator, combiner); }
	jni::ref<java::util::Optional> max(jni::ref<java::util::Comparator> comparator) { return call_method<"max", jni::ref<java::util::Optional>>(comparator); }
	jni::ref<java::util::Optional> min(jni::ref<java::util::Comparator> comparator) { return call_method<"min", jni::ref<java::util::Optional>>(comparator); }
	jlong count() { return call_method<"count", jlong>(); }

protected:

	ReferencePipeline(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE
