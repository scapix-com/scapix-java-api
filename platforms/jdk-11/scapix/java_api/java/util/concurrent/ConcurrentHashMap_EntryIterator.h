// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ConcurrentHashMap_BaseIterator.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_ENTRYITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_ENTRYITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentHashMap_EntryIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentHashMap_EntryIterator>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentHashMap$EntryIterator";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ConcurrentHashMap_BaseIterator, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_ENTRYITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_ENTRYITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_ENTRYITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentHashMap_EntryIterator : public jni::object_base<"java/util/concurrent/ConcurrentHashMap$EntryIterator",
	java::util::concurrent::ConcurrentHashMap_BaseIterator,
	java::util::Iterator>
{
public:

	jni::ref<java::util::Map_Entry> next() { return call_method<"next", jni::ref<java::util::Map_Entry>>(); }

protected:

	ConcurrentHashMap_EntryIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_ENTRYITERATOR
