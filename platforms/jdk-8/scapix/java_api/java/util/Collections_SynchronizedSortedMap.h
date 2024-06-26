// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_SynchronizedMap.h>
#include <scapix/java_api/java/util/SortedMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSORTEDMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSORTEDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_SynchronizedSortedMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_SynchronizedSortedMap>
{
	static constexpr fixed_string class_name = "java/util/Collections$SynchronizedSortedMap";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_SynchronizedMap, scapix::java_api::java::util::SortedMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSORTEDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSORTEDMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSORTEDMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_SynchronizedSortedMap : public jni::object_base<"java/util/Collections$SynchronizedSortedMap",
	java::util::Collections_SynchronizedMap,
	java::util::SortedMap>
{
public:

	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::SortedMap> subMap(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"subMap", jni::ref<java::util::SortedMap>>(p1, p2); }
	jni::ref<java::util::SortedMap> headMap(jni::ref<java::lang::Object> p1) { return call_method<"headMap", jni::ref<java::util::SortedMap>>(p1); }
	jni::ref<java::util::SortedMap> tailMap(jni::ref<java::lang::Object> p1) { return call_method<"tailMap", jni::ref<java::util::SortedMap>>(p1); }
	jni::ref<java::lang::Object> firstKey() { return call_method<"firstKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> lastKey() { return call_method<"lastKey", jni::ref<java::lang::Object>>(); }

protected:

	Collections_SynchronizedSortedMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSORTEDMAP
