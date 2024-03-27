// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOB_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::print { class PrintJob; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::print::PrintJob>
{
	static constexpr fixed_string class_name = "android/print/PrintJob";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOB)
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/print/PrintJobId.h>
#include <scapix/java_api/android/print/PrintJobInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::print::PrintJob : public jni::object_base<"android/print/PrintJob",
	java::lang::Object>
{
public:

	jni::ref<android::print::PrintJobId> getId() { return call_method<"getId", jni::ref<android::print::PrintJobId>>(); }
	jni::ref<android::print::PrintJobInfo> getInfo() { return call_method<"getInfo", jni::ref<android::print::PrintJobInfo>>(); }
	void cancel() { return call_method<"cancel", void>(); }
	void restart() { return call_method<"restart", void>(); }
	jboolean isQueued() { return call_method<"isQueued", jboolean>(); }
	jboolean isStarted() { return call_method<"isStarted", jboolean>(); }
	jboolean isBlocked() { return call_method<"isBlocked", jboolean>(); }
	jboolean isCompleted() { return call_method<"isCompleted", jboolean>(); }
	jboolean isFailed() { return call_method<"isFailed", jboolean>(); }
	jboolean isCancelled() { return call_method<"isCancelled", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	PrintJob(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOB