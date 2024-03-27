// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CompletableFuture_Completion.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinPool_ManagedBlocker.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_SIGNALLER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_SIGNALLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletableFuture_Signaller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletableFuture_Signaller>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletableFuture$Signaller";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CompletableFuture_Completion, scapix::java_api::java::util::concurrent::ForkJoinPool_ManagedBlocker>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_SIGNALLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_SIGNALLER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_SIGNALLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CompletableFuture_Signaller : public jni::object_base<"java/util/concurrent/CompletableFuture$Signaller",
	java::util::concurrent::CompletableFuture_Completion,
	java::util::concurrent::ForkJoinPool_ManagedBlocker>
{
public:

	jboolean isReleasable() { return call_method<"isReleasable", jboolean>(); }
	jboolean block() { return call_method<"block", jboolean>(); }

protected:

	CompletableFuture_Signaller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_SIGNALLER
