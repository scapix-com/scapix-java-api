// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/counter/AbstractCounter.h>
#include <scapix/java_api/sun/management/counter/ByteArrayCounter.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PERFBYTEARRAYCOUNTER_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PERFBYTEARRAYCOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter::perf { class PerfByteArrayCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::perf::PerfByteArrayCounter>
{
	static constexpr fixed_string class_name = "sun/management/counter/perf/PerfByteArrayCounter";
	using base_classes = std::tuple<scapix::java_api::sun::management::counter::AbstractCounter, scapix::java_api::sun::management::counter::ByteArrayCounter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PERFBYTEARRAYCOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PERFBYTEARRAYCOUNTER)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PERFBYTEARRAYCOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::counter::perf::PerfByteArrayCounter : public jni::object_base<"sun/management/counter/perf/PerfByteArrayCounter",
	sun::management::counter::AbstractCounter,
	sun::management::counter::ByteArrayCounter>
{
public:

	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jni::ref<jni::array<jbyte>> byteArrayValue() { return call_method<"byteArrayValue", jni::ref<jni::array<jbyte>>>(); }
	jbyte byteAt(jint p1) { return call_method<"byteAt", jbyte>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PerfByteArrayCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PERFBYTEARRAYCOUNTER
