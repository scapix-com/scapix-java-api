// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/stream/ImageInputStreamImpl.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_STREAM_FILEIMAGEINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_STREAM_FILEIMAGEINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio::stream { class FileImageInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::stream::FileImageInputStream>
{
	static constexpr fixed_string class_name = "javax/imageio/stream/FileImageInputStream";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::stream::ImageInputStreamImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_STREAM_FILEIMAGEINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_STREAM_FILEIMAGEINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_STREAM_FILEIMAGEINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/RandomAccessFile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::stream::FileImageInputStream : public jni::object_base<"javax/imageio/stream/FileImageInputStream",
	javax::imageio::stream::ImageInputStreamImpl>
{
public:

	static jni::ref<javax::imageio::stream::FileImageInputStream> new_object(jni::ref<java::io::File> p1) { return base_::new_object(p1); }
	static jni::ref<javax::imageio::stream::FileImageInputStream> new_object(jni::ref<java::io::RandomAccessFile> p1) { return base_::new_object(p1); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jlong length() { return call_method<"length", jlong>(); }
	void seek(jlong p1) { return call_method<"seek", void>(p1); }
	void close() { return call_method<"close", void>(); }

protected:

	FileImageInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_STREAM_FILEIMAGEINPUTSTREAM
