// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_PROVIDERHOLDER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_PROVIDERHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels::spi { class AsynchronousChannelProvider_ProviderHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::spi::AsynchronousChannelProvider_ProviderHolder>
{
	static constexpr fixed_string class_name = "java/nio/channels/spi/AsynchronousChannelProvider$ProviderHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_PROVIDERHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_PROVIDERHOLDER)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_PROVIDERHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::channels::spi::AsynchronousChannelProvider_ProviderHolder : public jni::object_base<"java/nio/channels/spi/AsynchronousChannelProvider$ProviderHolder",
	java::lang::Object>
{
public:


protected:

	AsynchronousChannelProvider_ProviderHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_PROVIDERHOLDER
