// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class File; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::File>
{
	static constexpr fixed_string class_name = "java/io/File";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILE)
#define SCAPIX_JAVA_API_JAVA_IO_FILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileFilter.h>
#include <scapix/java_api/java/io/FilenameFilter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/nio/file/Path.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::File : public jni::object_base<"java/io/File",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable>
{
public:

	static jni::ref<java::lang::String> pathSeparator() { return get_static_field<"pathSeparator", jni::ref<java::lang::String>>(); }
	static jchar pathSeparatorChar() { return get_static_field<"pathSeparatorChar", jchar>(); }
	static jni::ref<java::lang::String> separator() { return get_static_field<"separator", jni::ref<java::lang::String>>(); }
	static jchar separatorChar() { return get_static_field<"separatorChar", jchar>(); }

	static jni::ref<java::io::File> new_object(jni::ref<java::lang::String> pathname) { return base_::new_object(pathname); }
	static jni::ref<java::io::File> new_object(jni::ref<java::lang::String> parent, jni::ref<java::lang::String> child) { return base_::new_object(parent, child); }
	static jni::ref<java::io::File> new_object(jni::ref<java::io::File> parent, jni::ref<java::lang::String> child) { return base_::new_object(parent, child); }
	static jni::ref<java::io::File> new_object(jni::ref<java::net::URI> uri) { return base_::new_object(uri); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getParent() { return call_method<"getParent", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::File> getParentFile() { return call_method<"getParentFile", jni::ref<java::io::File>>(); }
	jni::ref<java::lang::String> getPath() { return call_method<"getPath", jni::ref<java::lang::String>>(); }
	jboolean isAbsolute() { return call_method<"isAbsolute", jboolean>(); }
	jni::ref<java::lang::String> getAbsolutePath() { return call_method<"getAbsolutePath", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::File> getAbsoluteFile() { return call_method<"getAbsoluteFile", jni::ref<java::io::File>>(); }
	jni::ref<java::lang::String> getCanonicalPath() { return call_method<"getCanonicalPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::File> getCanonicalFile() { return call_method<"getCanonicalFile", jni::ref<java::io::File>>(); }
	jni::ref<java::net::URL> toURL() { return call_method<"toURL", jni::ref<java::net::URL>>(); }
	jni::ref<java::net::URI> toURI() { return call_method<"toURI", jni::ref<java::net::URI>>(); }
	jboolean canRead() { return call_method<"canRead", jboolean>(); }
	jboolean canWrite() { return call_method<"canWrite", jboolean>(); }
	jboolean exists() { return call_method<"exists", jboolean>(); }
	jboolean isDirectory() { return call_method<"isDirectory", jboolean>(); }
	jboolean isFile() { return call_method<"isFile", jboolean>(); }
	jboolean isHidden() { return call_method<"isHidden", jboolean>(); }
	jlong lastModified() { return call_method<"lastModified", jlong>(); }
	jlong length() { return call_method<"length", jlong>(); }
	jboolean createNewFile() { return call_method<"createNewFile", jboolean>(); }
	jboolean delete_() { return call_method<"delete", jboolean>(); }
	void deleteOnExit() { return call_method<"deleteOnExit", void>(); }
	jni::ref<jni::array<java::lang::String>> list() { return call_method<"list", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> list(jni::ref<java::io::FilenameFilter> filter) { return call_method<"list", jni::ref<jni::array<java::lang::String>>>(filter); }
	jni::ref<jni::array<java::io::File>> listFiles() { return call_method<"listFiles", jni::ref<jni::array<java::io::File>>>(); }
	jni::ref<jni::array<java::io::File>> listFiles(jni::ref<java::io::FilenameFilter> filter) { return call_method<"listFiles", jni::ref<jni::array<java::io::File>>>(filter); }
	jni::ref<jni::array<java::io::File>> listFiles(jni::ref<java::io::FileFilter> filter) { return call_method<"listFiles", jni::ref<jni::array<java::io::File>>>(filter); }
	jboolean mkdir() { return call_method<"mkdir", jboolean>(); }
	jboolean mkdirs() { return call_method<"mkdirs", jboolean>(); }
	jboolean renameTo(jni::ref<java::io::File> dest) { return call_method<"renameTo", jboolean>(dest); }
	jboolean setLastModified(jlong time) { return call_method<"setLastModified", jboolean>(time); }
	jboolean setReadOnly() { return call_method<"setReadOnly", jboolean>(); }
	jboolean setWritable(jboolean writable, jboolean ownerOnly) { return call_method<"setWritable", jboolean>(writable, ownerOnly); }
	jboolean setWritable(jboolean writable) { return call_method<"setWritable", jboolean>(writable); }
	jboolean setReadable(jboolean readable, jboolean ownerOnly) { return call_method<"setReadable", jboolean>(readable, ownerOnly); }
	jboolean setReadable(jboolean readable) { return call_method<"setReadable", jboolean>(readable); }
	jboolean setExecutable(jboolean executable, jboolean ownerOnly) { return call_method<"setExecutable", jboolean>(executable, ownerOnly); }
	jboolean setExecutable(jboolean executable) { return call_method<"setExecutable", jboolean>(executable); }
	jboolean canExecute() { return call_method<"canExecute", jboolean>(); }
	static jni::ref<jni::array<java::io::File>> listRoots() { return call_static_method<"listRoots", jni::ref<jni::array<java::io::File>>>(); }
	jlong getTotalSpace() { return call_method<"getTotalSpace", jlong>(); }
	jlong getFreeSpace() { return call_method<"getFreeSpace", jlong>(); }
	jlong getUsableSpace() { return call_method<"getUsableSpace", jlong>(); }
	static jni::ref<java::io::File> createTempFile(jni::ref<java::lang::String> prefix, jni::ref<java::lang::String> suffix, jni::ref<java::io::File> directory) { return call_static_method<"createTempFile", jni::ref<java::io::File>>(prefix, suffix, directory); }
	static jni::ref<java::io::File> createTempFile(jni::ref<java::lang::String> prefix, jni::ref<java::lang::String> suffix) { return call_static_method<"createTempFile", jni::ref<java::io::File>>(prefix, suffix); }
	jint compareTo(jni::ref<java::io::File> pathname) { return call_method<"compareTo", jint>(pathname); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::nio::file::Path> toPath() { return call_method<"toPath", jni::ref<java::nio::file::Path>>(); }

protected:

	File(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILE
