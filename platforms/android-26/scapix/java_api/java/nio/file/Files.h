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

	static jni::ref<java::io::InputStream> newInputStream(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"newInputStream", jni::ref<java::io::InputStream>>(path, options); }
	static jni::ref<java::io::OutputStream> newOutputStream(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"newOutputStream", jni::ref<java::io::OutputStream>>(path, options); }
	static jni::ref<java::nio::channels::SeekableByteChannel> newByteChannel(jni::ref<java::nio::file::Path> path, jni::ref<java::util::Set> options, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"newByteChannel", jni::ref<java::nio::channels::SeekableByteChannel>>(path, options, attrs); }
	static jni::ref<java::nio::channels::SeekableByteChannel> newByteChannel(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"newByteChannel", jni::ref<java::nio::channels::SeekableByteChannel>>(path, options); }
	static jni::ref<java::nio::file::DirectoryStream> newDirectoryStream(jni::ref<java::nio::file::Path> dir) { return call_static_method<"newDirectoryStream", jni::ref<java::nio::file::DirectoryStream>>(dir); }
	static jni::ref<java::nio::file::DirectoryStream> newDirectoryStream(jni::ref<java::nio::file::Path> dir, jni::ref<java::lang::String> glob) { return call_static_method<"newDirectoryStream", jni::ref<java::nio::file::DirectoryStream>>(dir, glob); }
	static jni::ref<java::nio::file::DirectoryStream> newDirectoryStream(jni::ref<java::nio::file::Path> dir, jni::ref<java::nio::file::DirectoryStream_Filter> filter) { return call_static_method<"newDirectoryStream", jni::ref<java::nio::file::DirectoryStream>>(dir, filter); }
	static jni::ref<java::nio::file::Path> createFile(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createFile", jni::ref<java::nio::file::Path>>(path, attrs); }
	static jni::ref<java::nio::file::Path> createDirectory(jni::ref<java::nio::file::Path> dir, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createDirectory", jni::ref<java::nio::file::Path>>(dir, attrs); }
	static jni::ref<java::nio::file::Path> createDirectories(jni::ref<java::nio::file::Path> dir, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createDirectories", jni::ref<java::nio::file::Path>>(dir, attrs); }
	static jni::ref<java::nio::file::Path> createTempFile(jni::ref<java::nio::file::Path> dir, jni::ref<java::lang::String> prefix, jni::ref<java::lang::String> suffix, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createTempFile", jni::ref<java::nio::file::Path>>(dir, prefix, suffix, attrs); }
	static jni::ref<java::nio::file::Path> createTempFile(jni::ref<java::lang::String> prefix, jni::ref<java::lang::String> suffix, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createTempFile", jni::ref<java::nio::file::Path>>(prefix, suffix, attrs); }
	static jni::ref<java::nio::file::Path> createTempDirectory(jni::ref<java::nio::file::Path> dir, jni::ref<java::lang::String> prefix, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createTempDirectory", jni::ref<java::nio::file::Path>>(dir, prefix, attrs); }
	static jni::ref<java::nio::file::Path> createTempDirectory(jni::ref<java::lang::String> prefix, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createTempDirectory", jni::ref<java::nio::file::Path>>(prefix, attrs); }
	static jni::ref<java::nio::file::Path> createSymbolicLink(jni::ref<java::nio::file::Path> link, jni::ref<java::nio::file::Path> target, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"createSymbolicLink", jni::ref<java::nio::file::Path>>(link, target, attrs); }
	static jni::ref<java::nio::file::Path> createLink(jni::ref<java::nio::file::Path> link, jni::ref<java::nio::file::Path> existing) { return call_static_method<"createLink", jni::ref<java::nio::file::Path>>(link, existing); }
	static void delete_(jni::ref<java::nio::file::Path> path) { return call_static_method<"delete", void>(path); }
	static jboolean deleteIfExists(jni::ref<java::nio::file::Path> path) { return call_static_method<"deleteIfExists", jboolean>(path); }
	static jni::ref<java::nio::file::Path> copy(jni::ref<java::nio::file::Path> source, jni::ref<java::nio::file::Path> target, jni::ref<jni::array<java::nio::file::CopyOption>> options) { return call_static_method<"copy", jni::ref<java::nio::file::Path>>(source, target, options); }
	static jni::ref<java::nio::file::Path> move(jni::ref<java::nio::file::Path> source, jni::ref<java::nio::file::Path> target, jni::ref<jni::array<java::nio::file::CopyOption>> options) { return call_static_method<"move", jni::ref<java::nio::file::Path>>(source, target, options); }
	static jni::ref<java::nio::file::Path> readSymbolicLink(jni::ref<java::nio::file::Path> link) { return call_static_method<"readSymbolicLink", jni::ref<java::nio::file::Path>>(link); }
	static jni::ref<java::nio::file::FileStore> getFileStore(jni::ref<java::nio::file::Path> path) { return call_static_method<"getFileStore", jni::ref<java::nio::file::FileStore>>(path); }
	static jboolean isSameFile(jni::ref<java::nio::file::Path> path, jni::ref<java::nio::file::Path> path2) { return call_static_method<"isSameFile", jboolean>(path, path2); }
	static jboolean isHidden(jni::ref<java::nio::file::Path> path) { return call_static_method<"isHidden", jboolean>(path); }
	static jni::ref<java::lang::String> probeContentType(jni::ref<java::nio::file::Path> path) { return call_static_method<"probeContentType", jni::ref<java::lang::String>>(path); }
	static jni::ref<java::nio::file::attribute::FileAttributeView> getFileAttributeView(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::Class> type, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"getFileAttributeView", jni::ref<java::nio::file::attribute::FileAttributeView>>(path, type, options); }
	static jni::ref<java::nio::file::attribute::BasicFileAttributes> readAttributes(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::Class> type, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"readAttributes", jni::ref<java::nio::file::attribute::BasicFileAttributes>>(path, type, options); }
	static jni::ref<java::nio::file::Path> setAttribute(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::String> attribute, jni::ref<java::lang::Object> value, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"setAttribute", jni::ref<java::nio::file::Path>>(path, attribute, value, options); }
	static jni::ref<java::lang::Object> getAttribute(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::String> attribute, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"getAttribute", jni::ref<java::lang::Object>>(path, attribute, options); }
	static jni::ref<java::util::Map> readAttributes(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::String> attributes, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"readAttributes", jni::ref<java::util::Map>>(path, attributes, options); }
	static jni::ref<java::util::Set> getPosixFilePermissions(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"getPosixFilePermissions", jni::ref<java::util::Set>>(path, options); }
	static jni::ref<java::nio::file::Path> setPosixFilePermissions(jni::ref<java::nio::file::Path> path, jni::ref<java::util::Set> perms) { return call_static_method<"setPosixFilePermissions", jni::ref<java::nio::file::Path>>(path, perms); }
	static jni::ref<java::nio::file::attribute::UserPrincipal> getOwner(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"getOwner", jni::ref<java::nio::file::attribute::UserPrincipal>>(path, options); }
	static jni::ref<java::nio::file::Path> setOwner(jni::ref<java::nio::file::Path> path, jni::ref<java::nio::file::attribute::UserPrincipal> owner) { return call_static_method<"setOwner", jni::ref<java::nio::file::Path>>(path, owner); }
	static jboolean isSymbolicLink(jni::ref<java::nio::file::Path> path) { return call_static_method<"isSymbolicLink", jboolean>(path); }
	static jboolean isDirectory(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"isDirectory", jboolean>(path, options); }
	static jboolean isRegularFile(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"isRegularFile", jboolean>(path, options); }
	static jni::ref<java::nio::file::attribute::FileTime> getLastModifiedTime(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"getLastModifiedTime", jni::ref<java::nio::file::attribute::FileTime>>(path, options); }
	static jni::ref<java::nio::file::Path> setLastModifiedTime(jni::ref<java::nio::file::Path> path, jni::ref<java::nio::file::attribute::FileTime> time) { return call_static_method<"setLastModifiedTime", jni::ref<java::nio::file::Path>>(path, time); }
	static jlong size(jni::ref<java::nio::file::Path> path) { return call_static_method<"size", jlong>(path); }
	static jboolean exists(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"exists", jboolean>(path, options); }
	static jboolean notExists(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::LinkOption>> options) { return call_static_method<"notExists", jboolean>(path, options); }
	static jboolean isReadable(jni::ref<java::nio::file::Path> path) { return call_static_method<"isReadable", jboolean>(path); }
	static jboolean isWritable(jni::ref<java::nio::file::Path> path) { return call_static_method<"isWritable", jboolean>(path); }
	static jboolean isExecutable(jni::ref<java::nio::file::Path> path) { return call_static_method<"isExecutable", jboolean>(path); }
	static jni::ref<java::nio::file::Path> walkFileTree(jni::ref<java::nio::file::Path> start, jni::ref<java::util::Set> options, jint maxDepth, jni::ref<java::nio::file::FileVisitor> visitor) { return call_static_method<"walkFileTree", jni::ref<java::nio::file::Path>>(start, options, maxDepth, visitor); }
	static jni::ref<java::nio::file::Path> walkFileTree(jni::ref<java::nio::file::Path> start, jni::ref<java::nio::file::FileVisitor> visitor) { return call_static_method<"walkFileTree", jni::ref<java::nio::file::Path>>(start, visitor); }
	static jni::ref<java::io::BufferedReader> newBufferedReader(jni::ref<java::nio::file::Path> path, jni::ref<java::nio::charset::Charset> cs) { return call_static_method<"newBufferedReader", jni::ref<java::io::BufferedReader>>(path, cs); }
	static jni::ref<java::io::BufferedReader> newBufferedReader(jni::ref<java::nio::file::Path> path) { return call_static_method<"newBufferedReader", jni::ref<java::io::BufferedReader>>(path); }
	static jni::ref<java::io::BufferedWriter> newBufferedWriter(jni::ref<java::nio::file::Path> path, jni::ref<java::nio::charset::Charset> cs, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"newBufferedWriter", jni::ref<java::io::BufferedWriter>>(path, cs, options); }
	static jni::ref<java::io::BufferedWriter> newBufferedWriter(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"newBufferedWriter", jni::ref<java::io::BufferedWriter>>(path, options); }
	static jlong copy(jni::ref<java::io::InputStream> in, jni::ref<java::nio::file::Path> target, jni::ref<jni::array<java::nio::file::CopyOption>> options) { return call_static_method<"copy", jlong>(in, target, options); }
	static jlong copy(jni::ref<java::nio::file::Path> source, jni::ref<java::io::OutputStream> out) { return call_static_method<"copy", jlong>(source, out); }
	static jni::ref<jni::array<jbyte>> readAllBytes(jni::ref<java::nio::file::Path> path) { return call_static_method<"readAllBytes", jni::ref<jni::array<jbyte>>>(path); }
	static jni::ref<java::util::List> readAllLines(jni::ref<java::nio::file::Path> path, jni::ref<java::nio::charset::Charset> cs) { return call_static_method<"readAllLines", jni::ref<java::util::List>>(path, cs); }
	static jni::ref<java::util::List> readAllLines(jni::ref<java::nio::file::Path> path) { return call_static_method<"readAllLines", jni::ref<java::util::List>>(path); }
	static jni::ref<java::nio::file::Path> write(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<jbyte>> bytes, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"write", jni::ref<java::nio::file::Path>>(path, bytes, options); }
	static jni::ref<java::nio::file::Path> write(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::Iterable> lines, jni::ref<java::nio::charset::Charset> cs, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"write", jni::ref<java::nio::file::Path>>(path, lines, cs, options); }
	static jni::ref<java::nio::file::Path> write(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::Iterable> lines, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"write", jni::ref<java::nio::file::Path>>(path, lines, options); }
	static jni::ref<java::util::stream::Stream> list(jni::ref<java::nio::file::Path> dir) { return call_static_method<"list", jni::ref<java::util::stream::Stream>>(dir); }
	static jni::ref<java::util::stream::Stream> walk(jni::ref<java::nio::file::Path> start, jint maxDepth, jni::ref<jni::array<java::nio::file::FileVisitOption>> options) { return call_static_method<"walk", jni::ref<java::util::stream::Stream>>(start, maxDepth, options); }
	static jni::ref<java::util::stream::Stream> walk(jni::ref<java::nio::file::Path> start, jni::ref<jni::array<java::nio::file::FileVisitOption>> options) { return call_static_method<"walk", jni::ref<java::util::stream::Stream>>(start, options); }
	static jni::ref<java::util::stream::Stream> find(jni::ref<java::nio::file::Path> start, jint maxDepth, jni::ref<java::util::function::BiPredicate> matcher, jni::ref<jni::array<java::nio::file::FileVisitOption>> options) { return call_static_method<"find", jni::ref<java::util::stream::Stream>>(start, maxDepth, matcher, options); }
	static jni::ref<java::util::stream::Stream> lines(jni::ref<java::nio::file::Path> path, jni::ref<java::nio::charset::Charset> cs) { return call_static_method<"lines", jni::ref<java::util::stream::Stream>>(path, cs); }
	static jni::ref<java::util::stream::Stream> lines(jni::ref<java::nio::file::Path> path) { return call_static_method<"lines", jni::ref<java::util::stream::Stream>>(path); }

protected:

	Files(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES