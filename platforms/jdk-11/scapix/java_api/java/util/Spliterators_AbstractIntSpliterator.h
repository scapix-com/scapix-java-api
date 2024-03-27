// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterators_AbstractIntSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterators_AbstractIntSpliterator>
{
	static constexpr fixed_string class_name = "java/util/Spliterators$AbstractIntSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Spliterators_AbstractIntSpliterator : public jni::object_base<"java/util/Spliterators$AbstractIntSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfInt>
{
public:

	jni::ref<java::util::Spliterator_OfInt> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfInt>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	Spliterators_AbstractIntSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR