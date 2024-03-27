// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class ChannelInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::ChannelInputStream>
{
	static constexpr fixed_string class_name = "sun/nio/ch/ChannelInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/channels/ReadableByteChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::ChannelInputStream : public jni::object_base<"sun/nio/ch/ChannelInputStream",
	java::io::InputStream>
{
public:

	static jint read(jni::ref<java::nio::channels::ReadableByteChannel> ch, jni::ref<java::nio::ByteBuffer> bb, jboolean block) { return call_static_method<"read", jint>(ch, bb, block); }
	static jni::ref<sun::nio::ch::ChannelInputStream> new_object(jni::ref<java::nio::channels::ReadableByteChannel> ch) { return base_::new_object(ch); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> bs, jint off, jint len) { return call_method<"read", jint>(bs, off, len); }
	jint available() { return call_method<"available", jint>(); }
	jlong skip(jlong n) { return call_method<"skip", jlong>(n); }
	void close() { return call_method<"close", void>(); }

protected:

	ChannelInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELINPUTSTREAM
