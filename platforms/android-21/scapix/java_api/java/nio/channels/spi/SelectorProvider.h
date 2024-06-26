// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels::spi { class SelectorProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::spi::SelectorProvider>
{
	static constexpr fixed_string class_name = "java/nio/channels/spi/SelectorProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/Channel.h>
#include <scapix/java_api/java/nio/channels/DatagramChannel.h>
#include <scapix/java_api/java/nio/channels/Pipe.h>
#include <scapix/java_api/java/nio/channels/ServerSocketChannel.h>
#include <scapix/java_api/java/nio/channels/SocketChannel.h>
#include <scapix/java_api/java/nio/channels/spi/AbstractSelector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::spi::SelectorProvider : public jni::object_base<"java/nio/channels/spi/SelectorProvider",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::channels::spi::SelectorProvider> provider() { return call_static_method<"provider", jni::ref<java::nio::channels::spi::SelectorProvider>>(); }
	jni::ref<java::nio::channels::DatagramChannel> openDatagramChannel() { return call_method<"openDatagramChannel", jni::ref<java::nio::channels::DatagramChannel>>(); }
	jni::ref<java::nio::channels::Pipe> openPipe() { return call_method<"openPipe", jni::ref<java::nio::channels::Pipe>>(); }
	jni::ref<java::nio::channels::spi::AbstractSelector> openSelector() { return call_method<"openSelector", jni::ref<java::nio::channels::spi::AbstractSelector>>(); }
	jni::ref<java::nio::channels::ServerSocketChannel> openServerSocketChannel() { return call_method<"openServerSocketChannel", jni::ref<java::nio::channels::ServerSocketChannel>>(); }
	jni::ref<java::nio::channels::SocketChannel> openSocketChannel() { return call_method<"openSocketChannel", jni::ref<java::nio::channels::SocketChannel>>(); }
	jni::ref<java::nio::channels::Channel> inheritedChannel() { return call_method<"inheritedChannel", jni::ref<java::nio::channels::Channel>>(); }

protected:

	SelectorProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_SELECTORPROVIDER
