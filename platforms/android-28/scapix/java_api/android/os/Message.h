// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_MESSAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_MESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Message; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Message>
{
	static constexpr fixed_string class_name = "android/os/Message";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_MESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_MESSAGE)
#define SCAPIX_JAVA_API_ANDROID_OS_MESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Messenger.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Message : public jni::object_base<"android/os/Message",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	jint arg1() { return get_field<"arg1", jint>(); }
	void arg1(jint v) { set_field<"arg1", jint>(v); }
	jint arg2() { return get_field<"arg2", jint>(); }
	void arg2(jint v) { set_field<"arg2", jint>(v); }
	jni::ref<java::lang::Object> obj() { return get_field<"obj", jni::ref<java::lang::Object>>(); }
	void obj(jni::ref<java::lang::Object> v) { set_field<"obj", jni::ref<java::lang::Object>>(v); }
	jni::ref<android::os::Messenger> replyTo() { return get_field<"replyTo", jni::ref<android::os::Messenger>>(); }
	void replyTo(jni::ref<android::os::Messenger> v) { set_field<"replyTo", jni::ref<android::os::Messenger>>(v); }
	jint sendingUid() { return get_field<"sendingUid", jint>(); }
	void sendingUid(jint v) { set_field<"sendingUid", jint>(v); }
	jint what() { return get_field<"what", jint>(); }
	void what(jint v) { set_field<"what", jint>(v); }

	static jni::ref<android::os::Message> new_object() { return base_::new_object(); }
	static jni::ref<android::os::Message> obtain() { return call_static_method<"obtain", jni::ref<android::os::Message>>(); }
	static jni::ref<android::os::Message> obtain(jni::ref<android::os::Message> orig) { return call_static_method<"obtain", jni::ref<android::os::Message>>(orig); }
	static jni::ref<android::os::Message> obtain(jni::ref<android::os::Handler> h) { return call_static_method<"obtain", jni::ref<android::os::Message>>(h); }
	static jni::ref<android::os::Message> obtain(jni::ref<android::os::Handler> h, jni::ref<java::lang::Runnable> callback) { return call_static_method<"obtain", jni::ref<android::os::Message>>(h, callback); }
	static jni::ref<android::os::Message> obtain(jni::ref<android::os::Handler> h, jint what) { return call_static_method<"obtain", jni::ref<android::os::Message>>(h, what); }
	static jni::ref<android::os::Message> obtain(jni::ref<android::os::Handler> h, jint what, jni::ref<java::lang::Object> obj) { return call_static_method<"obtain", jni::ref<android::os::Message>>(h, what, obj); }
	static jni::ref<android::os::Message> obtain(jni::ref<android::os::Handler> h, jint what, jint arg1, jint arg2) { return call_static_method<"obtain", jni::ref<android::os::Message>>(h, what, arg1, arg2); }
	static jni::ref<android::os::Message> obtain(jni::ref<android::os::Handler> h, jint what, jint arg1, jint arg2, jni::ref<java::lang::Object> obj) { return call_static_method<"obtain", jni::ref<android::os::Message>>(h, what, arg1, arg2, obj); }
	void recycle() { return call_method<"recycle", void>(); }
	void copyFrom(jni::ref<android::os::Message> o) { return call_method<"copyFrom", void>(o); }
	jlong getWhen() { return call_method<"getWhen", jlong>(); }
	void setTarget(jni::ref<android::os::Handler> target) { return call_method<"setTarget", void>(target); }
	jni::ref<android::os::Handler> getTarget() { return call_method<"getTarget", jni::ref<android::os::Handler>>(); }
	jni::ref<java::lang::Runnable> getCallback() { return call_method<"getCallback", jni::ref<java::lang::Runnable>>(); }
	jni::ref<android::os::Bundle> getData() { return call_method<"getData", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::os::Bundle> peekData() { return call_method<"peekData", jni::ref<android::os::Bundle>>(); }
	void setData(jni::ref<android::os::Bundle> data) { return call_method<"setData", void>(data); }
	void sendToTarget() { return call_method<"sendToTarget", void>(); }
	jboolean isAsynchronous() { return call_method<"isAsynchronous", jboolean>(); }
	void setAsynchronous(jboolean async) { return call_method<"setAsynchronous", void>(async); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	Message(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_MESSAGE
