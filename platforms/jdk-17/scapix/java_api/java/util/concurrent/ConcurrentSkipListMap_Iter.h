// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_ITER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_ITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentSkipListMap_Iter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentSkipListMap_Iter>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentSkipListMap$Iter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_ITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_ITER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_ITER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentSkipListMap_Iter : public jni::object_base<"java/util/concurrent/ConcurrentSkipListMap$Iter",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	ConcurrentSkipListMap_Iter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_ITER
