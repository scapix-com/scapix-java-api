// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class Files; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::Files>
{
	static constexpr fixed_string class_name = "java/nio/file/Files";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/BufferedReader.h>
#include <scapix/java_api/java/io/BufferedWriter.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/channels/SeekableByteChannel.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/nio/file/CopyOption.h>
#include <scapix/java_api/java/nio/file/DirectoryStream.h>
#include <scapix/java_api/java/nio/file/DirectoryStream_Filter.h>
#include <scapix/java_api/java/nio/file/FileStore.h>
#include <scapix/java_api/java/nio/file/FileVisitOption.h>
#include <scapix/java_api/java/nio/file/FileVisitor.h>
#include <scapix/java_api/java/nio/file/LinkOption.h>
#include <scapix/java_api/java/nio/file/OpenOption.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/nio/file/attribute/BasicFileAttributes.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttribute.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttributeView.h>
#include <scapix/java_api/java/nio/file/attribute/FileTime.h>
#include <scapix/java_api/java/nio/file/attribute/UserPrincipal.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiPredicate.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::Files : public jni::object_base<"java/nio/file/Files",
	java::lang::Object>
{
public:

	static jni::ref<java::io::InputStream> newInputStream(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::OpenOption>> p2) { return call_static_method<"newInputStream", jni::ref<java::io::InputStream>>(p1, p2); }
	static jni::ref<java::io::OutputStream> newOutputStream(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::OpenOption>> p2) { return call_static_method<"newOutputStream", jni::ref<java::io::OutputStream>>(p1, p2); }
	static jni::ref<java::nio::channels::SeekableByteChannel> newByteChannel(jni::ref<java::nio::file::Path> p1, jni::ref<java::util::Set> p2, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p3) { return call_static_method<"newByteChannel", jni::ref<java::nio::channels::SeekableByteChannel>>(p1, p2, p3); }
	static jni::ref<java::nio::channels::SeekableByteChannel> newByteChannel(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::OpenOption>> p2) { return call_static_method<"newByteChannel", jni::ref<java::nio::channels::SeekableByteChannel>>(p1, p2); }
	static jni::ref<java::nio::file::DirectoryStream> newDirectoryStream(jni::ref<java::nio::file::Path> p1) { return call_static_method<"newDirectoryStream", jni::ref<java::nio::file::DirectoryStream>>(p1); }
	static jni::ref<java::nio::file::DirectoryStream> newDirectoryStream(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::String> p2) { return call_static_method<"newDirectoryStream", jni::ref<java::nio::file::DirectoryStream>>(p1, p2); }
	static jni::ref<java::nio::file::DirectoryStream> newDirectoryStream(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::DirectoryStream_Filter> p2) { return call_static_method<"newDirectoryStream", jni::ref<java::nio::file::DirectoryStream>>(p1, p2); }
	static jni::ref<java::nio::file::Path> createFile(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p2) { return call_static_method<"createFile", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jni::ref<java::nio::file::Path> createDirectory(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p2) { return call_static_method<"createDirectory", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jni::ref<java::nio::file::Path> createDirectories(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p2) { return call_static_method<"createDirectories", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jni::ref<java::nio::file::Path> createTempFile(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p4) { return call_static_method<"createTempFile", jni::ref<java::nio::file::Path>>(p1, p2, p3, p4); }
	static jni::ref<java::nio::file::Path> createTempFile(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p3) { return call_static_method<"createTempFile", jni::ref<java::nio::file::Path>>(p1, p2, p3); }
	static jni::ref<java::nio::file::Path> createTempDirectory(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p3) { return call_static_method<"createTempDirectory", jni::ref<java::nio::file::Path>>(p1, p2, p3); }
	static jni::ref<java::nio::file::Path> createTempDirectory(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p2) { return call_static_method<"createTempDirectory", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jni::ref<java::nio::file::Path> createSymbolicLink(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::Path> p2, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> p3) { return call_static_method<"createSymbolicLink", jni::ref<java::nio::file::Path>>(p1, p2, p3); }
	static jni::ref<java::nio::file::Path> createLink(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::Path> p2) { return call_static_method<"createLink", jni::ref<java::nio::file::Path>>(p1, p2); }
	static void delete_(jni::ref<java::nio::file::Path> p1) { return call_static_method<"delete", void>(p1); }
	static jboolean deleteIfExists(jni::ref<java::nio::file::Path> p1) { return call_static_method<"deleteIfExists", jboolean>(p1); }
	static jni::ref<java::nio::file::Path> copy(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::Path> p2, jni::ref<jni::array<java::nio::file::CopyOption>> p3) { return call_static_method<"copy", jni::ref<java::nio::file::Path>>(p1, p2, p3); }
	static jni::ref<java::nio::file::Path> move(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::Path> p2, jni::ref<jni::array<java::nio::file::CopyOption>> p3) { return call_static_method<"move", jni::ref<java::nio::file::Path>>(p1, p2, p3); }
	static jni::ref<java::nio::file::Path> readSymbolicLink(jni::ref<java::nio::file::Path> p1) { return call_static_method<"readSymbolicLink", jni::ref<java::nio::file::Path>>(p1); }
	static jni::ref<java::nio::file::FileStore> getFileStore(jni::ref<java::nio::file::Path> p1) { return call_static_method<"getFileStore", jni::ref<java::nio::file::FileStore>>(p1); }
	static jboolean isSameFile(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::Path> p2) { return call_static_method<"isSameFile", jboolean>(p1, p2); }
	static jboolean isHidden(jni::ref<java::nio::file::Path> p1) { return call_static_method<"isHidden", jboolean>(p1); }
	static jni::ref<java::lang::String> probeContentType(jni::ref<java::nio::file::Path> p1) { return call_static_method<"probeContentType", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::nio::file::attribute::FileAttributeView> getFileAttributeView(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::Class> p2, jni::ref<jni::array<java::nio::file::LinkOption>> p3) { return call_static_method<"getFileAttributeView", jni::ref<java::nio::file::attribute::FileAttributeView>>(p1, p2, p3); }
	static jni::ref<java::nio::file::attribute::BasicFileAttributes> readAttributes(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::Class> p2, jni::ref<jni::array<java::nio::file::LinkOption>> p3) { return call_static_method<"readAttributes", jni::ref<java::nio::file::attribute::BasicFileAttributes>>(p1, p2, p3); }
	static jni::ref<java::nio::file::Path> setAttribute(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Object> p3, jni::ref<jni::array<java::nio::file::LinkOption>> p4) { return call_static_method<"setAttribute", jni::ref<java::nio::file::Path>>(p1, p2, p3, p4); }
	static jni::ref<java::lang::Object> getAttribute(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::nio::file::LinkOption>> p3) { return call_static_method<"getAttribute", jni::ref<java::lang::Object>>(p1, p2, p3); }
	static jni::ref<java::util::Map> readAttributes(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::nio::file::LinkOption>> p3) { return call_static_method<"readAttributes", jni::ref<java::util::Map>>(p1, p2, p3); }
	static jni::ref<java::util::Set> getPosixFilePermissions(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::LinkOption>> p2) { return call_static_method<"getPosixFilePermissions", jni::ref<java::util::Set>>(p1, p2); }
	static jni::ref<java::nio::file::Path> setPosixFilePermissions(jni::ref<java::nio::file::Path> p1, jni::ref<java::util::Set> p2) { return call_static_method<"setPosixFilePermissions", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jni::ref<java::nio::file::attribute::UserPrincipal> getOwner(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::LinkOption>> p2) { return call_static_method<"getOwner", jni::ref<java::nio::file::attribute::UserPrincipal>>(p1, p2); }
	static jni::ref<java::nio::file::Path> setOwner(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::attribute::UserPrincipal> p2) { return call_static_method<"setOwner", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jboolean isSymbolicLink(jni::ref<java::nio::file::Path> p1) { return call_static_method<"isSymbolicLink", jboolean>(p1); }
	static jboolean isDirectory(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::LinkOption>> p2) { return call_static_method<"isDirectory", jboolean>(p1, p2); }
	static jboolean isRegularFile(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::LinkOption>> p2) { return call_static_method<"isRegularFile", jboolean>(p1, p2); }
	static jni::ref<java::nio::file::attribute::FileTime> getLastModifiedTime(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::LinkOption>> p2) { return call_static_method<"getLastModifiedTime", jni::ref<java::nio::file::attribute::FileTime>>(p1, p2); }
	static jni::ref<java::nio::file::Path> setLastModifiedTime(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::attribute::FileTime> p2) { return call_static_method<"setLastModifiedTime", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jlong size(jni::ref<java::nio::file::Path> p1) { return call_static_method<"size", jlong>(p1); }
	static jboolean exists(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::LinkOption>> p2) { return call_static_method<"exists", jboolean>(p1, p2); }
	static jboolean notExists(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::LinkOption>> p2) { return call_static_method<"notExists", jboolean>(p1, p2); }
	static jboolean isReadable(jni::ref<java::nio::file::Path> p1) { return call_static_method<"isReadable", jboolean>(p1); }
	static jboolean isWritable(jni::ref<java::nio::file::Path> p1) { return call_static_method<"isWritable", jboolean>(p1); }
	static jboolean isExecutable(jni::ref<java::nio::file::Path> p1) { return call_static_method<"isExecutable", jboolean>(p1); }
	static jni::ref<java::nio::file::Path> walkFileTree(jni::ref<java::nio::file::Path> p1, jni::ref<java::util::Set> p2, jint p3, jni::ref<java::nio::file::FileVisitor> p4) { return call_static_method<"walkFileTree", jni::ref<java::nio::file::Path>>(p1, p2, p3, p4); }
	static jni::ref<java::nio::file::Path> walkFileTree(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::file::FileVisitor> p2) { return call_static_method<"walkFileTree", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jni::ref<java::io::BufferedReader> newBufferedReader(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::charset::Charset> p2) { return call_static_method<"newBufferedReader", jni::ref<java::io::BufferedReader>>(p1, p2); }
	static jni::ref<java::io::BufferedReader> newBufferedReader(jni::ref<java::nio::file::Path> p1) { return call_static_method<"newBufferedReader", jni::ref<java::io::BufferedReader>>(p1); }
	static jni::ref<java::io::BufferedWriter> newBufferedWriter(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::charset::Charset> p2, jni::ref<jni::array<java::nio::file::OpenOption>> p3) { return call_static_method<"newBufferedWriter", jni::ref<java::io::BufferedWriter>>(p1, p2, p3); }
	static jni::ref<java::io::BufferedWriter> newBufferedWriter(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::OpenOption>> p2) { return call_static_method<"newBufferedWriter", jni::ref<java::io::BufferedWriter>>(p1, p2); }
	static jlong copy(jni::ref<java::io::InputStream> p1, jni::ref<java::nio::file::Path> p2, jni::ref<jni::array<java::nio::file::CopyOption>> p3) { return call_static_method<"copy", jlong>(p1, p2, p3); }
	static jlong copy(jni::ref<java::nio::file::Path> p1, jni::ref<java::io::OutputStream> p2) { return call_static_method<"copy", jlong>(p1, p2); }
	static jni::ref<jni::array<jbyte>> readAllBytes(jni::ref<java::nio::file::Path> p1) { return call_static_method<"readAllBytes", jni::ref<jni::array<jbyte>>>(p1); }
	static jni::ref<java::util::List> readAllLines(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::charset::Charset> p2) { return call_static_method<"readAllLines", jni::ref<java::util::List>>(p1, p2); }
	static jni::ref<java::util::List> readAllLines(jni::ref<java::nio::file::Path> p1) { return call_static_method<"readAllLines", jni::ref<java::util::List>>(p1); }
	static jni::ref<java::nio::file::Path> write(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<jbyte>> p2, jni::ref<jni::array<java::nio::file::OpenOption>> p3) { return call_static_method<"write", jni::ref<java::nio::file::Path>>(p1, p2, p3); }
	static jni::ref<java::nio::file::Path> write(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::Iterable> p2, jni::ref<java::nio::charset::Charset> p3, jni::ref<jni::array<java::nio::file::OpenOption>> p4) { return call_static_method<"write", jni::ref<java::nio::file::Path>>(p1, p2, p3, p4); }
	static jni::ref<java::nio::file::Path> write(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::Iterable> p2, jni::ref<jni::array<java::nio::file::OpenOption>> p3) { return call_static_method<"write", jni::ref<java::nio::file::Path>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Stream> list(jni::ref<java::nio::file::Path> p1) { return call_static_method<"list", jni::ref<java::util::stream::Stream>>(p1); }
	static jni::ref<java::util::stream::Stream> walk(jni::ref<java::nio::file::Path> p1, jint p2, jni::ref<jni::array<java::nio::file::FileVisitOption>> p3) { return call_static_method<"walk", jni::ref<java::util::stream::Stream>>(p1, p2, p3); }
	static jni::ref<java::util::stream::Stream> walk(jni::ref<java::nio::file::Path> p1, jni::ref<jni::array<java::nio::file::FileVisitOption>> p2) { return call_static_method<"walk", jni::ref<java::util::stream::Stream>>(p1, p2); }
	static jni::ref<java::util::stream::Stream> find(jni::ref<java::nio::file::Path> p1, jint p2, jni::ref<java::util::function::BiPredicate> p3, jni::ref<jni::array<java::nio::file::FileVisitOption>> p4) { return call_static_method<"find", jni::ref<java::util::stream::Stream>>(p1, p2, p3, p4); }
	static jni::ref<java::util::stream::Stream> lines(jni::ref<java::nio::file::Path> p1, jni::ref<java::nio::charset::Charset> p2) { return call_static_method<"lines", jni::ref<java::util::stream::Stream>>(p1, p2); }
	static jni::ref<java::util::stream::Stream> lines(jni::ref<java::nio::file::Path> p1) { return call_static_method<"lines", jni::ref<java::util::stream::Stream>>(p1); }

protected:

	Files(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES
