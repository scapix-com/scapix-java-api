// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_STREAMS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_STREAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class Streams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::Streams>
{
	static constexpr fixed_string class_name = "sun/nio/ch/Streams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_STREAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_STREAMS)
#define SCAPIX_JAVA_API_SUN_NIO_CH_STREAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/nio/channels/ReadableByteChannel.h>
#include <scapix/java_api/java/nio/channels/WritableByteChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::Streams : public jni::object_base<"sun/nio/ch/Streams",
	java::lang::Object>
{
public:

	static jni::ref<java::io::InputStream> of(jni::ref<java::nio::channels::ReadableByteChannel> ch) { return call_static_method<"of", jni::ref<java::io::InputStream>>(ch); }
	static jni::ref<java::io::OutputStream> of(jni::ref<java::nio::channels::WritableByteChannel> ch) { return call_static_method<"of", jni::ref<java::io::OutputStream>>(ch); }

protected:

	Streams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_STREAMS
