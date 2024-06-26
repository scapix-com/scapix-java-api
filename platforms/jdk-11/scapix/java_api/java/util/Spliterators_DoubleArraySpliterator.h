// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_DOUBLEARRAYSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_DOUBLEARRAYSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterators_DoubleArraySpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterators_DoubleArraySpliterator>
{
	static constexpr fixed_string class_name = "java/util/Spliterators$DoubleArraySpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_DOUBLEARRAYSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_DOUBLEARRAYSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_DOUBLEARRAYSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Spliterators_DoubleArraySpliterator : public jni::object_base<"java/util/Spliterators$DoubleArraySpliterator",
	java::lang::Object,
	java::util::Spliterator_OfDouble>
{
public:

	static jni::ref<java::util::Spliterators_DoubleArraySpliterator> new_object(jni::ref<jni::array<jdouble>> array, jint additionalCharacteristics) { return base_::new_object(array, additionalCharacteristics); }
	static jni::ref<java::util::Spliterators_DoubleArraySpliterator> new_object(jni::ref<jni::array<jdouble>> array, jint origin, jint fence, jint additionalCharacteristics) { return base_::new_object(array, origin, fence, additionalCharacteristics); }
	jni::ref<java::util::Spliterator_OfDouble> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfDouble>>(); }
	void forEachRemaining(jni::ref<java::util::function::DoubleConsumer> action) { return call_method<"forEachRemaining", void>(action); }
	jboolean tryAdvance(jni::ref<java::util::function::DoubleConsumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }

protected:

	Spliterators_DoubleArraySpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_DOUBLEARRAYSPLITERATOR
