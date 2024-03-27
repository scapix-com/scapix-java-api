// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/spi/AsynchronousChannelProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSCHANNELPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSCHANNELPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WindowsAsynchronousChannelProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WindowsAsynchronousChannelProvider>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WindowsAsynchronousChannelProvider";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::spi::AsynchronousChannelProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSCHANNELPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSCHANNELPROVIDER)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSCHANNELPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/AsynchronousChannelGroup.h>
#include <scapix/java_api/java/nio/channels/AsynchronousServerSocketChannel.h>
#include <scapix/java_api/java/nio/channels/AsynchronousSocketChannel.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::WindowsAsynchronousChannelProvider : public jni::object_base<"sun/nio/ch/WindowsAsynchronousChannelProvider",
	java::nio::channels::spi::AsynchronousChannelProvider>
{
public:

	static jni::ref<sun::nio::ch::WindowsAsynchronousChannelProvider> new_object() { return base_::new_object(); }
	jni::ref<java::nio::channels::AsynchronousChannelGroup> openAsynchronousChannelGroup(jint nThreads, jni::ref<java::util::concurrent::ThreadFactory> factory) { return call_method<"openAsynchronousChannelGroup", jni::ref<java::nio::channels::AsynchronousChannelGroup>>(nThreads, factory); }
	jni::ref<java::nio::channels::AsynchronousChannelGroup> openAsynchronousChannelGroup(jni::ref<java::util::concurrent::ExecutorService> executor, jint initialSize) { return call_method<"openAsynchronousChannelGroup", jni::ref<java::nio::channels::AsynchronousChannelGroup>>(executor, initialSize); }
	jni::ref<java::nio::channels::AsynchronousServerSocketChannel> openAsynchronousServerSocketChannel(jni::ref<java::nio::channels::AsynchronousChannelGroup> group) { return call_method<"openAsynchronousServerSocketChannel", jni::ref<java::nio::channels::AsynchronousServerSocketChannel>>(group); }
	jni::ref<java::nio::channels::AsynchronousSocketChannel> openAsynchronousSocketChannel(jni::ref<java::nio::channels::AsynchronousChannelGroup> group) { return call_method<"openAsynchronousSocketChannel", jni::ref<java::nio::channels::AsynchronousSocketChannel>>(group); }

protected:

	WindowsAsynchronousChannelProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSCHANNELPROVIDER
