// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/random/RandomGenerator_LeapableGenerator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_ARBITRARILYJUMPABLEGENERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_ARBITRARILYJUMPABLEGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::random { class RandomGenerator_ArbitrarilyJumpableGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator>
{
	static constexpr fixed_string class_name = "java/util/random/RandomGenerator$ArbitrarilyJumpableGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::random::RandomGenerator_LeapableGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_ARBITRARILYJUMPABLEGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_ARBITRARILYJUMPABLEGENERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_ARBITRARILYJUMPABLEGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator : public jni::object_base<"java/util/random/RandomGenerator$ArbitrarilyJumpableGenerator",
	java::lang::Object,
	java::util::random::RandomGenerator_LeapableGenerator>
{
public:

	static jni::ref<java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator> of(jni::ref<java::lang::String> name) { return call_static_method<"of", jni::ref<java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator>>(name); }
	jni::ref<java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator> copy() { return call_method<"copy", jni::ref<java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator>>(); }
	void jumpPowerOfTwo(jint p1) { return call_method<"jumpPowerOfTwo", void>(p1); }
	void jump(jdouble p1) { return call_method<"jump", void>(p1); }
	void jump() { return call_method<"jump", void>(); }
	jni::ref<java::util::stream::Stream> jumps(jdouble distance) { return call_method<"jumps", jni::ref<java::util::stream::Stream>>(distance); }
	jni::ref<java::util::stream::Stream> jumps(jlong streamSize, jdouble p2) { return call_method<"jumps", jni::ref<java::util::stream::Stream>>(streamSize, p2); }
	void leap() { return call_method<"leap", void>(); }
	jni::ref<java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator> copyAndJump(jdouble distance) { return call_method<"copyAndJump", jni::ref<java::util::random::RandomGenerator_ArbitrarilyJumpableGenerator>>(distance); }

protected:

	RandomGenerator_ArbitrarilyJumpableGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOM_RANDOMGENERATOR_ARBITRARILYJUMPABLEGENERATOR
