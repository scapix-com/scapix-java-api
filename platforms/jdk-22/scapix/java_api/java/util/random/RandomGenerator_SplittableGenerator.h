// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/random/RandomGenerator_StreamableGenerator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_SPLITTABLEGENERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_SPLITTABLEGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::random { class RandomGenerator_SplittableGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::random::RandomGenerator_SplittableGenerator>
{
	static constexpr fixed_string class_name = "java/util/random/RandomGenerator$SplittableGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::random::RandomGenerator_StreamableGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_SPLITTABLEGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_SPLITTABLEGENERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_SPLITTABLEGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::random::RandomGenerator_SplittableGenerator : public jni::object_base<"java/util/random/RandomGenerator$SplittableGenerator",
	java::lang::Object,
	java::util::random::RandomGenerator_StreamableGenerator>
{
public:

	static jni::ref<java::util::random::RandomGenerator_SplittableGenerator> of(jni::ref<java::lang::String> name) { return call_static_method<"of", jni::ref<java::util::random::RandomGenerator_SplittableGenerator>>(name); }
	jni::ref<java::util::random::RandomGenerator_SplittableGenerator> split() { return call_method<"split", jni::ref<java::util::random::RandomGenerator_SplittableGenerator>>(); }
	jni::ref<java::util::random::RandomGenerator_SplittableGenerator> split(jni::ref<java::util::random::RandomGenerator_SplittableGenerator> p1) { return call_method<"split", jni::ref<java::util::random::RandomGenerator_SplittableGenerator>>(p1); }
	jni::ref<java::util::stream::Stream> splits() { return call_method<"splits", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> splits(jlong p1) { return call_method<"splits", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> splits(jni::ref<java::util::random::RandomGenerator_SplittableGenerator> p1) { return call_method<"splits", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> splits(jlong p1, jni::ref<java::util::random::RandomGenerator_SplittableGenerator> p2) { return call_method<"splits", jni::ref<java::util::stream::Stream>>(p1, p2); }
	jni::ref<java::util::stream::Stream> rngs() { return call_method<"rngs", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> rngs(jlong streamSize) { return call_method<"rngs", jni::ref<java::util::stream::Stream>>(streamSize); }

protected:

	RandomGenerator_SplittableGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_SPLITTABLEGENERATOR
