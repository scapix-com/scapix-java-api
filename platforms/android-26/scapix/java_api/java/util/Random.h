// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Random; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Random>
{
	static constexpr fixed_string class_name = "java/util/Random";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RANDOM)
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Random : public jni::object_base<"java/util/Random",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::Random> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Random> new_object(jlong seed) { return base_::new_object(seed); }
	void setSeed(jlong seed) { return call_method<"setSeed", void>(seed); }
	void nextBytes(jni::ref<jni::array<jbyte>> bytes) { return call_method<"nextBytes", void>(bytes); }
	jint nextInt() { return call_method<"nextInt", jint>(); }
	jint nextInt(jint bound) { return call_method<"nextInt", jint>(bound); }
	jlong nextLong() { return call_method<"nextLong", jlong>(); }
	jboolean nextBoolean() { return call_method<"nextBoolean", jboolean>(); }
	jfloat nextFloat() { return call_method<"nextFloat", jfloat>(); }
	jdouble nextDouble() { return call_method<"nextDouble", jdouble>(); }
	jdouble nextGaussian() { return call_method<"nextGaussian", jdouble>(); }
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

	Random(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOM
