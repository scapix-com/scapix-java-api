// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEVOLUME_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEVOLUME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os::storage { class StorageVolume; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::storage::StorageVolume>
{
	static constexpr fixed_string class_name = "android/os/storage/StorageVolume";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEVOLUME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEVOLUME)
#define SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEVOLUME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::storage::StorageVolume : public jni::object_base<"android/os/storage/StorageVolume",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> EXTRA_STORAGE_VOLUME() { return get_static_field<"EXTRA_STORAGE_VOLUME", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::String> getDescription(jni::ref<android::content::Context> context) { return call_method<"getDescription", jni::ref<java::lang::String>>(context); }
	jboolean isPrimary() { return call_method<"isPrimary", jboolean>(); }
	jboolean isRemovable() { return call_method<"isRemovable", jboolean>(); }
	jboolean isEmulated() { return call_method<"isEmulated", jboolean>(); }
	jni::ref<java::lang::String> getUuid() { return call_method<"getUuid", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getState() { return call_method<"getState", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::Intent> createAccessIntent(jni::ref<java::lang::String> directoryName) { return call_method<"createAccessIntent", jni::ref<android::content::Intent>>(directoryName); }
	jni::ref<android::content::Intent> createOpenDocumentTreeIntent() { return call_method<"createOpenDocumentTreeIntent", jni::ref<android::content::Intent>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	StorageVolume(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEVOLUME
