// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/BaseStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Stream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Stream>
{
	static constexpr fixed_string class_name = "java/util/stream/Stream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::BaseStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
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
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#include <scapix/java_api/java/util/stream/Collector.h>
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/Gatherer.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#include <scapix/java_api/java/util/stream/Stream_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Stream : public jni::object_base<"java/util/stream/Stream",
	java::lang::Object,
	java::util::stream::BaseStream>
{
public:

	using Builder = Stream_Builder;

	jni::ref<java::util::stream::Stream> filter(jni::ref<java::util::function::Predicate> p1) { return call_method<"filter", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> map(jni::ref<java::util::function::Function> p1) { return call_method<"map", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::IntStream> mapToInt(jni::ref<java::util::function::ToIntFunction> p1) { return call_method<"mapToInt", jni::ref<java::util::stream::IntStream>>(p1); }
	jni::ref<java::util::stream::LongStream> mapToLong(jni::ref<java::util::function::ToLongFunction> p1) { return call_method<"mapToLong", jni::ref<java::util::stream::LongStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> mapToDouble(jni::ref<java::util::function::ToDoubleFunction> p1) { return call_method<"mapToDouble", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::Stream> flatMap(jni::ref<java::util::function::Function> p1) { return call_method<"flatMap", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::IntStream> flatMapToInt(jni::ref<java::util::function::Function> p1) { return call_method<"flatMapToInt", jni::ref<java::util::stream::IntStream>>(p1); }
	jni::ref<java::util::stream::LongStream> flatMapToLong(jni::ref<java::util::function::Function> p1) { return call_method<"flatMapToLong", jni::ref<java::util::stream::LongStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> flatMapToDouble(jni::ref<java::util::function::Function> p1) { return call_method<"flatMapToDouble", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::Stream> mapMulti(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMulti", jni::ref<java::util::stream::Stream>>(mapper); }
	jni::ref<java::util::stream::IntStream> mapMultiToInt(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMultiToInt", jni::ref<java::util::stream::IntStream>>(mapper); }
	jni::ref<java::util::stream::LongStream> mapMultiToLong(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMultiToLong", jni::ref<java::util::stream::LongStream>>(mapper); }
	jni::ref<java::util::stream::DoubleStream> mapMultiToDouble(jni::ref<java::util::function::BiConsumer> mapper) { return call_method<"mapMultiToDouble", jni::ref<java::util::stream::DoubleStream>>(mapper); }
	jni::ref<java::util::stream::Stream> distinct() { return call_method<"distinct", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> sorted() { return call_method<"sorted", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> sorted(jni::ref<java::util::Comparator> p1) { return call_method<"sorted", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> peek(jni::ref<java::util::function::Consumer> p1) { return call_method<"peek", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> limit(jlong p1) { return call_method<"limit", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> skip(jlong p1) { return call_method<"skip", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> takeWhile(jni::ref<java::util::function::Predicate> predicate) { return call_method<"takeWhile", jni::ref<java::util::stream::Stream>>(predicate); }
	jni::ref<java::util::stream::Stream> dropWhile(jni::ref<java::util::function::Predicate> predicate) { return call_method<"dropWhile", jni::ref<java::util::stream::Stream>>(predicate); }
	void forEach(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEach", void>(p1); }
	void forEachOrdered(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachOrdered", void>(p1); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<java::util::function::IntFunction> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jni::ref<java::lang::Object> reduce(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BinaryOperator> p2) { return call_method<"reduce", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::util::Optional> reduce(jni::ref<java::util::function::BinaryOperator> p1) { return call_method<"reduce", jni::ref<java::util::Optional>>(p1); }
	jni::ref<java::lang::Object> reduce(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2, jni::ref<java::util::function::BinaryOperator> p3) { return call_method<"reduce", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<java::util::stream::Stream> gather(jni::ref<java::util::stream::Gatherer> gatherer) { return call_method<"gather", jni::ref<java::util::stream::Stream>>(gatherer); }
	jni::ref<java::lang::Object> collect(jni::ref<java::util::function::Supplier> p1, jni::ref<java::util::function::BiConsumer> p2, jni::ref<java::util::function::BiConsumer> p3) { return call_method<"collect", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<java::lang::Object> collect(jni::ref<java::util::stream::Collector> p1) { return call_method<"collect", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::List> toList() { return call_method<"toList", jni::ref<java::util::List>>(); }
	jni::ref<java::util::Optional> min(jni::ref<java::util::Comparator> p1) { return call_method<"min", jni::ref<java::util::Optional>>(p1); }
	jni::ref<java::util::Optional> max(jni::ref<java::util::Comparator> p1) { return call_method<"max", jni::ref<java::util::Optional>>(p1); }
	jlong count() { return call_method<"count", jlong>(); }
	jboolean anyMatch(jni::ref<java::util::function::Predicate> p1) { return call_method<"anyMatch", jboolean>(p1); }
	jboolean allMatch(jni::ref<java::util::function::Predicate> p1) { return call_method<"allMatch", jboolean>(p1); }
	jboolean noneMatch(jni::ref<java::util::function::Predicate> p1) { return call_method<"noneMatch", jboolean>(p1); }
	jni::ref<java::util::Optional> findFirst() { return call_method<"findFirst", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::Optional> findAny() { return call_method<"findAny", jni::ref<java::util::Optional>>(); }
	static jni::ref<java::util::stream::Stream_Builder> builder() { return call_static_method<"builder", jni::ref<java::util::stream::Stream_Builder>>(); }
	static jni::ref<java::util::stream::Stream> empty() { return call_static_method<"empty", jni::ref<java::util::stream::Stream>>(); }
	static jni::ref<java::util::stream::Stream> of(jni::ref<java::lang::Object> t) { return call_static_method<"of", jni::ref<java::util::stream::Stream>>(t); }
	static jni::ref<java::util::stream::Stream> ofNullable(jni::ref<java::lang::Object> t) { return call_static_method<"ofNullable", jni::ref<java::util::stream::Stream>>(t); }
	static jni::ref<java::util::stream::Stream> of(jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"of", jni::ref<java::util::stream::Stream>>(values); }
	static jni::ref<java::util::stream::Stream> iterate(jni::ref<java::lang::Object> seed, jni::ref<java::util::function::UnaryOperator> f) { return call_static_method<"iterate", jni::ref<java::util::stream::Stream>>(seed, f); }
	static jni::ref<java::util::stream::Stream> iterate(jni::ref<java::lang::Object> seed, jni::ref<java::util::function::Predicate> hasNext, jni::ref<java::util::function::UnaryOperator> next) { return call_static_method<"iterate", jni::ref<java::util::stream::Stream>>(seed, hasNext, next); }
	static jni::ref<java::util::stream::Stream> generate(jni::ref<java::util::function::Supplier> s) { return call_static_method<"generate", jni::ref<java::util::stream::Stream>>(s); }
	static jni::ref<java::util::stream::Stream> concat(jni::ref<java::util::stream::Stream> a, jni::ref<java::util::stream::Stream> b) { return call_static_method<"concat", jni::ref<java::util::stream::Stream>>(a, b); }

protected:

	Stream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM
