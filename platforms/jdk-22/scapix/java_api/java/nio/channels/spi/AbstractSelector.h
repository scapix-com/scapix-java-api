// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/Selector.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels::spi { class AbstractSelector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::spi::AbstractSelector>
{
	static constexpr fixed_string class_name = "java/nio/channels/spi/AbstractSelector";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::Selector>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/spi/SelectorProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::spi::AbstractSelector : public jni::object_base<"java/nio/channels/spi/AbstractSelector",
	java::nio::channels::Selector>
{
public:

	void close() { return call_method<"close", void>(); }
	jboolean isOpen() { return call_method<"isOpen", jboolean>(); }
	jni::ref<java::nio::channels::spi::SelectorProvider> provider() { return call_method<"provider", jni::ref<java::nio::channels::spi::SelectorProvider>>(); }

protected:

	AbstractSelector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR
