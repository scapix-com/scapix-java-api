// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class ParcelFileDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::ParcelFileDescriptor>
{
	static constexpr fixed_string class_name = "android/os/ParcelFileDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR)
#define SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor_OnCloseListener.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/DatagramSocket.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor_FileDescriptorDetachedException.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor_AutoCloseOutputStream.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor_AutoCloseInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::ParcelFileDescriptor : public jni::object_base<"android/os/ParcelFileDescriptor",
	java::lang::Object,
	android::os::Parcelable,
	java::io::Closeable>
{
public:

	using OnCloseListener = ParcelFileDescriptor_OnCloseListener;
	using FileDescriptorDetachedException = ParcelFileDescriptor_FileDescriptorDetachedException;
	using AutoCloseOutputStream = ParcelFileDescriptor_AutoCloseOutputStream;
	using AutoCloseInputStream = ParcelFileDescriptor_AutoCloseInputStream;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint MODE_APPEND() { return get_static_field<"MODE_APPEND", jint>(); }
	static jint MODE_CREATE() { return get_static_field<"MODE_CREATE", jint>(); }
	static jint MODE_READ_ONLY() { return get_static_field<"MODE_READ_ONLY", jint>(); }
	static jint MODE_READ_WRITE() { return get_static_field<"MODE_READ_WRITE", jint>(); }
	static jint MODE_TRUNCATE() { return get_static_field<"MODE_TRUNCATE", jint>(); }
	static jint MODE_WORLD_READABLE() { return get_static_field<"MODE_WORLD_READABLE", jint>(); }
	static jint MODE_WORLD_WRITEABLE() { return get_static_field<"MODE_WORLD_WRITEABLE", jint>(); }
	static jint MODE_WRITE_ONLY() { return get_static_field<"MODE_WRITE_ONLY", jint>(); }

	static jni::ref<android::os::ParcelFileDescriptor> new_object(jni::ref<android::os::ParcelFileDescriptor> wrapped) { return base_::new_object(wrapped); }
	static jni::ref<android::os::ParcelFileDescriptor> open(jni::ref<java::io::File> file, jint mode) { return call_static_method<"open", jni::ref<android::os::ParcelFileDescriptor>>(file, mode); }
	static jni::ref<android::os::ParcelFileDescriptor> open(jni::ref<java::io::File> file, jint mode, jni::ref<android::os::Handler> handler, jni::ref<android::os::ParcelFileDescriptor_OnCloseListener> listener) { return call_static_method<"open", jni::ref<android::os::ParcelFileDescriptor>>(file, mode, handler, listener); }
	static jni::ref<android::os::ParcelFileDescriptor> dup(jni::ref<java::io::FileDescriptor> orig) { return call_static_method<"dup", jni::ref<android::os::ParcelFileDescriptor>>(orig); }
	jni::ref<android::os::ParcelFileDescriptor> dup() { return call_method<"dup", jni::ref<android::os::ParcelFileDescriptor>>(); }
	static jni::ref<android::os::ParcelFileDescriptor> fromFd(jint fd) { return call_static_method<"fromFd", jni::ref<android::os::ParcelFileDescriptor>>(fd); }
	static jni::ref<android::os::ParcelFileDescriptor> adoptFd(jint fd) { return call_static_method<"adoptFd", jni::ref<android::os::ParcelFileDescriptor>>(fd); }
	static jni::ref<android::os::ParcelFileDescriptor> fromSocket(jni::ref<java::net::Socket> socket) { return call_static_method<"fromSocket", jni::ref<android::os::ParcelFileDescriptor>>(socket); }
	static jni::ref<android::os::ParcelFileDescriptor> fromDatagramSocket(jni::ref<java::net::DatagramSocket> datagramSocket) { return call_static_method<"fromDatagramSocket", jni::ref<android::os::ParcelFileDescriptor>>(datagramSocket); }
	static jni::ref<jni::array<android::os::ParcelFileDescriptor>> createPipe() { return call_static_method<"createPipe", jni::ref<jni::array<android::os::ParcelFileDescriptor>>>(); }
	static jni::ref<jni::array<android::os::ParcelFileDescriptor>> createReliablePipe() { return call_static_method<"createReliablePipe", jni::ref<jni::array<android::os::ParcelFileDescriptor>>>(); }
	static jni::ref<jni::array<android::os::ParcelFileDescriptor>> createSocketPair() { return call_static_method<"createSocketPair", jni::ref<jni::array<android::os::ParcelFileDescriptor>>>(); }
	static jni::ref<jni::array<android::os::ParcelFileDescriptor>> createReliableSocketPair() { return call_static_method<"createReliableSocketPair", jni::ref<jni::array<android::os::ParcelFileDescriptor>>>(); }
	static jint parseMode(jni::ref<java::lang::String> mode) { return call_static_method<"parseMode", jint>(mode); }
	jni::ref<java::io::FileDescriptor> getFileDescriptor() { return call_method<"getFileDescriptor", jni::ref<java::io::FileDescriptor>>(); }
	jlong getStatSize() { return call_method<"getStatSize", jlong>(); }
	jint getFd() { return call_method<"getFd", jint>(); }
	jint detachFd() { return call_method<"detachFd", jint>(); }
	void close() { return call_method<"close", void>(); }
	void closeWithError(jni::ref<java::lang::String> msg) { return call_method<"closeWithError", void>(msg); }
	jboolean canDetectErrors() { return call_method<"canDetectErrors", jboolean>(); }
	void checkError() { return call_method<"checkError", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	ParcelFileDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_PARCELFILEDESCRIPTOR
