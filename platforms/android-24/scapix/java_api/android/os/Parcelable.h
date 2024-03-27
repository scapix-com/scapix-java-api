// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_PARCELABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_PARCELABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Parcelable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Parcelable>
{
	static constexpr fixed_string class_name = "android/os/Parcelable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PARCELABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_PARCELABLE)
#define SCAPIX_JAVA_API_ANDROID_OS_PARCELABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_ClassLoaderCreator.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Parcelable : public jni::object_base<"android/os/Parcelable",
	java::lang::Object>
{
public:

	using ClassLoaderCreator = Parcelable_ClassLoaderCreator;
	using Creator = Parcelable_Creator;

	static jint CONTENTS_FILE_DESCRIPTOR() { return get_static_field<"CONTENTS_FILE_DESCRIPTOR", jint>(); }
	static jint PARCELABLE_WRITE_RETURN_VALUE() { return get_static_field<"PARCELABLE_WRITE_RETURN_VALUE", jint>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> p1, jint p2) { return call_method<"writeToParcel", void>(p1, p2); }

protected:

	Parcelable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PARCELABLE