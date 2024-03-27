// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONSTAGE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONSTAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletionStage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletionStage>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletionStage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONSTAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONSTAGE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONSTAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/concurrent/CompletableFuture.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::CompletionStage : public jni::object_base<"java/util/concurrent/CompletionStage",
	java::lang::Object>
{
public:

	jni::ref<java::util::concurrent::CompletionStage> thenApply(jni::ref<java::util::function::Function> p1) { return call_method<"thenApply", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenApplyAsync(jni::ref<java::util::function::Function> p1) { return call_method<"thenApplyAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenApplyAsync(jni::ref<java::util::function::Function> p1, jni::ref<java::util::concurrent::Executor> p2) { return call_method<"thenApplyAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> thenAccept(jni::ref<java::util::function::Consumer> p1) { return call_method<"thenAccept", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenAcceptAsync(jni::ref<java::util::function::Consumer> p1) { return call_method<"thenAcceptAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenAcceptAsync(jni::ref<java::util::function::Consumer> p1, jni::ref<java::util::concurrent::Executor> p2) { return call_method<"thenAcceptAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> thenRun(jni::ref<java::lang::Runnable> p1) { return call_method<"thenRun", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenRunAsync(jni::ref<java::lang::Runnable> p1) { return call_method<"thenRunAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenRunAsync(jni::ref<java::lang::Runnable> p1, jni::ref<java::util::concurrent::Executor> p2) { return call_method<"thenRunAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> thenCombine(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"thenCombine", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> thenCombineAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"thenCombineAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> thenCombineAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::BiFunction> p2, jni::ref<java::util::concurrent::Executor> p3) { return call_method<"thenCombineAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2, p3); }
	jni::ref<java::util::concurrent::CompletionStage> thenAcceptBoth(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::BiConsumer> p2) { return call_method<"thenAcceptBoth", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> thenAcceptBothAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::BiConsumer> p2) { return call_method<"thenAcceptBothAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> thenAcceptBothAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::BiConsumer> p2, jni::ref<java::util::concurrent::Executor> p3) { return call_method<"thenAcceptBothAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2, p3); }
	jni::ref<java::util::concurrent::CompletionStage> runAfterBoth(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::lang::Runnable> p2) { return call_method<"runAfterBoth", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> runAfterBothAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::lang::Runnable> p2) { return call_method<"runAfterBothAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> runAfterBothAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::lang::Runnable> p2, jni::ref<java::util::concurrent::Executor> p3) { return call_method<"runAfterBothAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2, p3); }
	jni::ref<java::util::concurrent::CompletionStage> applyToEither(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::Function> p2) { return call_method<"applyToEither", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> applyToEitherAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::Function> p2) { return call_method<"applyToEitherAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> applyToEitherAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::concurrent::Executor> p3) { return call_method<"applyToEitherAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2, p3); }
	jni::ref<java::util::concurrent::CompletionStage> acceptEither(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"acceptEither", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> acceptEitherAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"acceptEitherAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> acceptEitherAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::util::function::Consumer> p2, jni::ref<java::util::concurrent::Executor> p3) { return call_method<"acceptEitherAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2, p3); }
	jni::ref<java::util::concurrent::CompletionStage> runAfterEither(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::lang::Runnable> p2) { return call_method<"runAfterEither", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> runAfterEitherAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::lang::Runnable> p2) { return call_method<"runAfterEitherAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> runAfterEitherAsync(jni::ref<java::util::concurrent::CompletionStage> p1, jni::ref<java::lang::Runnable> p2, jni::ref<java::util::concurrent::Executor> p3) { return call_method<"runAfterEitherAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2, p3); }
	jni::ref<java::util::concurrent::CompletionStage> thenCompose(jni::ref<java::util::function::Function> p1) { return call_method<"thenCompose", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenComposeAsync(jni::ref<java::util::function::Function> p1) { return call_method<"thenComposeAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> thenComposeAsync(jni::ref<java::util::function::Function> p1, jni::ref<java::util::concurrent::Executor> p2) { return call_method<"thenComposeAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> handle(jni::ref<java::util::function::BiFunction> p1) { return call_method<"handle", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> handleAsync(jni::ref<java::util::function::BiFunction> p1) { return call_method<"handleAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> handleAsync(jni::ref<java::util::function::BiFunction> p1, jni::ref<java::util::concurrent::Executor> p2) { return call_method<"handleAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> whenComplete(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"whenComplete", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> whenCompleteAsync(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"whenCompleteAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletionStage> whenCompleteAsync(jni::ref<java::util::function::BiConsumer> p1, jni::ref<java::util::concurrent::Executor> p2) { return call_method<"whenCompleteAsync", jni::ref<java::util::concurrent::CompletionStage>>(p1, p2); }
	jni::ref<java::util::concurrent::CompletionStage> exceptionally(jni::ref<java::util::function::Function> p1) { return call_method<"exceptionally", jni::ref<java::util::concurrent::CompletionStage>>(p1); }
	jni::ref<java::util::concurrent::CompletableFuture> toCompletableFuture() { return call_method<"toCompletableFuture", jni::ref<java::util::concurrent::CompletableFuture>>(); }

protected:

	CompletionStage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONSTAGE