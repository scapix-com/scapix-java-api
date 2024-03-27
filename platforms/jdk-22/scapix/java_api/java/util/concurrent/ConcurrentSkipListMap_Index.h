// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_INDEX_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_INDEX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentSkipListMap_Index; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentSkipListMap_Index>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentSkipListMap$Index";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_INDEX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_INDEX)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_INDEX

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentSkipListMap_Index : public jni::object_base<"java/util/concurrent/ConcurrentSkipListMap$Index",
	java::lang::Object>
{
public:


protected:

	ConcurrentSkipListMap_Index(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_INDEX