// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class MessageQueue_IdleHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::MessageQueue_IdleHandler>
{
	static constexpr fixed_string class_name = "android/os/MessageQueue$IdleHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER)
#define SCAPIX_JAVA_API_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::MessageQueue_IdleHandler : public jni::object_base<"android/os/MessageQueue$IdleHandler",
	java::lang::Object>
{
public:

	jboolean queueIdle() { return call_method<"queueIdle", jboolean>(); }

protected:

	MessageQueue_IdleHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER
