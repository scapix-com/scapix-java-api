// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <scapix/java_api/java/nio/channels/Channel.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class SelectableChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::SelectableChannel>
{
	static constexpr fixed_string class_name = "java/nio/channels/SelectableChannel";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::spi::AbstractInterruptibleChannel, scapix::java_api::java::nio::channels::Channel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTABLECHANNEL)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTABLECHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/channels/SelectionKey.h>
#include <scapix/java_api/java/nio/channels/Selector.h>
#include <scapix/java_api/java/nio/channels/spi/SelectorProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::SelectableChannel : public jni::object_base<"java/nio/channels/SelectableChannel",
	java::nio::channels::spi::AbstractInterruptibleChannel,
	java::nio::channels::Channel>
{
public:

	jni::ref<java::lang::Object> blockingLock() { return call_method<"blockingLock", jni::ref<java::lang::Object>>(); }
	jni::ref<java::nio::channels::SelectableChannel> configureBlocking(jboolean p1) { return call_method<"configureBlocking", jni::ref<java::nio::channels::SelectableChannel>>(p1); }
	jboolean isBlocking() { return call_method<"isBlocking", jboolean>(); }
	jboolean isRegistered() { return call_method<"isRegistered", jboolean>(); }
	jni::ref<java::nio::channels::SelectionKey> keyFor(jni::ref<java::nio::channels::Selector> p1) { return call_method<"keyFor", jni::ref<java::nio::channels::SelectionKey>>(p1); }
	jni::ref<java::nio::channels::spi::SelectorProvider> provider() { return call_method<"provider", jni::ref<java::nio::channels::spi::SelectorProvider>>(); }
	jni::ref<java::nio::channels::SelectionKey> register_(jni::ref<java::nio::channels::Selector> selector, jint operations) { return call_method<"register", jni::ref<java::nio::channels::SelectionKey>>(selector, operations); }
	jni::ref<java::nio::channels::SelectionKey> register_(jni::ref<java::nio::channels::Selector> p1, jint p2, jni::ref<java::lang::Object> p3) { return call_method<"register", jni::ref<java::nio::channels::SelectionKey>>(p1, p2, p3); }
	jint validOps() { return call_method<"validOps", jint>(); }

protected:

	SelectableChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTABLECHANNEL
