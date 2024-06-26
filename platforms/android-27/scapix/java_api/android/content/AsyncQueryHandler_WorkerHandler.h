// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/os/Handler.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class AsyncQueryHandler_WorkerHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::AsyncQueryHandler_WorkerHandler>
{
	static constexpr fixed_string class_name = "android/content/AsyncQueryHandler$WorkerHandler";
	using base_classes = std::tuple<scapix::java_api::android::os::Handler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/AsyncQueryHandler.h>
#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/android/os/Message.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::AsyncQueryHandler_WorkerHandler : public jni::object_base<"android/content/AsyncQueryHandler$WorkerHandler",
	android::os::Handler>
{
public:

	static jni::ref<android::content::AsyncQueryHandler_WorkerHandler> new_object(jni::ref<android::content::AsyncQueryHandler> this_0, jni::ref<android::os::Looper> looper) { return base_::new_object(this_0, looper); }
	void handleMessage(jni::ref<android::os::Message> msg) { return call_method<"handleMessage", void>(msg); }

protected:

	AsyncQueryHandler_WorkerHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER
