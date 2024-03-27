// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class ParcelFileDescriptor_FileDescriptorDetachedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::ParcelFileDescriptor_FileDescriptorDetachedException>
{
	static constexpr fixed_string class_name = "android/os/ParcelFileDescriptor$FileDescriptorDetachedException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::ParcelFileDescriptor_FileDescriptorDetachedException : public jni::object_base<"android/os/ParcelFileDescriptor$FileDescriptorDetachedException",
	java::io::IOException>
{
public:

	static jni::ref<android::os::ParcelFileDescriptor_FileDescriptorDetachedException> new_object() { return base_::new_object(); }

protected:

	ParcelFileDescriptor_FileDescriptorDetachedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION
