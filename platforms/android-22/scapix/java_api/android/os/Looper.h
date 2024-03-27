// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_LOOPER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_LOOPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Looper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Looper>
{
	static constexpr fixed_string class_name = "android/os/Looper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_LOOPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_LOOPER)
#define SCAPIX_JAVA_API_ANDROID_OS_LOOPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/MessageQueue.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Looper : public jni::object_base<"android/os/Looper",
	java::lang::Object>
{
public:

	static void prepare() { return call_static_method<"prepare", void>(); }
	static void prepareMainLooper() { return call_static_method<"prepareMainLooper", void>(); }
	static jni::ref<android::os::Looper> getMainLooper() { return call_static_method<"getMainLooper", jni::ref<android::os::Looper>>(); }
	static void loop() { return call_static_method<"loop", void>(); }
	static jni::ref<android::os::Looper> myLooper() { return call_static_method<"myLooper", jni::ref<android::os::Looper>>(); }
	void setMessageLogging(jni::ref<android::util::Printer> printer) { return call_method<"setMessageLogging", void>(printer); }
	static jni::ref<android::os::MessageQueue> myQueue() { return call_static_method<"myQueue", jni::ref<android::os::MessageQueue>>(); }
	void quit() { return call_method<"quit", void>(); }
	void quitSafely() { return call_method<"quitSafely", void>(); }
	jni::ref<java::lang::Thread> getThread() { return call_method<"getThread", jni::ref<java::lang::Thread>>(); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Looper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_LOOPER
