// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_CONDITION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_CONDITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::notification { class Condition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::notification::Condition>
{
	static constexpr fixed_string class_name = "android/service/notification/Condition";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_CONDITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_CONDITION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_CONDITION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/net/Uri_Builder.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::notification::Condition : public jni::object_base<"android/service/notification/Condition",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_RELEVANT_ALWAYS() { return get_static_field<"FLAG_RELEVANT_ALWAYS", jint>(); }
	static jint FLAG_RELEVANT_NOW() { return get_static_field<"FLAG_RELEVANT_NOW", jint>(); }
	static jni::ref<java::lang::String> SCHEME() { return get_static_field<"SCHEME", jni::ref<java::lang::String>>(); }
	static jint STATE_ERROR() { return get_static_field<"STATE_ERROR", jint>(); }
	static jint STATE_FALSE() { return get_static_field<"STATE_FALSE", jint>(); }
	static jint STATE_TRUE() { return get_static_field<"STATE_TRUE", jint>(); }
	static jint STATE_UNKNOWN() { return get_static_field<"STATE_UNKNOWN", jint>(); }
	jint flags() { return get_field<"flags", jint>(); }
	jint icon() { return get_field<"icon", jint>(); }
	jni::ref<android::net::Uri> id() { return get_field<"id", jni::ref<android::net::Uri>>(); }
	jni::ref<java::lang::String> line1() { return get_field<"line1", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> line2() { return get_field<"line2", jni::ref<java::lang::String>>(); }
	jint state() { return get_field<"state", jint>(); }
	jni::ref<java::lang::String> summary() { return get_field<"summary", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::notification::Condition> new_object(jni::ref<android::net::Uri> id, jni::ref<java::lang::String> summary, jint state) { return base_::new_object(id, summary, state); }
	static jni::ref<android::service::notification::Condition> new_object(jni::ref<android::net::Uri> id, jni::ref<java::lang::String> summary, jni::ref<java::lang::String> line1, jni::ref<java::lang::String> line2, jint icon, jint state, jint flags) { return base_::new_object(id, summary, line1, line2, icon, state, flags); }
	static jni::ref<android::service::notification::Condition> new_object(jni::ref<android::os::Parcel> source) { return base_::new_object(source); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> stateToString(jint state) { return call_static_method<"stateToString", jni::ref<java::lang::String>>(state); }
	static jni::ref<java::lang::String> relevanceToString(jint flags) { return call_static_method<"relevanceToString", jni::ref<java::lang::String>>(flags); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<android::service::notification::Condition> copy() { return call_method<"copy", jni::ref<android::service::notification::Condition>>(); }
	static jni::ref<android::net::Uri_Builder> newId(jni::ref<android::content::Context> context) { return call_static_method<"newId", jni::ref<android::net::Uri_Builder>>(context); }
	static jboolean isValidId(jni::ref<android::net::Uri> id, jni::ref<java::lang::String> pkg) { return call_static_method<"isValidId", jboolean>(id, pkg); }

protected:

	Condition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_CONDITION