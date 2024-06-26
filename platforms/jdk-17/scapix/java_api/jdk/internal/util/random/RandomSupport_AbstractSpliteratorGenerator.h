// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/random/RandomGenerator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITERATORGENERATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITERATORGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util::random { class RandomSupport_AbstractSpliteratorGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::random::RandomSupport_AbstractSpliteratorGenerator>
{
	static constexpr fixed_string class_name = "jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::random::RandomGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITERATORGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITERATORGENERATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITERATORGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::random::RandomSupport_AbstractSpliteratorGenerator : public jni::object_base<"jdk/internal/util/random/RandomSupport$AbstractSpliteratorGenerator",
	java::lang::Object,
	java::util::random::RandomGenerator>
{
public:

	static jni::ref<jdk::internal::util::random::RandomSupport_AbstractSpliteratorGenerator> new_object() { return base_::new_object(); }
	static jni::ref<java::util::stream::IntStream> ints(jni::ref<java::util::random::RandomGenerator> gen, jlong streamSize) { return call_static_method<"ints", jni::ref<java::util::stream::IntStream>>(gen, streamSize); }
	static jni::ref<java::util::stream::IntStream> ints(jni::ref<java::util::random::RandomGenerator> gen) { return call_static_method<"ints", jni::ref<java::util::stream::IntStream>>(gen); }
	static jni::ref<java::util::stream::IntStream> ints(jni::ref<java::util::random::RandomGenerator> gen, jlong streamSize, jint p3, jint randomNumberOrigin) { return call_static_method<"ints", jni::ref<java::util::stream::IntStream>>(gen, streamSize, p3, randomNumberOrigin); }
	static jni::ref<java::util::stream::IntStream> ints(jni::ref<java::util::random::RandomGenerator> gen, jint randomNumberOrigin, jint randomNumberBound) { return call_static_method<"ints", jni::ref<java::util::stream::IntStream>>(gen, randomNumberOrigin, randomNumberBound); }
	static jni::ref<java::util::stream::LongStream> longs(jni::ref<java::util::random::RandomGenerator> gen, jlong streamSize) { return call_static_method<"longs", jni::ref<java::util::stream::LongStream>>(gen, streamSize); }
	static jni::ref<java::util::stream::LongStream> longs(jni::ref<java::util::random::RandomGenerator> gen) { return call_static_method<"longs", jni::ref<java::util::stream::LongStream>>(gen); }
	static jni::ref<java::util::stream::LongStream> longs(jni::ref<java::util::random::RandomGenerator> gen, jlong streamSize, jlong p3, jlong randomNumberOrigin) { return call_static_method<"longs", jni::ref<java::util::stream::LongStream>>(gen, streamSize, p3, randomNumberOrigin); }
	static jni::ref<java::util::stream::LongStream> longs(jni::ref<java::util::random::RandomGenerator> gen, jlong randomNumberOrigin, jlong p3) { return call_static_method<"longs", jni::ref<java::util::stream::LongStream>>(gen, randomNumberOrigin, p3); }
	static jni::ref<java::util::stream::DoubleStream> doubles(jni::ref<java::util::random::RandomGenerator> gen, jlong streamSize) { return call_static_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(gen, streamSize); }
	static jni::ref<java::util::stream::DoubleStream> doubles(jni::ref<java::util::random::RandomGenerator> gen) { return call_static_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(gen); }
	static jni::ref<java::util::stream::DoubleStream> doubles(jni::ref<java::util::random::RandomGenerator> gen, jlong streamSize, jdouble p3, jdouble randomNumberOrigin) { return call_static_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(gen, streamSize, p3, randomNumberOrigin); }
	static jni::ref<java::util::stream::DoubleStream> doubles(jni::ref<java::util::random::RandomGenerator> gen, jdouble randomNumberOrigin, jdouble p3) { return call_static_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(gen, randomNumberOrigin, p3); }
	jni::ref<java::util::stream::IntStream> ints(jlong streamSize) { return call_method<"ints", jni::ref<java::util::stream::IntStream>>(streamSize); }
	jni::ref<java::util::stream::IntStream> ints() { return call_method<"ints", jni::ref<java::util::stream::IntStream>>(); }
	jni::ref<java::util::stream::IntStream> ints(jlong streamSize, jint p2, jint randomNumberOrigin) { return call_method<"ints", jni::ref<java::util::stream::IntStream>>(streamSize, p2, randomNumberOrigin); }
	jni::ref<java::util::stream::IntStream> ints(jint randomNumberOrigin, jint randomNumberBound) { return call_method<"ints", jni::ref<java::util::stream::IntStream>>(randomNumberOrigin, randomNumberBound); }
	jni::ref<java::util::stream::LongStream> longs(jlong streamSize) { return call_method<"longs", jni::ref<java::util::stream::LongStream>>(streamSize); }
	jni::ref<java::util::stream::LongStream> longs() { return call_method<"longs", jni::ref<java::util::stream::LongStream>>(); }
	jni::ref<java::util::stream::LongStream> longs(jlong streamSize, jlong p2, jlong randomNumberOrigin) { return call_method<"longs", jni::ref<java::util::stream::LongStream>>(streamSize, p2, randomNumberOrigin); }
	jni::ref<java::util::stream::LongStream> longs(jlong randomNumberOrigin, jlong p2) { return call_method<"longs", jni::ref<java::util::stream::LongStream>>(randomNumberOrigin, p2); }
	jni::ref<java::util::stream::DoubleStream> doubles(jlong streamSize) { return call_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(streamSize); }
	jni::ref<java::util::stream::DoubleStream> doubles() { return call_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(); }
	jni::ref<java::util::stream::DoubleStream> doubles(jlong streamSize, jdouble p2, jdouble randomNumberOrigin) { return call_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(streamSize, p2, randomNumberOrigin); }
	jni::ref<java::util::stream::DoubleStream> doubles(jdouble randomNumberOrigin, jdouble p2) { return call_method<"doubles", jni::ref<java::util::stream::DoubleStream>>(randomNumberOrigin, p2); }

protected:

	RandomSupport_AbstractSpliteratorGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITERATORGENERATOR
