// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class ChannelOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::ChannelOutputStream>
{
	static constexpr fixed_string class_name = "sun/nio/ch/ChannelOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELOUTPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELOUTPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::ChannelOutputStream : public jni::object_base<"sun/nio/ch/ChannelOutputStream",
	java::io::OutputStream>
{
public:

	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> bs, jint off, jint len) { return call_method<"write", void>(bs, off, len); }
	void close() { return call_method<"close", void>(); }

protected:

	ChannelOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_CHANNELOUTPUTSTREAM
