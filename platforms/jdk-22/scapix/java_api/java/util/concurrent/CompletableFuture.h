// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/Future.h>
#include <scapix/java_api/java/util/concurrent/CompletionStage.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletableFuture; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletableFuture>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletableFuture";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::Future, scapix::java_api::java::util::concurrent::CompletionStage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/concurrent/Future_State.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/concurrent/CompletableFuture_AsynchronousCompletionTask.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::CompletableFuture : public jni::object_base<"java/util/concurrent/CompletableFuture",
	java::lang::Object,
	java::util::concurrent::Future,
	java::util::concurrent::CompletionStage>
{
public:

	using AsynchronousCompletionTask = CompletableFuture_AsynchronousCompletionTask;

	static jni::ref<java::util::concurrent::CompletableFuture> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::CompletableFuture> supplyAsync(jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"supplyAsync", jni::ref<java::util::concurrent::CompletableFuture>>(supplier); }
	static jni::ref<java::util::concurrent::CompletableFuture> supplyAsync(jni::ref<java::util::function::Supplier> supplier, jni::ref<java::util::concurrent::Executor> executor) { return call_static_method<"supplyAsync", jni::ref<java::util::concurrent::CompletableFuture>>(supplier, executor); }
	static jni::ref<java::util::concurrent::CompletableFuture> runAsync(jni::ref<java::lang::Runnable> runnable) { return call_static_method<"runAsync", jni::ref<java::util::concurrent::CompletableFuture>>(runnable); }
	static jni::ref<java::util::concurrent::CompletableFuture> runAsync(jni::ref<java::lang::Runnable> runnable, jni::ref<java::util::concurrent::Executor> executor) { return call_static_method<"runAsync", jni::ref<java::util::concurrent::CompletableFuture>>(runnable, executor); }
	static jni::ref<java::util::concurrent::CompletableFuture> completedFuture(jni::ref<java::lang::Object> value) { return call_static_method<"completedFuture", jni::ref<java::util::concurrent::CompletableFuture>>(value); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> get(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"get", jni::ref<java::lang::Object>>(timeout, p2); }
	jni::ref<java::lang::Object> join() { return call_method<"join", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getNow(jni::ref<java::lang::Object> valueIfAbsent) { return call_method<"getNow", jni::ref<java::lang::Object>>(valueIfAbsent); }
	jni::ref<java::lang::Object> resultNow() { return call_method<"resultNow", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Throwable> exceptionNow() { return call_method<"exceptionNow", jni::ref<java::lang::Throwable>>(); }
	jboolean complete(jni::ref<java::lang::Object> value) { return call_method<"complete", jboolean>(value); }
	jboolean completeExceptionally(jni::ref<java::lang::Throwable> ex) { return call_method<"completeExceptionally", jboolean>(ex); }
	jni::ref<java::util::concurrent::CompletableFuture> thenApply(jni::ref<java::util::function::Function> fn) { return call_method<"thenApply", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> thenApplyAsync(jni::ref<java::util::function::Function> fn) { return call_method<"thenApplyAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> thenApplyAsync(jni::ref<java::util::function::Function> fn, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"thenApplyAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> thenAccept(jni::ref<java::util::function::Consumer> action) { return call_method<"thenAccept", jni::ref<java::util::concurrent::CompletableFuture>>(action); }
	jni::ref<java::util::concurrent::CompletableFuture> thenAcceptAsync(jni::ref<java::util::function::Consumer> action) { return call_method<"thenAcceptAsync", jni::ref<java::util::concurrent::CompletableFuture>>(action); }
	jni::ref<java::util::concurrent::CompletableFuture> thenAcceptAsync(jni::ref<java::util::function::Consumer> action, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"thenAcceptAsync", jni::ref<java::util::concurrent::CompletableFuture>>(action, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> thenRun(jni::ref<java::lang::Runnable> action) { return call_method<"thenRun", jni::ref<java::util::concurrent::CompletableFuture>>(action); }
	jni::ref<java::util::concurrent::CompletableFuture> thenRunAsync(jni::ref<java::lang::Runnable> action) { return call_method<"thenRunAsync", jni::ref<java::util::concurrent::CompletableFuture>>(action); }
	jni::ref<java::util::concurrent::CompletableFuture> thenRunAsync(jni::ref<java::lang::Runnable> action, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"thenRunAsync", jni::ref<java::util::concurrent::CompletableFuture>>(action, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> thenCombine(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::BiFunction> fn) { return call_method<"thenCombine", jni::ref<java::util::concurrent::CompletableFuture>>(other, fn); }
	jni::ref<java::util::concurrent::CompletableFuture> thenCombineAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::BiFunction> fn) { return call_method<"thenCombineAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, fn); }
	jni::ref<java::util::concurrent::CompletableFuture> thenCombineAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::BiFunction> fn, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"thenCombineAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, fn, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> thenAcceptBoth(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::BiConsumer> action) { return call_method<"thenAcceptBoth", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> thenAcceptBothAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::BiConsumer> action) { return call_method<"thenAcceptBothAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> thenAcceptBothAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::BiConsumer> action, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"thenAcceptBothAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> runAfterBoth(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::lang::Runnable> action) { return call_method<"runAfterBoth", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> runAfterBothAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::lang::Runnable> action) { return call_method<"runAfterBothAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> runAfterBothAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::lang::Runnable> action, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"runAfterBothAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> applyToEither(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::Function> fn) { return call_method<"applyToEither", jni::ref<java::util::concurrent::CompletableFuture>>(other, fn); }
	jni::ref<java::util::concurrent::CompletableFuture> applyToEitherAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::Function> fn) { return call_method<"applyToEitherAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, fn); }
	jni::ref<java::util::concurrent::CompletableFuture> applyToEitherAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::Function> fn, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"applyToEitherAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, fn, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> acceptEither(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::Consumer> action) { return call_method<"acceptEither", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> acceptEitherAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::Consumer> action) { return call_method<"acceptEitherAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> acceptEitherAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::util::function::Consumer> action, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"acceptEitherAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> runAfterEither(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::lang::Runnable> action) { return call_method<"runAfterEither", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> runAfterEitherAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::lang::Runnable> action) { return call_method<"runAfterEitherAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action); }
	jni::ref<java::util::concurrent::CompletableFuture> runAfterEitherAsync(jni::ref<java::util::concurrent::CompletionStage> other, jni::ref<java::lang::Runnable> action, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"runAfterEitherAsync", jni::ref<java::util::concurrent::CompletableFuture>>(other, action, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> thenCompose(jni::ref<java::util::function::Function> fn) { return call_method<"thenCompose", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> thenComposeAsync(jni::ref<java::util::function::Function> fn) { return call_method<"thenComposeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> thenComposeAsync(jni::ref<java::util::function::Function> fn, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"thenComposeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> whenComplete(jni::ref<java::util::function::BiConsumer> action) { return call_method<"whenComplete", jni::ref<java::util::concurrent::CompletableFuture>>(action); }
	jni::ref<java::util::concurrent::CompletableFuture> whenCompleteAsync(jni::ref<java::util::function::BiConsumer> action) { return call_method<"whenCompleteAsync", jni::ref<java::util::concurrent::CompletableFuture>>(action); }
	jni::ref<java::util::concurrent::CompletableFuture> whenCompleteAsync(jni::ref<java::util::function::BiConsumer> action, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"whenCompleteAsync", jni::ref<java::util::concurrent::CompletableFuture>>(action, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> handle(jni::ref<java::util::function::BiFunction> fn) { return call_method<"handle", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> handleAsync(jni::ref<java::util::function::BiFunction> fn) { return call_method<"handleAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> handleAsync(jni::ref<java::util::function::BiFunction> fn, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"handleAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> toCompletableFuture() { return call_method<"toCompletableFuture", jni::ref<java::util::concurrent::CompletableFuture>>(); }
	jni::ref<java::util::concurrent::CompletableFuture> exceptionally(jni::ref<java::util::function::Function> fn) { return call_method<"exceptionally", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> exceptionallyAsync(jni::ref<java::util::function::Function> fn) { return call_method<"exceptionallyAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> exceptionallyAsync(jni::ref<java::util::function::Function> fn, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"exceptionallyAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> exceptionallyCompose(jni::ref<java::util::function::Function> fn) { return call_method<"exceptionallyCompose", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> exceptionallyComposeAsync(jni::ref<java::util::function::Function> fn) { return call_method<"exceptionallyComposeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn); }
	jni::ref<java::util::concurrent::CompletableFuture> exceptionallyComposeAsync(jni::ref<java::util::function::Function> fn, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"exceptionallyComposeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(fn, executor); }
	static jni::ref<java::util::concurrent::CompletableFuture> allOf(jni::ref<jni::array<java::util::concurrent::CompletableFuture>> cfs) { return call_static_method<"allOf", jni::ref<java::util::concurrent::CompletableFuture>>(cfs); }
	static jni::ref<java::util::concurrent::CompletableFuture> anyOf(jni::ref<jni::array<java::util::concurrent::CompletableFuture>> cfs) { return call_static_method<"anyOf", jni::ref<java::util::concurrent::CompletableFuture>>(cfs); }
	jboolean cancel(jboolean mayInterruptIfRunning) { return call_method<"cancel", jboolean>(mayInterruptIfRunning); }
	jboolean isCancelled() { return call_method<"isCancelled", jboolean>(); }
	jboolean isCompletedExceptionally() { return call_method<"isCompletedExceptionally", jboolean>(); }
	jni::ref<java::util::concurrent::Future_State> state() { return call_method<"state", jni::ref<java::util::concurrent::Future_State>>(); }
	void obtrudeValue(jni::ref<java::lang::Object> value) { return call_method<"obtrudeValue", void>(value); }
	void obtrudeException(jni::ref<java::lang::Throwable> ex) { return call_method<"obtrudeException", void>(ex); }
	jint getNumberOfDependents() { return call_method<"getNumberOfDependents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::concurrent::CompletableFuture> newIncompleteFuture() { return call_method<"newIncompleteFuture", jni::ref<java::util::concurrent::CompletableFuture>>(); }
	jni::ref<java::util::concurrent::Executor> defaultExecutor() { return call_method<"defaultExecutor", jni::ref<java::util::concurrent::Executor>>(); }
	jni::ref<java::util::concurrent::CompletableFuture> copy() { return call_method<"copy", jni::ref<java::util::concurrent::CompletableFuture>>(); }
	jni::ref<java::util::concurrent::CompletionStage> minimalCompletionStage() { return call_method<"minimalCompletionStage", jni::ref<java::util::concurrent::CompletionStage>>(); }
	jni::ref<java::util::concurrent::CompletableFuture> completeAsync(jni::ref<java::util::function::Supplier> supplier, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"completeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(supplier, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> completeAsync(jni::ref<java::util::function::Supplier> supplier) { return call_method<"completeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(supplier); }
	jni::ref<java::util::concurrent::CompletableFuture> orTimeout(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"orTimeout", jni::ref<java::util::concurrent::CompletableFuture>>(timeout, p2); }
	jni::ref<java::util::concurrent::CompletableFuture> completeOnTimeout(jni::ref<java::lang::Object> value, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"completeOnTimeout", jni::ref<java::util::concurrent::CompletableFuture>>(value, timeout, p3); }
	static jni::ref<java::util::concurrent::Executor> delayedExecutor(jlong delay, jni::ref<java::util::concurrent::TimeUnit> p2, jni::ref<java::util::concurrent::Executor> unit) { return call_static_method<"delayedExecutor", jni::ref<java::util::concurrent::Executor>>(delay, p2, unit); }
	static jni::ref<java::util::concurrent::Executor> delayedExecutor(jlong delay, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_static_method<"delayedExecutor", jni::ref<java::util::concurrent::Executor>>(delay, p2); }
	static jni::ref<java::util::concurrent::CompletionStage> completedStage(jni::ref<java::lang::Object> value) { return call_static_method<"completedStage", jni::ref<java::util::concurrent::CompletionStage>>(value); }
	static jni::ref<java::util::concurrent::CompletableFuture> failedFuture(jni::ref<java::lang::Throwable> ex) { return call_static_method<"failedFuture", jni::ref<java::util::concurrent::CompletableFuture>>(ex); }
	static jni::ref<java::util::concurrent::CompletionStage> failedStage(jni::ref<java::lang::Throwable> ex) { return call_static_method<"failedStage", jni::ref<java::util::concurrent::CompletionStage>>(ex); }

protected:

	CompletableFuture(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE
