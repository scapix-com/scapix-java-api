// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ConcurrentHashMap_BulkTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_MAPREDUCEENTRIESTOINTTASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_MAPREDUCEENTRIESTOINTTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentHashMap_MapReduceEntriesToIntTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentHashMap_MapReduceEntriesToIntTask>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ConcurrentHashMap_BulkTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_MAPREDUCEENTRIESTOINTTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_MAPREDUCEENTRIESTOINTTASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_MAPREDUCEENTRIESTOINTTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentHashMap_MapReduceEntriesToIntTask : public jni::object_base<"java/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask",
	java::util::concurrent::ConcurrentHashMap_BulkTask>
{
public:

	jni::ref<java::lang::Integer> getRawResult() { return call_method<"getRawResult", jni::ref<java::lang::Integer>>(); }
	void compute() { return call_method<"compute", void>(); }

protected:

	ConcurrentHashMap_MapReduceEntriesToIntTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_MAPREDUCEENTRIESTOINTTASK
