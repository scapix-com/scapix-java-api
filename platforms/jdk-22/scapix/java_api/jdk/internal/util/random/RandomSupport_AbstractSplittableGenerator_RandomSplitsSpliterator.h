// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/util/random/RandomSupport_RandomSpliterator.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITTABLEGENERATOR_RANDOMSPLITSSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITTABLEGENERATOR_RANDOMSPLITSSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util::random { class RandomSupport_AbstractSplittableGenerator_RandomSplitsSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::random::RandomSupport_AbstractSplittableGenerator_RandomSplitsSpliterator>
{
	static constexpr fixed_string class_name = "jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::util::random::RandomSupport_RandomSpliterator, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITTABLEGENERATOR_RANDOMSPLITSSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITTABLEGENERATOR_RANDOMSPLITSSPLITERATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITTABLEGENERATOR_RANDOMSPLITSSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::util::random::RandomSupport_AbstractSplittableGenerator_RandomSplitsSpliterator : public jni::object_base<"jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator$RandomSplitsSpliterator",
	jdk::internal::util::random::RandomSupport_RandomSpliterator,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> consumer) { return call_method<"tryAdvance", jboolean>(consumer); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> consumer) { return call_method<"forEachRemaining", void>(consumer); }

protected:

	RandomSupport_AbstractSplittableGenerator_RandomSplitsSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_ABSTRACTSPLITTABLEGENERATOR_RANDOMSPLITSSPLITERATOR