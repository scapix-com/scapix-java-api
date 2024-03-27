// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_TESTLOOPERMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_TESTLOOPERMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class TestLooperManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::TestLooperManager>
{
	static constexpr fixed_string class_name = "android/os/TestLooperManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_TESTLOOPERMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_TESTLOOPERMANAGER)
#define SCAPIX_JAVA_API_ANDROID_OS_TESTLOOPERMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Message.h>
#include <scapix/java_api/android/os/MessageQueue.h>
#include <scapix/java_api/java/lang/Runnable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::TestLooperManager : public jni::object_base<"android/os/TestLooperManager",
	java::lang::Object>
{
public:

	jni::ref<android::os::MessageQueue> getMessageQueue() { return call_method<"getMessageQueue", jni::ref<android::os::MessageQueue>>(); }
	jni::ref<android::os::Message> next() { return call_method<"next", jni::ref<android::os::Message>>(); }
	void release() { return call_method<"release", void>(); }
	void execute(jni::ref<android::os::Message> message) { return call_method<"execute", void>(message); }
	void recycle(jni::ref<android::os::Message> msg) { return call_method<"recycle", void>(msg); }
	jboolean hasMessages(jni::ref<android::os::Handler> h, jni::ref<java::lang::Object> object, jint what) { return call_method<"hasMessages", jboolean>(h, object, what); }
	jboolean hasMessages(jni::ref<android::os::Handler> h, jni::ref<java::lang::Object> object, jni::ref<java::lang::Runnable> r) { return call_method<"hasMessages", jboolean>(h, object, r); }

protected:

	TestLooperManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_TESTLOOPERMANAGER