// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/counter/AbstractCounter.h>
#include <scapix/java_api/sun/management/counter/LongCounter.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_LONGCOUNTERSNAPSHOT_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_LONGCOUNTERSNAPSHOT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter::perf { class LongCounterSnapshot; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::perf::LongCounterSnapshot>
{
	static constexpr fixed_string class_name = "sun/management/counter/perf/LongCounterSnapshot";
	using base_classes = std::tuple<scapix::java_api::sun::management::counter::AbstractCounter, scapix::java_api::sun::management::counter::LongCounter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_LONGCOUNTERSNAPSHOT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_LONGCOUNTERSNAPSHOT)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_LONGCOUNTERSNAPSHOT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::counter::perf::LongCounterSnapshot : public jni::object_base<"sun/management/counter/perf/LongCounterSnapshot",
	sun::management::counter::AbstractCounter,
	sun::management::counter::LongCounter>
{
public:

	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }

protected:

	LongCounterSnapshot(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_LONGCOUNTERSNAPSHOT
