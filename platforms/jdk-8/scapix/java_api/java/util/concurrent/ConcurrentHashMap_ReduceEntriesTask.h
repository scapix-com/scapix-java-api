// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ConcurrentHashMap_BulkTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_REDUCEENTRIESTASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_REDUCEENTRIESTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentHashMap_ReduceEntriesTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentHashMap_ReduceEntriesTask>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentHashMap$ReduceEntriesTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ConcurrentHashMap_BulkTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_REDUCEENTRIESTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_REDUCEENTRIESTASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_REDUCEENTRIESTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentHashMap_ReduceEntriesTask : public jni::object_base<"java/util/concurrent/ConcurrentHashMap$ReduceEntriesTask",
	java::util::concurrent::ConcurrentHashMap_BulkTask>
{
public:

	jni::ref<java::util::Map_Entry> getRawResult() { return call_method<"getRawResult", jni::ref<java::util::Map_Entry>>(); }
	void compute() { return call_method<"compute", void>(); }

protected:

	ConcurrentHashMap_ReduceEntriesTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_REDUCEENTRIESTASK
