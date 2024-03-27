// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/channels/WritableByteChannel.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_GATHERINGBYTECHANNEL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_GATHERINGBYTECHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class GatheringByteChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::GatheringByteChannel>
{
	static constexpr fixed_string class_name = "java/nio/channels/GatheringByteChannel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::channels::WritableByteChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_GATHERINGBYTECHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_GATHERINGBYTECHANNEL)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_GATHERINGBYTECHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::GatheringByteChannel : public jni::object_base<"java/nio/channels/GatheringByteChannel",
	java::lang::Object,
	java::nio::channels::WritableByteChannel>
{
public:

	jlong write(jni::ref<jni::array<java::nio::ByteBuffer>> p1) { return call_method<"write", jlong>(p1); }
	jlong write(jni::ref<jni::array<java::nio::ByteBuffer>> p1, jint p2, jint p3) { return call_method<"write", jlong>(p1, p2, p3); }

protected:

	GatheringByteChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_GATHERINGBYTECHANNEL
