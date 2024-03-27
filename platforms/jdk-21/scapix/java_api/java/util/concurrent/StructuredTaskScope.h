// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class StructuredTaskScope; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::StructuredTaskScope>
{
	static constexpr fixed_string class_name = "java/util/concurrent/StructuredTaskScope";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/concurrent/StructuredTaskScope_Subtask.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>
#include <scapix/java_api/java/util/concurrent/StructuredTaskScope_ShutdownOnFailure.h>
#include <scapix/java_api/java/util/concurrent/StructuredTaskScope_ShutdownOnSuccess.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::StructuredTaskScope : public jni::object_base<"java/util/concurrent/StructuredTaskScope",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using Subtask = StructuredTaskScope_Subtask;
	using ShutdownOnFailure = StructuredTaskScope_ShutdownOnFailure;
	using ShutdownOnSuccess = StructuredTaskScope_ShutdownOnSuccess;

	static jni::ref<java::util::concurrent::StructuredTaskScope> new_object(jni::ref<java::lang::String> name, jni::ref<java::util::concurrent::ThreadFactory> factory) { return base_::new_object(name, factory); }
	static jni::ref<java::util::concurrent::StructuredTaskScope> new_object() { return base_::new_object(); }
	jni::ref<java::util::concurrent::StructuredTaskScope_Subtask> fork(jni::ref<java::util::concurrent::Callable> task) { return call_method<"fork", jni::ref<java::util::concurrent::StructuredTaskScope_Subtask>>(task); }
	jni::ref<java::util::concurrent::StructuredTaskScope> join() { return call_method<"join", jni::ref<java::util::concurrent::StructuredTaskScope>>(); }
	jni::ref<java::util::concurrent::StructuredTaskScope> joinUntil(jni::ref<java::time::Instant> deadline) { return call_method<"joinUntil", jni::ref<java::util::concurrent::StructuredTaskScope>>(deadline); }
	void shutdown() { return call_method<"shutdown", void>(); }
	jboolean isShutdown() { return call_method<"isShutdown", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	StructuredTaskScope(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE
