// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/sun/nio/ch/Iocp_ResultHandler.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_ACCEPTTASK_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_ACCEPTTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WindowsAsynchronousServerSocketChannelImpl_AcceptTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl_AcceptTask>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable, scapix::java_api::sun::nio::ch::Iocp_ResultHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_ACCEPTTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_ACCEPTTASK)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_ACCEPTTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/IOException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl_AcceptTask : public jni::object_base<"sun/nio/ch/WindowsAsynchronousServerSocketChannelImpl$AcceptTask",
	java::lang::Object,
	java::lang::Runnable,
	sun::nio::ch::Iocp_ResultHandler>
{
public:

	void run() { return call_method<"run", void>(); }
	void completed(jint bytesTransferred, jboolean canInvokeDirect) { return call_method<"completed", void>(bytesTransferred, canInvokeDirect); }
	void failed(jint error, jni::ref<java::io::IOException> x) { return call_method<"failed", void>(error, x); }

protected:

	WindowsAsynchronousServerSocketChannelImpl_AcceptTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSERVERSOCKETCHANNELIMPL_ACCEPTTASK
