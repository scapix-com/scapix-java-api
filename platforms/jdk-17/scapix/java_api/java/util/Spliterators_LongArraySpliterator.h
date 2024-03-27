// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGARRAYSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGARRAYSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterators_LongArraySpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterators_LongArraySpliterator>
{
	static constexpr fixed_string class_name = "java/util/Spliterators$LongArraySpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfLong>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGARRAYSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGARRAYSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGARRAYSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Spliterators_LongArraySpliterator : public jni::object_base<"java/util/Spliterators$LongArraySpliterator",
	java::lang::Object,
	java::util::Spliterator_OfLong>
{
public:

	static jni::ref<java::util::Spliterators_LongArraySpliterator> new_object(jni::ref<jni::array<jlong>> array, jint additionalCharacteristics) { return base_::new_object(array, additionalCharacteristics); }
	static jni::ref<java::util::Spliterators_LongArraySpliterator> new_object(jni::ref<jni::array<jlong>> array, jint origin, jint fence, jint additionalCharacteristics) { return base_::new_object(array, origin, fence, additionalCharacteristics); }
	jni::ref<java::util::Spliterator_OfLong> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfLong>>(); }
	void forEachRemaining(jni::ref<java::util::function::LongConsumer> action) { return call_method<"forEachRemaining", void>(action); }
	jboolean tryAdvance(jni::ref<java::util::function::LongConsumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }

protected:

	Spliterators_LongArraySpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_LONGARRAYSPLITERATOR