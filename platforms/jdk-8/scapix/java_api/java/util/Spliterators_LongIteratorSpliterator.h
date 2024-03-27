// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGITERATORSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGITERATORSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterators_LongIteratorSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterators_LongIteratorSpliterator>
{
	static constexpr fixed_string class_name = "java/util/Spliterators$LongIteratorSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfLong>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGITERATORSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGITERATORSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGITERATORSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfLong.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Spliterators_LongIteratorSpliterator : public jni::object_base<"java/util/Spliterators$LongIteratorSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfLong>
{
public:

	static jni::ref<java::util::Spliterators_LongIteratorSpliterator> new_object(jni::ref<java::util::PrimitiveIterator_OfLong> p1, jlong p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::util::Spliterators_LongIteratorSpliterator> new_object(jni::ref<java::util::PrimitiveIterator_OfLong> p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<java::util::Spliterator_OfLong> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfLong>>(); }
	void forEachRemaining(jni::ref<java::util::function::LongConsumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jboolean tryAdvance(jni::ref<java::util::function::LongConsumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }

protected:

	Spliterators_LongIteratorSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGITERATORSPLITERATOR
