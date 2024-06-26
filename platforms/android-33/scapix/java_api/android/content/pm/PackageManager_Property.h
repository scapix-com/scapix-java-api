// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_PROPERTY_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_PROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageManager_Property; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageManager_Property>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageManager$Property";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_PROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_PROPERTY)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_PROPERTY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageManager_Property : public jni::object_base<"android/content/pm/PackageManager$Property",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jboolean getBoolean() { return call_method<"getBoolean", jboolean>(); }
	jboolean isBoolean() { return call_method<"isBoolean", jboolean>(); }
	jfloat getFloat() { return call_method<"getFloat", jfloat>(); }
	jboolean isFloat() { return call_method<"isFloat", jboolean>(); }
	jint getInteger() { return call_method<"getInteger", jint>(); }
	jboolean isInteger() { return call_method<"isInteger", jboolean>(); }
	jint getResourceId() { return call_method<"getResourceId", jint>(); }
	jboolean isResourceId() { return call_method<"isResourceId", jboolean>(); }
	jni::ref<java::lang::String> getString() { return call_method<"getString", jni::ref<java::lang::String>>(); }
	jboolean isString() { return call_method<"isString", jboolean>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	PackageManager_Property(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_PROPERTY
