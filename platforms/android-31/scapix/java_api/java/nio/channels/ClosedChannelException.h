// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class ClosedChannelException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::ClosedChannelException>
{
	static constexpr fixed_string class_name = "java/nio/channels/ClosedChannelException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::ClosedChannelException : public jni::object_base<"java/nio/channels/ClosedChannelException",
	java::io::IOException>
{
public:

	static jni::ref<java::nio::channels::ClosedChannelException> new_object() { return base_::new_object(); }

protected:

	ClosedChannelException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION
