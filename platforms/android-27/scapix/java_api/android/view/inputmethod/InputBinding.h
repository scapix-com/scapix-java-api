// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InputBinding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InputBinding>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InputBinding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InputBinding : public jni::object_base<"android/view/inputmethod/InputBinding",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::inputmethod::InputBinding> new_object(jni::ref<android::view::inputmethod::InputConnection> conn, jni::ref<android::os::IBinder> connToken, jint uid, jint pid) { return base_::new_object(conn, connToken, uid, pid); }
	static jni::ref<android::view::inputmethod::InputBinding> new_object(jni::ref<android::view::inputmethod::InputConnection> conn, jni::ref<android::view::inputmethod::InputBinding> binding) { return base_::new_object(conn, binding); }
	jni::ref<android::view::inputmethod::InputConnection> getConnection() { return call_method<"getConnection", jni::ref<android::view::inputmethod::InputConnection>>(); }
	jni::ref<android::os::IBinder> getConnectionToken() { return call_method<"getConnectionToken", jni::ref<android::os::IBinder>>(); }
	jint getUid() { return call_method<"getUid", jint>(); }
	jint getPid() { return call_method<"getPid", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	InputBinding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING
