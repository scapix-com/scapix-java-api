// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterators_AbstractSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterators_AbstractSpliterator>
{
	static constexpr fixed_string class_name = "java/util/Spliterators$AbstractSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Spliterators_AbstractSpliterator : public jni::object_base<"java/util/Spliterators$AbstractSpliterator",
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	Spliterators_AbstractSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR
