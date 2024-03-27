// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class LockSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::LockSupport>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/LockSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::locks::LockSupport : public jni::object_base<"java/util/concurrent/locks/LockSupport",
	java::lang::Object>
{
public:

	static void unpark(jni::ref<java::lang::Thread> p1) { return call_static_method<"unpark", void>(p1); }
	static void park(jni::ref<java::lang::Object> p1) { return call_static_method<"park", void>(p1); }
	static void parkNanos(jni::ref<java::lang::Object> p1, jlong p2) { return call_static_method<"parkNanos", void>(p1, p2); }
	static void parkUntil(jni::ref<java::lang::Object> p1, jlong p2) { return call_static_method<"parkUntil", void>(p1, p2); }
	static jni::ref<java::lang::Object> getBlocker(jni::ref<java::lang::Thread> p1) { return call_static_method<"getBlocker", jni::ref<java::lang::Object>>(p1); }
	static void park() { return call_static_method<"park", void>(); }
	static void parkNanos(jlong p1) { return call_static_method<"parkNanos", void>(p1); }
	static void parkUntil(jlong p1) { return call_static_method<"parkUntil", void>(p1); }

protected:

	LockSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_LOCKSUPPORT
