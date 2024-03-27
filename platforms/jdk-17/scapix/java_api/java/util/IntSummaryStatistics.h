// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_INTSUMMARYSTATISTICS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_INTSUMMARYSTATISTICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class IntSummaryStatistics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::IntSummaryStatistics>
{
	static constexpr fixed_string class_name = "java/util/IntSummaryStatistics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::IntConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_INTSUMMARYSTATISTICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_INTSUMMARYSTATISTICS)
#define SCAPIX_JAVA_API_JAVA_UTIL_INTSUMMARYSTATISTICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::IntSummaryStatistics : public jni::object_base<"java/util/IntSummaryStatistics",
	java::lang::Object,
	java::util::function::IntConsumer>
{
public:

	static jni::ref<java::util::IntSummaryStatistics> new_object() { return base_::new_object(); }
	static jni::ref<java::util::IntSummaryStatistics> new_object(jlong count, jint p2, jint min, jlong max) { return base_::new_object(count, p2, min, max); }
	void accept(jint value) { return call_method<"accept", void>(value); }
	void combine(jni::ref<java::util::IntSummaryStatistics> other) { return call_method<"combine", void>(other); }
	jlong getCount() { return call_method<"getCount", jlong>(); }
	jlong getSum() { return call_method<"getSum", jlong>(); }
	jint getMin() { return call_method<"getMin", jint>(); }
	jint getMax() { return call_method<"getMax", jint>(); }
	jdouble getAverage() { return call_method<"getAverage", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	IntSummaryStatistics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_INTSUMMARYSTATISTICS