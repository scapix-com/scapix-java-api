// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/util/random/RandomSupport_RandomSpliterator.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTARBITRARILYJUMPABLEGENERATOR_RANDOMDOUBLESSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTARBITRARILYJUMPABLEGENERATOR_RANDOMDOUBLESSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util::random { class RandomSupport_AbstractArbitrarilyJumpableGenerator_RandomDoublesSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::random::RandomSupport_AbstractArbitrarilyJumpableGenerator_RandomDoublesSpliterator>
{
	static constexpr fixed_string class_name = "jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomDoublesSpliterator";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::util::random::RandomSupport_RandomSpliterator, scapix::java_api::java::util::Spliterator_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTARBITRARILYJUMPABLEGENERATOR_RANDOMDOUBLESSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTARBITRARILYJUMPABLEGENERATOR_RANDOMDOUBLESSPLITERATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTARBITRARILYJUMPABLEGENERATOR_RANDOMDOUBLESSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::util::random::RandomSupport_AbstractArbitrarilyJumpableGenerator_RandomDoublesSpliterator : public jni::object_base<"jdk/internal/util/random/RandomSupport$AbstractArbitrarilyJumpableGenerator$RandomDoublesSpliterator",
	jdk::internal::util::random::RandomSupport_RandomSpliterator,
	java::util::Spliterator_OfDouble>
{
public:

	jni::ref<java::util::Spliterator_OfDouble> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfDouble>>(); }
	jboolean tryAdvance(jni::ref<java::util::function::DoubleConsumer> consumer) { return call_method<"tryAdvance", jboolean>(consumer); }
	void forEachRemaining(jni::ref<java::util::function::DoubleConsumer> consumer) { return call_method<"forEachRemaining", void>(consumer); }

protected:

	RandomSupport_AbstractArbitrarilyJumpableGenerator_RandomDoublesSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTARBITRARILYJUMPABLEGENERATOR_RANDOMDOUBLESSPLITERATOR