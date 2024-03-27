// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONEXITINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONEXITINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ApplicationExitInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ApplicationExitInfo>
{
	static constexpr fixed_string class_name = "android/app/ApplicationExitInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONEXITINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONEXITINFO)
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONEXITINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ApplicationExitInfo : public jni::object_base<"android/app/ApplicationExitInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint REASON_ANR() { return get_static_field<"REASON_ANR", jint>(); }
	static jint REASON_CRASH() { return get_static_field<"REASON_CRASH", jint>(); }
	static jint REASON_CRASH_NATIVE() { return get_static_field<"REASON_CRASH_NATIVE", jint>(); }
	static jint REASON_DEPENDENCY_DIED() { return get_static_field<"REASON_DEPENDENCY_DIED", jint>(); }
	static jint REASON_EXCESSIVE_RESOURCE_USAGE() { return get_static_field<"REASON_EXCESSIVE_RESOURCE_USAGE", jint>(); }
	static jint REASON_EXIT_SELF() { return get_static_field<"REASON_EXIT_SELF", jint>(); }
	static jint REASON_INITIALIZATION_FAILURE() { return get_static_field<"REASON_INITIALIZATION_FAILURE", jint>(); }
	static jint REASON_LOW_MEMORY() { return get_static_field<"REASON_LOW_MEMORY", jint>(); }
	static jint REASON_OTHER() { return get_static_field<"REASON_OTHER", jint>(); }
	static jint REASON_PERMISSION_CHANGE() { return get_static_field<"REASON_PERMISSION_CHANGE", jint>(); }
	static jint REASON_SIGNALED() { return get_static_field<"REASON_SIGNALED", jint>(); }
	static jint REASON_UNKNOWN() { return get_static_field<"REASON_UNKNOWN", jint>(); }
	static jint REASON_USER_REQUESTED() { return get_static_field<"REASON_USER_REQUESTED", jint>(); }
	static jint REASON_USER_STOPPED() { return get_static_field<"REASON_USER_STOPPED", jint>(); }

	jint getPid() { return call_method<"getPid", jint>(); }
	jint getRealUid() { return call_method<"getRealUid", jint>(); }
	jint getPackageUid() { return call_method<"getPackageUid", jint>(); }
	jint getDefiningUid() { return call_method<"getDefiningUid", jint>(); }
	jni::ref<java::lang::String> getProcessName() { return call_method<"getProcessName", jni::ref<java::lang::String>>(); }
	jint getReason() { return call_method<"getReason", jint>(); }
	jint getStatus() { return call_method<"getStatus", jint>(); }
	jint getImportance() { return call_method<"getImportance", jint>(); }
	jlong getPss() { return call_method<"getPss", jlong>(); }
	jlong getRss() { return call_method<"getRss", jlong>(); }
	jlong getTimestamp() { return call_method<"getTimestamp", jlong>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::UserHandle> getUserHandle() { return call_method<"getUserHandle", jni::ref<android::os::UserHandle>>(); }
	jni::ref<jni::array<jbyte>> getProcessStateSummary() { return call_method<"getProcessStateSummary", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::io::InputStream> getTraceInputStream() { return call_method<"getTraceInputStream", jni::ref<java::io::InputStream>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ApplicationExitInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONEXITINFO
