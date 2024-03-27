// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_BASICIMAGEREADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_BASICIMAGEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jimage { class BasicImageReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jimage::BasicImageReader>
{
	static constexpr fixed_string class_name = "jdk/internal/jimage/BasicImageReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_BASICIMAGEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_BASICIMAGEREADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_BASICIMAGEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/jdk/internal/jimage/ImageHeader.h>
#include <scapix/java_api/jdk/internal/jimage/ImageLocation.h>
#include <scapix/java_api/jdk/internal/jimage/ImageStringsReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::jimage::BasicImageReader : public jni::object_base<"jdk/internal/jimage/BasicImageReader",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jni::ref<jdk::internal::jimage::BasicImageReader> open(jni::ref<java::nio::file::Path> imagePath) { return call_static_method<"open", jni::ref<jdk::internal::jimage::BasicImageReader>>(imagePath); }
	jni::ref<jdk::internal::jimage::ImageHeader> getHeader() { return call_method<"getHeader", jni::ref<jdk::internal::jimage::ImageHeader>>(); }
	static void releaseByteBuffer(jni::ref<java::nio::ByteBuffer> buffer) { return call_static_method<"releaseByteBuffer", void>(buffer); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::nio::ByteOrder> getByteOrder() { return call_method<"getByteOrder", jni::ref<java::nio::ByteOrder>>(); }
	jni::ref<java::nio::file::Path> getImagePath() { return call_method<"getImagePath", jni::ref<java::nio::file::Path>>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<jdk::internal::jimage::ImageStringsReader> getStrings() { return call_method<"getStrings", jni::ref<jdk::internal::jimage::ImageStringsReader>>(); }
	jni::ref<jdk::internal::jimage::ImageLocation> findLocation(jni::ref<java::lang::String> module, jni::ref<java::lang::String> name) { return call_method<"findLocation", jni::ref<jdk::internal::jimage::ImageLocation>>(module, name); }
	jni::ref<jdk::internal::jimage::ImageLocation> findLocation(jni::ref<java::lang::String> name) { return call_method<"findLocation", jni::ref<jdk::internal::jimage::ImageLocation>>(name); }
	jni::ref<jni::array<java::lang::String>> getEntryNames() { return call_method<"getEntryNames", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<jlong>> getAttributes(jint offset) { return call_method<"getAttributes", jni::ref<jni::array<jlong>>>(offset); }
	jni::ref<java::lang::String> getString(jint offset) { return call_method<"getString", jni::ref<java::lang::String>>(offset); }
	jni::ref<jni::array<jbyte>> getResource(jni::ref<java::lang::String> name) { return call_method<"getResource", jni::ref<jni::array<jbyte>>>(name); }
	jni::ref<jni::array<jbyte>> getResource(jni::ref<jdk::internal::jimage::ImageLocation> loc) { return call_method<"getResource", jni::ref<jni::array<jbyte>>>(loc); }
	jni::ref<java::nio::ByteBuffer> getResourceBuffer(jni::ref<jdk::internal::jimage::ImageLocation> loc) { return call_method<"getResourceBuffer", jni::ref<java::nio::ByteBuffer>>(loc); }
	jni::ref<java::io::InputStream> getResourceStream(jni::ref<jdk::internal::jimage::ImageLocation> loc) { return call_method<"getResourceStream", jni::ref<java::io::InputStream>>(loc); }

protected:

	BasicImageReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_BASICIMAGEREADER
