// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_PIPE_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_PIPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class Pipe; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::Pipe>
{
	static constexpr fixed_string class_name = "java/nio/channels/Pipe";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_PIPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_PIPE)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_PIPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/Pipe_SinkChannel.h>
#include <scapix/java_api/java/nio/channels/Pipe_SourceChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::Pipe : public jni::object_base<"java/nio/channels/Pipe",
	java::lang::Object>
{
public:

	using SinkChannel = Pipe_SinkChannel;
	using SourceChannel = Pipe_SourceChannel;

	jni::ref<java::nio::channels::Pipe_SourceChannel> source() { return call_method<"source", jni::ref<java::nio::channels::Pipe_SourceChannel>>(); }
	jni::ref<java::nio::channels::Pipe_SinkChannel> sink() { return call_method<"sink", jni::ref<java::nio::channels::Pipe_SinkChannel>>(); }
	static jni::ref<java::nio::channels::Pipe> open() { return call_static_method<"open", jni::ref<java::nio::channels::Pipe>>(); }

protected:

	Pipe(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_PIPE
