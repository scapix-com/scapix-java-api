// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_EMPTYSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_EMPTYSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterators_EmptySpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterators_EmptySpliterator>
{
	static constexpr fixed_string class_name = "java/util/Spliterators$EmptySpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_EMPTYSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_EMPTYSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_EMPTYSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Spliterators_EmptySpliterator : public jni::object_base<"java/util/Spliterators$EmptySpliterator",
	java::lang::Object>
{
public:

	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jboolean tryAdvance(jni::ref<java::lang::Object> consumer) { return call_method<"tryAdvance", jboolean>(consumer); }
	void forEachRemaining(jni::ref<java::lang::Object> consumer) { return call_method<"forEachRemaining", void>(consumer); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	Spliterators_EmptySpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_EMPTYSPLITERATOR