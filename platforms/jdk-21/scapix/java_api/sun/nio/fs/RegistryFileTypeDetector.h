// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/fs/AbstractFileTypeDetector.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_REGISTRYFILETYPEDETECTOR_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_REGISTRYFILETYPEDETECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class RegistryFileTypeDetector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::RegistryFileTypeDetector>
{
	static constexpr fixed_string class_name = "sun/nio/fs/RegistryFileTypeDetector";
	using base_classes = std::tuple<scapix::java_api::sun::nio::fs::AbstractFileTypeDetector>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_REGISTRYFILETYPEDETECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_REGISTRYFILETYPEDETECTOR)
#define SCAPIX_JAVA_API_SUN_NIO_FS_REGISTRYFILETYPEDETECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/Path.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::fs::RegistryFileTypeDetector : public jni::object_base<"sun/nio/fs/RegistryFileTypeDetector",
	sun::nio::fs::AbstractFileTypeDetector>
{
public:

	static jni::ref<sun::nio::fs::RegistryFileTypeDetector> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> implProbeContentType(jni::ref<java::nio::file::Path> file) { return call_method<"implProbeContentType", jni::ref<java::lang::String>>(file); }

protected:

	RegistryFileTypeDetector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_REGISTRYFILETYPEDETECTOR