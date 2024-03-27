// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILEOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILEOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class FileOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::FileOutputStream>
{
	static constexpr fixed_string class_name = "java/io/FileOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILEOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILEOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_FILEOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/channels/FileChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::FileOutputStream : public jni::object_base<"java/io/FileOutputStream",
	java::io::OutputStream>
{
public:

	static jni::ref<java::io::FileOutputStream> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::io::FileOutputStream> new_object(jni::ref<java::lang::String> name, jboolean append) { return base_::new_object(name, append); }
	static jni::ref<java::io::FileOutputStream> new_object(jni::ref<java::io::File> file) { return base_::new_object(file); }
	static jni::ref<java::io::FileOutputStream> new_object(jni::ref<java::io::File> file, jboolean append) { return base_::new_object(file, append); }
	static jni::ref<java::io::FileOutputStream> new_object(jni::ref<java::io::FileDescriptor> fdObj) { return base_::new_object(fdObj); }
	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::io::FileDescriptor> getFD() { return call_method<"getFD", jni::ref<java::io::FileDescriptor>>(); }
	jni::ref<java::nio::channels::FileChannel> getChannel() { return call_method<"getChannel", jni::ref<java::nio::channels::FileChannel>>(); }

protected:

	FileOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILEOUTPUTSTREAM