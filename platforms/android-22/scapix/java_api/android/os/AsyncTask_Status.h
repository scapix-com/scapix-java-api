// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_ASYNCTASK_STATUS_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_ASYNCTASK_STATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class AsyncTask_Status; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::AsyncTask_Status>
{
	static constexpr fixed_string class_name = "android/os/AsyncTask$Status";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_ASYNCTASK_STATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_ASYNCTASK_STATUS)
#define SCAPIX_JAVA_API_ANDROID_OS_ASYNCTASK_STATUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::AsyncTask_Status : public jni::object_base<"android/os/AsyncTask$Status",
	java::lang::Enum>
{
public:

	static jni::ref<android::os::AsyncTask_Status> FINISHED() { return get_static_field<"FINISHED", jni::ref<android::os::AsyncTask_Status>>(); }
	static jni::ref<android::os::AsyncTask_Status> PENDING() { return get_static_field<"PENDING", jni::ref<android::os::AsyncTask_Status>>(); }
	static jni::ref<android::os::AsyncTask_Status> RUNNING() { return get_static_field<"RUNNING", jni::ref<android::os::AsyncTask_Status>>(); }

	static jni::ref<jni::array<android::os::AsyncTask_Status>> values() { return call_static_method<"values", jni::ref<jni::array<android::os::AsyncTask_Status>>>(); }
	static jni::ref<android::os::AsyncTask_Status> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::os::AsyncTask_Status>>(name); }

protected:

	AsyncTask_Status(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_ASYNCTASK_STATUS
