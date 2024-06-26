// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/os/PatternMatcher.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PATHPERMISSION_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PATHPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PathPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PathPermission>
{
	static constexpr fixed_string class_name = "android/content/pm/PathPermission";
	using base_classes = std::tuple<scapix::java_api::android::os::PatternMatcher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PATHPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PATHPERMISSION)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PATHPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PathPermission : public jni::object_base<"android/content/pm/PathPermission",
	android::os::PatternMatcher>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::content::pm::PathPermission> new_object(jni::ref<java::lang::String> pattern, jint type, jni::ref<java::lang::String> readPermission, jni::ref<java::lang::String> writePermission) { return base_::new_object(pattern, type, readPermission, writePermission); }
	static jni::ref<android::content::pm::PathPermission> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jni::ref<java::lang::String> getReadPermission() { return call_method<"getReadPermission", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getWritePermission() { return call_method<"getWritePermission", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	PathPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PATHPERMISSION
