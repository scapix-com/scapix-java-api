// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_MEMORYFILE_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_MEMORYFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class MemoryFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::MemoryFile>
{
	static constexpr fixed_string class_name = "android/os/MemoryFile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_MEMORYFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_MEMORYFILE)
#define SCAPIX_JAVA_API_ANDROID_OS_MEMORYFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::MemoryFile : public jni::object_base<"android/os/MemoryFile",
	java::lang::Object>
{
public:

	static jni::ref<android::os::MemoryFile> new_object(jni::ref<java::lang::String> name, jint length) { return base_::new_object(name, length); }
	void close() { return call_method<"close", void>(); }
	jint length() { return call_method<"length", jint>(); }
	jboolean isPurgingAllowed() { return call_method<"isPurgingAllowed", jboolean>(); }
	jboolean allowPurging(jboolean allowPurging) { return call_method<"allowPurging", jboolean>(allowPurging); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jint readBytes(jni::ref<jni::array<jbyte>> buffer, jint srcOffset, jint destOffset, jint count) { return call_method<"readBytes", jint>(buffer, srcOffset, destOffset, count); }
	void writeBytes(jni::ref<jni::array<jbyte>> buffer, jint srcOffset, jint destOffset, jint count) { return call_method<"writeBytes", void>(buffer, srcOffset, destOffset, count); }

protected:

	MemoryFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_MEMORYFILE
