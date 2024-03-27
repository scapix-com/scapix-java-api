// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILEINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILEINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class FileInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::FileInputStream>
{
	static constexpr fixed_string class_name = "java/io/FileInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILEINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILEINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_FILEINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/channels/FileChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::FileInputStream : public jni::object_base<"java/io/FileInputStream",
	java::io::InputStream>
{
public:

	static jni::ref<java::io::FileInputStream> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::io::FileInputStream> new_object(jni::ref<java::io::File> file) { return base_::new_object(file); }
	static jni::ref<java::io::FileInputStream> new_object(jni::ref<java::io::FileDescriptor> fdObj) { return base_::new_object(fdObj); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b) { return call_method<"read", jint>(b); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	jlong skip(jlong n) { return call_method<"skip", jlong>(n); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::io::FileDescriptor> getFD() { return call_method<"getFD", jni::ref<java::io::FileDescriptor>>(); }
	jni::ref<java::nio::channels::FileChannel> getChannel() { return call_method<"getChannel", jni::ref<java::nio::channels::FileChannel>>(); }

protected:

	FileInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILEINPUTSTREAM
