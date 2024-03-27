// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEM_FILESTOREITERATOR_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEM_FILESTOREITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsFileSystem_FileStoreIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsFileSystem_FileStoreIterator>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsFileSystem$FileStoreIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEM_FILESTOREITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEM_FILESTOREITERATOR)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEM_FILESTOREITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/file/FileStore.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsFileSystem_FileStoreIterator : public jni::object_base<"sun/nio/fs/WindowsFileSystem$FileStoreIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::nio::file::FileStore> next() { return call_method<"next", jni::ref<java::nio::file::FileStore>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	WindowsFileSystem_FileStoreIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEM_FILESTOREITERATOR
