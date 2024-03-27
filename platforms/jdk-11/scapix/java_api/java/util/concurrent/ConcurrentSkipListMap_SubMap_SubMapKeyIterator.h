// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ConcurrentSkipListMap_SubMap_SubMapIter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_SUBMAP_SUBMAPKEYITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_SUBMAP_SUBMAPKEYITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentSkipListMap_SubMap_SubMapKeyIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentSkipListMap_SubMap_SubMapKeyIterator>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapKeyIterator";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ConcurrentSkipListMap_SubMap_SubMapIter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_SUBMAP_SUBMAPKEYITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_SUBMAP_SUBMAPKEYITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_SUBMAP_SUBMAPKEYITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentSkipListMap_SubMap_SubMapKeyIterator : public jni::object_base<"java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapKeyIterator",
	java::util::concurrent::ConcurrentSkipListMap_SubMap_SubMapIter>
{
public:

	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }

protected:

	ConcurrentSkipListMap_SubMap_SubMapKeyIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_SUBMAP_SUBMAPKEYITERATOR
