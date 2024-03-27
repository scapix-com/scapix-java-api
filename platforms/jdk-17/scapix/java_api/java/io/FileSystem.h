// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILESYSTEM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILESYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class FileSystem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::FileSystem>
{
	static constexpr fixed_string class_name = "java/io/FileSystem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILESYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILESYSTEM)
#define SCAPIX_JAVA_API_JAVA_IO_FILESYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::FileSystem : public jni::object_base<"java/io/FileSystem",
	java::lang::Object>
{
public:

	static jint BA_EXISTS() { return get_static_field<"BA_EXISTS", jint>(); }
	static jint BA_REGULAR() { return get_static_field<"BA_REGULAR", jint>(); }
	static jint BA_DIRECTORY() { return get_static_field<"BA_DIRECTORY", jint>(); }
	static jint BA_HIDDEN() { return get_static_field<"BA_HIDDEN", jint>(); }
	static jint ACCESS_READ() { return get_static_field<"ACCESS_READ", jint>(); }
	static jint ACCESS_WRITE() { return get_static_field<"ACCESS_WRITE", jint>(); }
	static jint ACCESS_EXECUTE() { return get_static_field<"ACCESS_EXECUTE", jint>(); }
	static jint SPACE_TOTAL() { return get_static_field<"SPACE_TOTAL", jint>(); }
	static jint SPACE_FREE() { return get_static_field<"SPACE_FREE", jint>(); }
	static jint SPACE_USABLE() { return get_static_field<"SPACE_USABLE", jint>(); }

	jchar getSeparator() { return call_method<"getSeparator", jchar>(); }
	jchar getPathSeparator() { return call_method<"getPathSeparator", jchar>(); }
	jni::ref<java::lang::String> normalize(jni::ref<java::lang::String> p1) { return call_method<"normalize", jni::ref<java::lang::String>>(p1); }
	jint prefixLength(jni::ref<java::lang::String> p1) { return call_method<"prefixLength", jint>(p1); }
	jni::ref<java::lang::String> resolve(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"resolve", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getDefaultParent() { return call_method<"getDefaultParent", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> fromURIPath(jni::ref<java::lang::String> p1) { return call_method<"fromURIPath", jni::ref<java::lang::String>>(p1); }
	jboolean isAbsolute(jni::ref<java::io::File> p1) { return call_method<"isAbsolute", jboolean>(p1); }
	jboolean isInvalid(jni::ref<java::io::File> p1) { return call_method<"isInvalid", jboolean>(p1); }
	jni::ref<java::lang::String> resolve(jni::ref<java::io::File> p1) { return call_method<"resolve", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> canonicalize(jni::ref<java::lang::String> p1) { return call_method<"canonicalize", jni::ref<java::lang::String>>(p1); }
	jint getBooleanAttributes(jni::ref<java::io::File> p1) { return call_method<"getBooleanAttributes", jint>(p1); }
	jboolean hasBooleanAttributes(jni::ref<java::io::File> f, jint attributes) { return call_method<"hasBooleanAttributes", jboolean>(f, attributes); }
	jboolean checkAccess(jni::ref<java::io::File> p1, jint p2) { return call_method<"checkAccess", jboolean>(p1, p2); }
	jboolean setPermission(jni::ref<java::io::File> p1, jint p2, jboolean p3, jboolean p4) { return call_method<"setPermission", jboolean>(p1, p2, p3, p4); }
	jlong getLastModifiedTime(jni::ref<java::io::File> p1) { return call_method<"getLastModifiedTime", jlong>(p1); }
	jlong getLength(jni::ref<java::io::File> p1) { return call_method<"getLength", jlong>(p1); }
	jboolean createFileExclusively(jni::ref<java::lang::String> p1) { return call_method<"createFileExclusively", jboolean>(p1); }
	jboolean delete_(jni::ref<java::io::File> p1) { return call_method<"delete", jboolean>(p1); }
	jni::ref<jni::array<java::lang::String>> list(jni::ref<java::io::File> p1) { return call_method<"list", jni::ref<jni::array<java::lang::String>>>(p1); }
	jboolean createDirectory(jni::ref<java::io::File> p1) { return call_method<"createDirectory", jboolean>(p1); }
	jboolean rename(jni::ref<java::io::File> p1, jni::ref<java::io::File> p2) { return call_method<"rename", jboolean>(p1, p2); }
	jboolean setLastModifiedTime(jni::ref<java::io::File> p1, jlong p2) { return call_method<"setLastModifiedTime", jboolean>(p1, p2); }
	jboolean setReadOnly(jni::ref<java::io::File> p1) { return call_method<"setReadOnly", jboolean>(p1); }
	jni::ref<jni::array<java::io::File>> listRoots() { return call_method<"listRoots", jni::ref<jni::array<java::io::File>>>(); }
	jlong getSpace(jni::ref<java::io::File> p1, jint p2) { return call_method<"getSpace", jlong>(p1, p2); }
	jint getNameMax(jni::ref<java::lang::String> p1) { return call_method<"getNameMax", jint>(p1); }
	jint compare(jni::ref<java::io::File> p1, jni::ref<java::io::File> p2) { return call_method<"compare", jint>(p1, p2); }
	jint hashCode(jni::ref<java::io::File> p1) { return call_method<"hashCode", jint>(p1); }

protected:

	FileSystem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILESYSTEM
