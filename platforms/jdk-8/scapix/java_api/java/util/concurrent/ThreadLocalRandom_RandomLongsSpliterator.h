// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMLONGSSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMLONGSSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ThreadLocalRandom_RandomLongsSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ThreadLocalRandom_RandomLongsSpliterator>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ThreadLocalRandom$RandomLongsSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfLong>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMLONGSSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMLONGSSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMLONGSSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/LongConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ThreadLocalRandom_RandomLongsSpliterator : public jni::object_base<"java/util/concurrent/ThreadLocalRandom$RandomLongsSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfLong>
{
public:

	jni::ref<java::util::concurrent::ThreadLocalRandom_RandomLongsSpliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::concurrent::ThreadLocalRandom_RandomLongsSpliterator>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jboolean tryAdvance(jni::ref<java::util::function::LongConsumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::util::function::LongConsumer> p1) { return call_method<"forEachRemaining", void>(p1); }

protected:

	ThreadLocalRandom_RandomLongsSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMLONGSSPLITERATOR
