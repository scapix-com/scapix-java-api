// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::perf { class PerfCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::perf::PerfCounter>
{
	static constexpr fixed_string class_name = "jdk/internal/perf/PerfCounter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::perf::PerfCounter : public jni::object_base<"jdk/internal/perf/PerfCounter",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::perf::PerfCounter> newPerfCounter(jni::ref<java::lang::String> name) { return call_static_method<"newPerfCounter", jni::ref<jdk::internal::perf::PerfCounter>>(name); }
	static jni::ref<jdk::internal::perf::PerfCounter> newConstantPerfCounter(jni::ref<java::lang::String> name) { return call_static_method<"newConstantPerfCounter", jni::ref<jdk::internal::perf::PerfCounter>>(name); }
	jlong get() { return call_method<"get", jlong>(); }
	void set(jlong newValue) { return call_method<"set", void>(newValue); }
	void add(jlong value) { return call_method<"add", void>(value); }
	void increment() { return call_method<"increment", void>(); }
	void addTime(jlong interval) { return call_method<"addTime", void>(interval); }
	void addElapsedTimeFrom(jlong startTime) { return call_method<"addElapsedTimeFrom", void>(startTime); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<jdk::internal::perf::PerfCounter> getFindClasses() { return call_static_method<"getFindClasses", jni::ref<jdk::internal::perf::PerfCounter>>(); }
	static jni::ref<jdk::internal::perf::PerfCounter> getFindClassTime() { return call_static_method<"getFindClassTime", jni::ref<jdk::internal::perf::PerfCounter>>(); }
	static jni::ref<jdk::internal::perf::PerfCounter> getReadClassBytesTime() { return call_static_method<"getReadClassBytesTime", jni::ref<jdk::internal::perf::PerfCounter>>(); }
	static jni::ref<jdk::internal::perf::PerfCounter> getParentDelegationTime() { return call_static_method<"getParentDelegationTime", jni::ref<jdk::internal::perf::PerfCounter>>(); }
	static jni::ref<jdk::internal::perf::PerfCounter> getZipFileCount() { return call_static_method<"getZipFileCount", jni::ref<jdk::internal::perf::PerfCounter>>(); }
	static jni::ref<jdk::internal::perf::PerfCounter> getZipFileOpenTime() { return call_static_method<"getZipFileOpenTime", jni::ref<jdk::internal::perf::PerfCounter>>(); }

protected:

	PerfCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER