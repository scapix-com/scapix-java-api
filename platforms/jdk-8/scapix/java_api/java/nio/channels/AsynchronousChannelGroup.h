// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSCHANNELGROUP_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSCHANNELGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class AsynchronousChannelGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::AsynchronousChannelGroup>
{
	static constexpr fixed_string class_name = "java/nio/channels/AsynchronousChannelGroup";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSCHANNELGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSCHANNELGROUP)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSCHANNELGROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::AsynchronousChannelGroup : public jni::object_base<"java/nio/channels/AsynchronousChannelGroup",
	java::lang::Object>
{
public:

	jni::ref<java::nio::channels::spi::AsynchronousChannelProvider> provider() { return call_method<"provider", jni::ref<java::nio::channels::spi::AsynchronousChannelProvider>>(); }
	static jni::ref<java::nio::channels::AsynchronousChannelGroup> withFixedThreadPool(jint p1, jni::ref<java::util::concurrent::ThreadFactory> p2) { return call_static_method<"withFixedThreadPool", jni::ref<java::nio::channels::AsynchronousChannelGroup>>(p1, p2); }
	static jni::ref<java::nio::channels::AsynchronousChannelGroup> withCachedThreadPool(jni::ref<java::util::concurrent::ExecutorService> p1, jint p2) { return call_static_method<"withCachedThreadPool", jni::ref<java::nio::channels::AsynchronousChannelGroup>>(p1, p2); }
	static jni::ref<java::nio::channels::AsynchronousChannelGroup> withThreadPool(jni::ref<java::util::concurrent::ExecutorService> p1) { return call_static_method<"withThreadPool", jni::ref<java::nio::channels::AsynchronousChannelGroup>>(p1); }
	jboolean isShutdown() { return call_method<"isShutdown", jboolean>(); }
	jboolean isTerminated() { return call_method<"isTerminated", jboolean>(); }
	void shutdown() { return call_method<"shutdown", void>(); }
	void shutdownNow() { return call_method<"shutdownNow", void>(); }
	jboolean awaitTermination(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"awaitTermination", jboolean>(p1, p2); }

protected:

	AsynchronousChannelGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSCHANNELGROUP