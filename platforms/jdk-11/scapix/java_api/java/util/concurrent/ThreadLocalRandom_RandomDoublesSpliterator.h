// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMDOUBLESSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMDOUBLESSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ThreadLocalRandom_RandomDoublesSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ThreadLocalRandom_RandomDoublesSpliterator>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ThreadLocalRandom$RandomDoublesSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMDOUBLESSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMDOUBLESSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMDOUBLESSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ThreadLocalRandom_RandomDoublesSpliterator : public jni::object_base<"java/util/concurrent/ThreadLocalRandom$RandomDoublesSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfDouble>
{
public:

	jni::ref<java::util::concurrent::ThreadLocalRandom_RandomDoublesSpliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::concurrent::ThreadLocalRandom_RandomDoublesSpliterator>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jboolean tryAdvance(jni::ref<java::util::function::DoubleConsumer> consumer) { return call_method<"tryAdvance", jboolean>(consumer); }
	void forEachRemaining(jni::ref<java::util::function::DoubleConsumer> consumer) { return call_method<"forEachRemaining", void>(consumer); }

protected:

	ThreadLocalRandom_RandomDoublesSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_RANDOMDOUBLESSPLITERATOR