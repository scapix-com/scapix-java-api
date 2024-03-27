// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::res { class AssetFileDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::res::AssetFileDescriptor>
{
	static constexpr fixed_string class_name = "android/content/res/AssetFileDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/FileInputStream.h>
#include <scapix/java_api/java/io/FileOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor_AutoCloseOutputStream.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor_AutoCloseInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::res::AssetFileDescriptor : public jni::object_base<"android/content/res/AssetFileDescriptor",
	java::lang::Object,
	android::os::Parcelable,
	java::io::Closeable>
{
public:

	using AutoCloseOutputStream = AssetFileDescriptor_AutoCloseOutputStream;
	using AutoCloseInputStream = AssetFileDescriptor_AutoCloseInputStream;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jlong UNKNOWN_LENGTH() { return get_static_field<"UNKNOWN_LENGTH", jlong>(); }

	static jni::ref<android::content::res::AssetFileDescriptor> new_object(jni::ref<android::os::ParcelFileDescriptor> fd, jlong startOffset, jlong p3) { return base_::new_object(fd, startOffset, p3); }
	static jni::ref<android::content::res::AssetFileDescriptor> new_object(jni::ref<android::os::ParcelFileDescriptor> fd, jlong startOffset, jlong p3, jni::ref<android::os::Bundle> length) { return base_::new_object(fd, startOffset, p3, length); }
	jni::ref<android::os::ParcelFileDescriptor> getParcelFileDescriptor() { return call_method<"getParcelFileDescriptor", jni::ref<android::os::ParcelFileDescriptor>>(); }
	jni::ref<java::io::FileDescriptor> getFileDescriptor() { return call_method<"getFileDescriptor", jni::ref<java::io::FileDescriptor>>(); }
	jlong getStartOffset() { return call_method<"getStartOffset", jlong>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jlong getLength() { return call_method<"getLength", jlong>(); }
	jlong getDeclaredLength() { return call_method<"getDeclaredLength", jlong>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::io::FileInputStream> createInputStream() { return call_method<"createInputStream", jni::ref<java::io::FileInputStream>>(); }
	jni::ref<java::io::FileOutputStream> createOutputStream() { return call_method<"createOutputStream", jni::ref<java::io::FileOutputStream>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	AssetFileDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR