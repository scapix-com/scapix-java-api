// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/pm/ComponentInfo.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SERVICEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SERVICEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class ServiceInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::ServiceInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/ServiceInfo";
	using base_classes = std::tuple<scapix::java_api::android::content::pm::ComponentInfo, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SERVICEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SERVICEINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SERVICEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::ServiceInfo : public jni::object_base<"android/content/pm/ServiceInfo",
	android::content::pm::ComponentInfo,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_EXTERNAL_SERVICE() { return get_static_field<"FLAG_EXTERNAL_SERVICE", jint>(); }
	static jint FLAG_ISOLATED_PROCESS() { return get_static_field<"FLAG_ISOLATED_PROCESS", jint>(); }
	static jint FLAG_SINGLE_USER() { return get_static_field<"FLAG_SINGLE_USER", jint>(); }
	static jint FLAG_STOP_WITH_TASK() { return get_static_field<"FLAG_STOP_WITH_TASK", jint>(); }
	jint flags() { return get_field<"flags", jint>(); }
	void flags(jint v) { set_field<"flags", jint>(v); }
	jni::ref<java::lang::String> permission() { return get_field<"permission", jni::ref<java::lang::String>>(); }
	void permission(jni::ref<java::lang::String> v) { set_field<"permission", jni::ref<java::lang::String>>(v); }

	static jni::ref<android::content::pm::ServiceInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::content::pm::ServiceInfo> new_object(jni::ref<android::content::pm::ServiceInfo> orig) { return base_::new_object(orig); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<"writeToParcel", void>(dest, parcelableFlags); }

protected:

	ServiceInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SERVICEINFO