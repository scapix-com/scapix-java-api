// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/sun/nio/ch/Iocp_ResultHandler.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSOCKETCHANNELIMPL_READTASK_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSOCKETCHANNELIMPL_READTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WindowsAsynchronousSocketChannelImpl_ReadTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WindowsAsynchronousSocketChannelImpl_ReadTask>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WindowsAsynchronousSocketChannelImpl$ReadTask";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable, scapix::java_api::sun::nio::ch::Iocp_ResultHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSOCKETCHANNELIMPL_READTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSOCKETCHANNELIMPL_READTASK)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSOCKETCHANNELIMPL_READTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/IOException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::WindowsAsynchronousSocketChannelImpl_ReadTask : public jni::object_base<"sun/nio/ch/WindowsAsynchronousSocketChannelImpl$ReadTask",
	java::lang::Object,
	java::lang::Runnable,
	sun::nio::ch::Iocp_ResultHandler>
{
public:

	void run() { return call_method<"run", void>(); }
	void completed(jint p1, jboolean p2) { return call_method<"completed", void>(p1, p2); }
	void failed(jint p1, jni::ref<java::io::IOException> p2) { return call_method<"failed", void>(p1, p2); }

protected:

	WindowsAsynchronousSocketChannelImpl_ReadTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSASYNCHRONOUSSOCKETCHANNELIMPL_READTASK
