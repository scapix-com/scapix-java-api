// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSNATIVEDISPATCHER_VOLUMEINFORMATION_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSNATIVEDISPATCHER_VOLUMEINFORMATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsNativeDispatcher_VolumeInformation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsNativeDispatcher_VolumeInformation>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsNativeDispatcher$VolumeInformation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSNATIVEDISPATCHER_VOLUMEINFORMATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSNATIVEDISPATCHER_VOLUMEINFORMATION)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSNATIVEDISPATCHER_VOLUMEINFORMATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsNativeDispatcher_VolumeInformation : public jni::object_base<"sun/nio/fs/WindowsNativeDispatcher$VolumeInformation",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> fileSystemName() { return call_method<"fileSystemName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> volumeName() { return call_method<"volumeName", jni::ref<java::lang::String>>(); }
	jint volumeSerialNumber() { return call_method<"volumeSerialNumber", jint>(); }
	jint flags() { return call_method<"flags", jint>(); }

protected:

	WindowsNativeDispatcher_VolumeInformation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSNATIVEDISPATCHER_VOLUMEINFORMATION
