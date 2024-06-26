// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/SelectionKey.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels::spi { class AbstractSelectionKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::spi::AbstractSelectionKey>
{
	static constexpr fixed_string class_name = "java/nio/channels/spi/AbstractSelectionKey";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::SelectionKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::spi::AbstractSelectionKey : public jni::object_base<"java/nio/channels/spi/AbstractSelectionKey",
	java::nio::channels::SelectionKey>
{
public:

	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	void cancel() { return call_method<"cancel", void>(); }

protected:

	AbstractSelectionKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY
