// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADFLOCK_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADFLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class ThreadFlock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::ThreadFlock>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/ThreadFlock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADFLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADFLOCK)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADFLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::misc::ThreadFlock : public jni::object_base<"jdk/internal/misc/ThreadFlock",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jni::ref<jdk::internal::misc::ThreadFlock> open(jni::ref<java::lang::String> name) { return call_static_method<"open", jni::ref<jdk::internal::misc::ThreadFlock>>(name); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Thread> owner() { return call_method<"owner", jni::ref<java::lang::Thread>>(); }
	jni::ref<java::lang::Thread> start(jni::ref<java::lang::Thread> thread) { return call_method<"start", jni::ref<java::lang::Thread>>(thread); }
	void shutdown() { return call_method<"shutdown", void>(); }
	jboolean awaitAll() { return call_method<"awaitAll", jboolean>(); }
	jboolean awaitAll(jni::ref<java::time::Duration> timeout) { return call_method<"awaitAll", jboolean>(timeout); }
	void wakeup() { return call_method<"wakeup", void>(); }
	void close() { return call_method<"close", void>(); }
	jboolean isShutdown() { return call_method<"isShutdown", jboolean>(); }
	jboolean isClosed() { return call_method<"isClosed", jboolean>(); }
	jni::ref<java::util::stream::Stream> threads() { return call_method<"threads", jni::ref<java::util::stream::Stream>>(); }
	jboolean containsThread(jni::ref<java::lang::Thread> thread) { return call_method<"containsThread", jboolean>(thread); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ThreadFlock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADFLOCK