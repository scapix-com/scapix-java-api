// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/fs/AbstractFileSystemProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEMPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEMPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsFileSystemProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsFileSystemProvider>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsFileSystemProvider";
	using base_classes = std::tuple<scapix::java_api::sun::nio::fs::AbstractFileSystemProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEMPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEMPROVIDER)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEMPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/nio/channels/AsynchronousFileChannel.h>
#include <scapix/java_api/java/nio/channels/FileChannel.h>
#include <scapix/java_api/java/nio/channels/SeekableByteChannel.h>
#include <scapix/java_api/java/nio/file/AccessMode.h>
#include <scapix/java_api/java/nio/file/CopyOption.h>
#include <scapix/java_api/java/nio/file/DirectoryStream.h>
#include <scapix/java_api/java/nio/file/DirectoryStream_Filter.h>
#include <scapix/java_api/java/nio/file/FileStore.h>
#include <scapix/java_api/java/nio/file/FileSystem.h>
#include <scapix/java_api/java/nio/file/LinkOption.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/nio/file/attribute/BasicFileAttributes.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttribute.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttributeView.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>
#include <scapix/java_api/sun/nio/fs/DynamicFileAttributeView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsFileSystemProvider : public jni::object_base<"sun/nio/fs/WindowsFileSystemProvider",
	sun::nio::fs::AbstractFileSystemProvider>
{
public:

	static jni::ref<sun::nio::fs::WindowsFileSystemProvider> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getScheme() { return call_method<"getScheme", jni::ref<java::lang::String>>(); }
	jni::ref<java::nio::file::FileSystem> newFileSystem(jni::ref<java::net::URI> uri, jni::ref<java::util::Map> env) { return call_method<"newFileSystem", jni::ref<java::nio::file::FileSystem>>(uri, env); }
	jni::ref<java::nio::file::FileSystem> getFileSystem(jni::ref<java::net::URI> uri) { return call_method<"getFileSystem", jni::ref<java::nio::file::FileSystem>>(uri); }
	jni::ref<java::nio::file::Path> getPath(jni::ref<java::net::URI> uri) { return call_method<"getPath", jni::ref<java::nio::file::Path>>(uri); }
	jni::ref<java::nio::channels::FileChannel> newFileChannel(jni::ref<java::nio::file::Path> path, jni::ref<java::util::Set> options, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<"newFileChannel", jni::ref<java::nio::channels::FileChannel>>(path, options, attrs); }
	jni::ref<java::nio::channels::AsynchronousFileChannel> newAsynchronousFileChannel(jni::ref<java::nio::file::Path> path, jni::ref<java::util::Set> options, jni::ref<java::util::concurrent::ExecutorService> executor, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<"newAsynchronousFileChannel", jni::ref<java::nio::channels::AsynchronousFileChannel>>(path, options, executor, attrs); }
	jni::ref<java::nio::file::attribute::FileAttributeView> getFileAttributeView(jni::ref<java::nio::file::Path> obj, jni::ref<java::lang::Class> view, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_method<"getFileAttributeView", jni::ref<java::nio::file::attribute::FileAttributeView>>(obj, view, options); }
	jni::ref<java::nio::file::attribute::BasicFileAttributes> readAttributes(jni::ref<java::nio::file::Path> file, jni::ref<java::lang::Class> type, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_method<"readAttributes", jni::ref<java::nio::file::attribute::BasicFileAttributes>>(file, type, options); }
	jni::ref<sun::nio::fs::DynamicFileAttributeView> getFileAttributeView(jni::ref<java::nio::file::Path> obj, jni::ref<java::lang::String> name, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_method<"getFileAttributeView", jni::ref<sun::nio::fs::DynamicFileAttributeView>>(obj, name, options); }
	jni::ref<java::nio::channels::SeekableByteChannel> newByteChannel(jni::ref<java::nio::file::Path> obj, jni::ref<java::util::Set> options, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<"newByteChannel", jni::ref<java::nio::channels::SeekableByteChannel>>(obj, options, attrs); }
	void copy(jni::ref<java::nio::file::Path> source, jni::ref<java::nio::file::Path> target, jni::ref<jni::array<java::nio::file::CopyOption>> options) { return call_method<"copy", void>(source, target, options); }
	void move(jni::ref<java::nio::file::Path> source, jni::ref<java::nio::file::Path> target, jni::ref<jni::array<java::nio::file::CopyOption>> options) { return call_method<"move", void>(source, target, options); }
	void checkAccess(jni::ref<java::nio::file::Path> obj, jni::ref<jni::array<java::nio::file::AccessMode>> modes) { return call_method<"checkAccess", void>(obj, modes); }
	jboolean isSameFile(jni::ref<java::nio::file::Path> obj1, jni::ref<java::nio::file::Path> obj2) { return call_method<"isSameFile", jboolean>(obj1, obj2); }
	jboolean isHidden(jni::ref<java::nio::file::Path> obj) { return call_method<"isHidden", jboolean>(obj); }
	jni::ref<java::nio::file::FileStore> getFileStore(jni::ref<java::nio::file::Path> obj) { return call_method<"getFileStore", jni::ref<java::nio::file::FileStore>>(obj); }
	void createDirectory(jni::ref<java::nio::file::Path> obj, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<"createDirectory", void>(obj, attrs); }
	jni::ref<java::nio::file::DirectoryStream> newDirectoryStream(jni::ref<java::nio::file::Path> obj, jni::ref<java::nio::file::DirectoryStream_Filter> filter) { return call_method<"newDirectoryStream", jni::ref<java::nio::file::DirectoryStream>>(obj, filter); }
	void createSymbolicLink(jni::ref<java::nio::file::Path> obj1, jni::ref<java::nio::file::Path> obj2, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_method<"createSymbolicLink", void>(obj1, obj2, attrs); }
	void createLink(jni::ref<java::nio::file::Path> obj1, jni::ref<java::nio::file::Path> obj2) { return call_method<"createLink", void>(obj1, obj2); }
	jni::ref<java::nio::file::Path> readSymbolicLink(jni::ref<java::nio::file::Path> obj1) { return call_method<"readSymbolicLink", jni::ref<java::nio::file::Path>>(obj1); }

protected:

	WindowsFileSystemProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESYSTEMPROVIDER
