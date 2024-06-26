// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/AsynchronousChannelGroup.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_ASYNCHRONOUSCHANNELGROUPIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_ASYNCHRONOUSCHANNELGROUPIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class AsynchronousChannelGroupImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::AsynchronousChannelGroupImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/AsynchronousChannelGroupImpl";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::AsynchronousChannelGroup, scapix::java_api::java::util::concurrent::Executor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_ASYNCHRONOUSCHANNELGROUPIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_ASYNCHRONOUSCHANNELGROUPIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_ASYNCHRONOUSCHANNELGROUPIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::AsynchronousChannelGroupImpl : public jni::object_base<"sun/nio/ch/AsynchronousChannelGroupImpl",
	java::nio::channels::AsynchronousChannelGroup,
	java::util::concurrent::Executor>
{
public:

	jboolean isShutdown() { return call_method<"isShutdown", jboolean>(); }
	jboolean isTerminated() { return call_method<"isTerminated", jboolean>(); }
	void shutdown() { return call_method<"shutdown", void>(); }
	void shutdownNow() { return call_method<"shutdownNow", void>(); }
	jboolean awaitTermination(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"awaitTermination", jboolean>(timeout, p2); }
	void execute(jni::ref<java::lang::Runnable> task) { return call_method<"execute", void>(task); }

protected:

	AsynchronousChannelGroupImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_ASYNCHRONOUSCHANNELGROUPIMPL
