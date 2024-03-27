// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_COUNTERCELL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_COUNTERCELL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentHashMap_CounterCell; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentHashMap_CounterCell>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentHashMap$CounterCell";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_COUNTERCELL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_COUNTERCELL)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_COUNTERCELL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentHashMap_CounterCell : public jni::object_base<"java/util/concurrent/ConcurrentHashMap$CounterCell",
	java::lang::Object>
{
public:


protected:

	ConcurrentHashMap_CounterCell(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_COUNTERCELL