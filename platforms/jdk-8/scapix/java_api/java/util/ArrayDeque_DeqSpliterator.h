// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYDEQUE_DEQSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYDEQUE_DEQSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArrayDeque_DeqSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArrayDeque_DeqSpliterator>
{
	static constexpr fixed_string class_name = "java/util/ArrayDeque$DeqSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYDEQUE_DEQSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYDEQUE_DEQSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYDEQUE_DEQSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArrayDeque_DeqSpliterator : public jni::object_base<"java/util/ArrayDeque$DeqSpliterator",
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::ArrayDeque_DeqSpliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::ArrayDeque_DeqSpliterator>>(); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	ArrayDeque_DeqSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYDEQUE_DEQSPLITERATOR
