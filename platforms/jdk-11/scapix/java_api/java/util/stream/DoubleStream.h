// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/BaseStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLESTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLESTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class DoubleStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::DoubleStream>
{
	static constexpr fixed_string class_name = "java/util/stream/DoubleStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::BaseStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLESTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLESTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLESTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/DoubleSummaryStatistics.h>
#include <scapix/java_api/java/util/OptionalDouble.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfDouble.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/DoubleBinaryOperator.h>
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#include <scapix/java_api/java/util/function/DoubleFunction.h>
#include <scapix/java_api/java/util/function/DoublePredicate.h>
#include <scapix/java_api/java/util/function/DoubleSupplier.h>
#include <scapix/java_api/java/util/function/DoubleToIntFunction.h>
#include <scapix/java_api/java/util/function/DoubleToLongFunction.h>
#include <scapix/java_api/java/util/function/DoubleUnaryOperator.h>
#include <scapix/java_api/java/util/function/ObjDoubleConsumer.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/DoubleStream_Builder.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::DoubleStream : public jni::object_base<"java/util/stream/DoubleStream",
	java::lang::Object,
	java::util::stream::BaseStream>
{
public:

	using Builder = DoubleStream_Builder;

	jni::ref<java::util::stream::DoubleStream> filter(jni::ref<java::util::function::DoublePredicate> p1) { return call_method<"filter", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> map(jni::ref<java::util::function::DoubleUnaryOperator> p1) { return call_method<"map", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::Stream> mapToObj(jni::ref<java::util::function::DoubleFunction> p1) { return call_method<"mapToObj", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::IntStream> mapToInt(jni::ref<java::util::function::DoubleToIntFunction> p1) { return call_method<"mapToInt", jni::ref<java::util::stream::IntStream>>(p1); }
	jni::ref<java::util::stream::LongStream> mapToLong(jni::ref<java::util::function::DoubleToLongFunction> p1) { return call_method<"mapToLong", jni::ref<java::util::stream::LongStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> flatMap(jni::ref<java::util::function::DoubleFunction> p1) { return call_method<"flatMap", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> distinct() { return call_method<"distinct", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::stream::DoubleStream> sorted() { return call_method<"sorted", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::stream::DoubleStream> peek(jni::ref<java::util::function::DoubleConsumer> p1) { return call_method<"peek", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> limit(jlong p1) { return call_method<"limit", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> skip(jlong p1) { return call_method<"skip", jni::ref<java::util::stream::DoubleStream>>(p1); }
	jni::ref<java::util::stream::DoubleStream> takeWhile(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"takeWhile", jni::ref<java::util::stream::DoubleStream>>(predicate); }
	jni::ref<java::util::stream::DoubleStream> dropWhile(jni::ref<java::util::function::DoublePredicate> predicate) { return call_method<"dropWhile", jni::ref<java::util::stream::DoubleStream>>(predicate); }
	void forEach(jni::ref<java::util::function::DoubleConsumer> p1) { return call_method<"forEach", void>(p1); }
	void forEachOrdered(jni::ref<java::util::function::DoubleConsumer> p1) { return call_method<"forEachOrdered", void>(p1); }
	jni::ref<jni::array<jdouble>> toArray() { return call_method<"toArray", jni::ref<jni::array<jdouble>>>(); }
	jdouble reduce(jdouble p1, jni::ref<java::util::function::DoubleBinaryOperator> p2) { return call_method<"reduce", jdouble>(p1, p2); }
	jni::ref<java::util::OptionalDouble> reduce(jni::ref<java::util::function::DoubleBinaryOperator> p1) { return call_method<"reduce", jni::ref<java::util::OptionalDouble>>(p1); }
	jni::ref<java::lang::Object> collect(jni::ref<java::util::function::Supplier> p1, jni::ref<java::util::function::ObjDoubleConsumer> p2, jni::ref<java::util::function::BiConsumer> p3) { return call_method<"collect", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jdouble sum() { return call_method<"sum", jdouble>(); }
	jni::ref<java::util::OptionalDouble> min() { return call_method<"min", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<java::util::OptionalDouble> max() { return call_method<"max", jni::ref<java::util::OptionalDouble>>(); }
	jlong count() { return call_method<"count", jlong>(); }
	jni::ref<java::util::OptionalDouble> average() { return call_method<"average", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<java::util::DoubleSummaryStatistics> summaryStatistics() { return call_method<"summaryStatistics", jni::ref<java::util::DoubleSummaryStatistics>>(); }
	jboolean anyMatch(jni::ref<java::util::function::DoublePredicate> p1) { return call_method<"anyMatch", jboolean>(p1); }
	jboolean allMatch(jni::ref<java::util::function::DoublePredicate> p1) { return call_method<"allMatch", jboolean>(p1); }
	jboolean noneMatch(jni::ref<java::util::function::DoublePredicate> p1) { return call_method<"noneMatch", jboolean>(p1); }
	jni::ref<java::util::OptionalDouble> findFirst() { return call_method<"findFirst", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<java::util::OptionalDouble> findAny() { return call_method<"findAny", jni::ref<java::util::OptionalDouble>>(); }
	jni::ref<java::util::stream::Stream> boxed() { return call_method<"boxed", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::DoubleStream> sequential() { return call_method<"sequential", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::stream::DoubleStream> parallel() { return call_method<"parallel", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::PrimitiveIterator_OfDouble> iterator() { return call_method<"iterator", jni::ref<java::util::PrimitiveIterator_OfDouble>>(); }
	jni::ref<java::util::Spliterator_OfDouble> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator_OfDouble>>(); }
	static jni::ref<java::util::stream::DoubleStream_Builder> builder() { return call_static_method<"builder", jni::ref<java::util::stream::DoubleStream_Builder>>(); }
	static jni::ref<java::util::stream::DoubleStream> empty() { return call_static_method<"empty", jni::ref<java::util::stream::DoubleStream>>(); }
	static jni::ref<java::util::stream::DoubleStream> of(jdouble t) { return call_static_method<"of", jni::ref<java::util::stream::DoubleStream>>(t); }
	static jni::ref<java::util::stream::DoubleStream> of(jni::ref<jni::array<jdouble>> values) { return call_static_method<"of", jni::ref<java::util::stream::DoubleStream>>(values); }
	static jni::ref<java::util::stream::DoubleStream> iterate(jdouble seed, jni::ref<java::util::function::DoubleUnaryOperator> p2) { return call_static_method<"iterate", jni::ref<java::util::stream::DoubleStream>>(seed, p2); }
	static jni::ref<java::util::stream::DoubleStream> iterate(jdouble seed, jni::ref<java::util::function::DoublePredicate> p2, jni::ref<java::util::function::DoubleUnaryOperator> hasNext) { return call_static_method<"iterate", jni::ref<java::util::stream::DoubleStream>>(seed, p2, hasNext); }
	static jni::ref<java::util::stream::DoubleStream> generate(jni::ref<java::util::function::DoubleSupplier> s) { return call_static_method<"generate", jni::ref<java::util::stream::DoubleStream>>(s); }
	static jni::ref<java::util::stream::DoubleStream> concat(jni::ref<java::util::stream::DoubleStream> a, jni::ref<java::util::stream::DoubleStream> b) { return call_static_method<"concat", jni::ref<java::util::stream::DoubleStream>>(a, b); }

protected:

	DoubleStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_DOUBLESTREAM
