// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CompletableFuture.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_MINIMALSTAGE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_MINIMALSTAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletableFuture_MinimalStage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletableFuture_MinimalStage>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletableFuture$MinimalStage";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CompletableFuture>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_MINIMALSTAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_MINIMALSTAGE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_MINIMALSTAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/concurrent/Future_State.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CompletableFuture_MinimalStage : public jni::object_base<"java/util/concurrent/CompletableFuture$MinimalStage",
	java::util::concurrent::CompletableFuture>
{
public:

	jni::ref<java::util::concurrent::CompletableFuture> newIncompleteFuture() { return call_method<"newIncompleteFuture", jni::ref<java::util::concurrent::CompletableFuture>>(); }
	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> get(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"get", jni::ref<java::lang::Object>>(timeout, p2); }
	jni::ref<java::lang::Object> getNow(jni::ref<java::lang::Object> valueIfAbsent) { return call_method<"getNow", jni::ref<java::lang::Object>>(valueIfAbsent); }
	jni::ref<java::lang::Object> join() { return call_method<"join", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> resultNow() { return call_method<"resultNow", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Throwable> exceptionNow() { return call_method<"exceptionNow", jni::ref<java::lang::Throwable>>(); }
	jboolean complete(jni::ref<java::lang::Object> value) { return call_method<"complete", jboolean>(value); }
	jboolean completeExceptionally(jni::ref<java::lang::Throwable> ex) { return call_method<"completeExceptionally", jboolean>(ex); }
	jboolean cancel(jboolean mayInterruptIfRunning) { return call_method<"cancel", jboolean>(mayInterruptIfRunning); }
	void obtrudeValue(jni::ref<java::lang::Object> value) { return call_method<"obtrudeValue", void>(value); }
	void obtrudeException(jni::ref<java::lang::Throwable> ex) { return call_method<"obtrudeException", void>(ex); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	jboolean isCancelled() { return call_method<"isCancelled", jboolean>(); }
	jboolean isCompletedExceptionally() { return call_method<"isCompletedExceptionally", jboolean>(); }
	jni::ref<java::util::concurrent::Future_State> state() { return call_method<"state", jni::ref<java::util::concurrent::Future_State>>(); }
	jint getNumberOfDependents() { return call_method<"getNumberOfDependents", jint>(); }
	jni::ref<java::util::concurrent::CompletableFuture> completeAsync(jni::ref<java::util::function::Supplier> supplier, jni::ref<java::util::concurrent::Executor> executor) { return call_method<"completeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(supplier, executor); }
	jni::ref<java::util::concurrent::CompletableFuture> completeAsync(jni::ref<java::util::function::Supplier> supplier) { return call_method<"completeAsync", jni::ref<java::util::concurrent::CompletableFuture>>(supplier); }
	jni::ref<java::util::concurrent::CompletableFuture> orTimeout(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"orTimeout", jni::ref<java::util::concurrent::CompletableFuture>>(timeout, p2); }
	jni::ref<java::util::concurrent::CompletableFuture> completeOnTimeout(jni::ref<java::lang::Object> value, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"completeOnTimeout", jni::ref<java::util::concurrent::CompletableFuture>>(value, timeout, p3); }
	jni::ref<java::util::concurrent::CompletableFuture> toCompletableFuture() { return call_method<"toCompletableFuture", jni::ref<java::util::concurrent::CompletableFuture>>(); }

protected:

	CompletableFuture_MinimalStage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_MINIMALSTAGE