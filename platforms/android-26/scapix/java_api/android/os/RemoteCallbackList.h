// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_REMOTECALLBACKLIST_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_REMOTECALLBACKLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class RemoteCallbackList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::RemoteCallbackList>
{
	static constexpr fixed_string class_name = "android/os/RemoteCallbackList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_REMOTECALLBACKLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_REMOTECALLBACKLIST)
#define SCAPIX_JAVA_API_ANDROID_OS_REMOTECALLBACKLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/IInterface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::RemoteCallbackList : public jni::object_base<"android/os/RemoteCallbackList",
	java::lang::Object>
{
public:

	static jni::ref<android::os::RemoteCallbackList> new_object() { return base_::new_object(); }
	jboolean register_(jni::ref<android::os::IInterface> callback) { return call_method<"register", jboolean>(callback); }
	jboolean register_(jni::ref<android::os::IInterface> callback, jni::ref<java::lang::Object> cookie) { return call_method<"register", jboolean>(callback, cookie); }
	jboolean unregister(jni::ref<android::os::IInterface> callback) { return call_method<"unregister", jboolean>(callback); }
	void kill() { return call_method<"kill", void>(); }
	void onCallbackDied(jni::ref<android::os::IInterface> callback) { return call_method<"onCallbackDied", void>(callback); }
	void onCallbackDied(jni::ref<android::os::IInterface> callback, jni::ref<java::lang::Object> cookie) { return call_method<"onCallbackDied", void>(callback, cookie); }
	jint beginBroadcast() { return call_method<"beginBroadcast", jint>(); }
	jni::ref<android::os::IInterface> getBroadcastItem(jint index) { return call_method<"getBroadcastItem", jni::ref<android::os::IInterface>>(index); }
	jni::ref<java::lang::Object> getBroadcastCookie(jint index) { return call_method<"getBroadcastCookie", jni::ref<java::lang::Object>>(index); }
	void finishBroadcast() { return call_method<"finishBroadcast", void>(); }
	jint getRegisteredCallbackCount() { return call_method<"getRegisteredCallbackCount", jint>(); }
	jni::ref<android::os::IInterface> getRegisteredCallbackItem(jint index) { return call_method<"getRegisteredCallbackItem", jni::ref<android::os::IInterface>>(index); }
	jni::ref<java::lang::Object> getRegisteredCallbackCookie(jint index) { return call_method<"getRegisteredCallbackCookie", jni::ref<java::lang::Object>>(index); }

protected:

	RemoteCallbackList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_REMOTECALLBACKLIST
