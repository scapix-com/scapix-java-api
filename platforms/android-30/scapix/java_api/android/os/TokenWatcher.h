// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_TOKENWATCHER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_TOKENWATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class TokenWatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::TokenWatcher>
{
	static constexpr fixed_string class_name = "android/os/TokenWatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_TOKENWATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_TOKENWATCHER)
#define SCAPIX_JAVA_API_ANDROID_OS_TOKENWATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::TokenWatcher : public jni::object_base<"android/os/TokenWatcher",
	java::lang::Object>
{
public:

	static jni::ref<android::os::TokenWatcher> new_object(jni::ref<android::os::Handler> h, jni::ref<java::lang::String> tag) { return base_::new_object(h, tag); }
	void acquired() { return call_method<"acquired", void>(); }
	void released() { return call_method<"released", void>(); }
	void acquire(jni::ref<android::os::IBinder> token, jni::ref<java::lang::String> tag) { return call_method<"acquire", void>(token, tag); }
	void cleanup(jni::ref<android::os::IBinder> token, jboolean unlink) { return call_method<"cleanup", void>(token, unlink); }
	void release(jni::ref<android::os::IBinder> token) { return call_method<"release", void>(token); }
	jboolean isAcquired() { return call_method<"isAcquired", jboolean>(); }
	void dump() { return call_method<"dump", void>(); }
	void dump(jni::ref<java::io::PrintWriter> pw) { return call_method<"dump", void>(pw); }

protected:

	TokenWatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_TOKENWATCHER
