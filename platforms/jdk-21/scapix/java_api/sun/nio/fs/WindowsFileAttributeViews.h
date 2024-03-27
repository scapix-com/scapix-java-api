// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsFileAttributeViews; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsFileAttributeViews>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsFileAttributeViews";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsFileAttributeViews : public jni::object_base<"sun/nio/fs/WindowsFileAttributeViews",
	java::lang::Object>
{
public:


protected:

	WindowsFileAttributeViews(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS