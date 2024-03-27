// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITTABLERANDOM_RANDOMINTSSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITTABLERANDOM_RANDOMINTSSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class SplittableRandom_RandomIntsSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::SplittableRandom_RandomIntsSpliterator>
{
	static constexpr fixed_string class_name = "java/util/SplittableRandom$RandomIntsSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITTABLERANDOM_RANDOMINTSSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITTABLERANDOM_RANDOMINTSSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITTABLERANDOM_RANDOMINTSSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/IntConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::SplittableRandom_RandomIntsSpliterator : public jni::object_base<"java/util/SplittableRandom$RandomIntsSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfInt>
{
public:

	jni::ref<java::util::SplittableRandom_RandomIntsSpliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::SplittableRandom_RandomIntsSpliterator>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jboolean tryAdvance(jni::ref<java::util::function::IntConsumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::util::function::IntConsumer> p1) { return call_method<"forEachRemaining", void>(p1); }

protected:

	SplittableRandom_RandomIntsSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITTABLERANDOM_RANDOMINTSSPLITERATOR
