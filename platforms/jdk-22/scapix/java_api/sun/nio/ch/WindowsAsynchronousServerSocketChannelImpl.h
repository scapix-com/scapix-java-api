// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/ch/AsynchronousServerSocketChannelImpl.h>
#include <scapix/java_api/sun/nio/ch/Iocp_OverlappedChannel.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WindowsAsynchronousServerSocketChannelImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WindowsAsynchronousServerSocketChannelImpl";
	using base_classes = std::tuple<scapix::java_api::sun::nio::ch::AsynchronousServerSocketChannelImpl, scapix::java_api::sun::nio::ch::Iocp_OverlappedChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <scapix/java_api/sun/nio/ch/PendingFuture.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl : public jni::object_base<"sun/nio/ch/WindowsAsynchronousServerSocketChannelImpl",
	sun::nio::ch::AsynchronousServerSocketChannelImpl,
	sun::nio::ch::Iocp_OverlappedChannel>
{
public:

	jni::ref<sun::nio::ch::PendingFuture> getByOverlapped(jlong overlapped) { return call_method<"getByOverlapped", jni::ref<sun::nio::ch::PendingFuture>>(overlapped); }
	jni::ref<sun::nio::ch::AsynchronousChannelGroupImpl> group() { return call_method<"group", jni::ref<sun::nio::ch::AsynchronousChannelGroupImpl>>(); }

protected:

	WindowsAsynchronousServerSocketChannelImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL
