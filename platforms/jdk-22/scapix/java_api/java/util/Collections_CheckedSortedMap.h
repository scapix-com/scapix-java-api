// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_CheckedMap.h>
#include <scapix/java_api/java/util/SortedMap.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_CheckedSortedMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_CheckedSortedMap>
{
	static constexpr fixed_string class_name = "java/util/Collections$CheckedSortedMap";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_CheckedMap, scapix::java_api::java::util::SortedMap, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_CheckedSortedMap : public jni::object_base<"java/util/Collections$CheckedSortedMap",
	java::util::Collections_CheckedMap,
	java::util::SortedMap,
	java::io::Serializable>
{
public:

	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::lang::Object> firstKey() { return call_method<"firstKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> lastKey() { return call_method<"lastKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::SortedMap> subMap(jni::ref<java::lang::Object> fromKey, jni::ref<java::lang::Object> toKey) { return call_method<"subMap", jni::ref<java::util::SortedMap>>(fromKey, toKey); }
	jni::ref<java::util::SortedMap> headMap(jni::ref<java::lang::Object> toKey) { return call_method<"headMap", jni::ref<java::util::SortedMap>>(toKey); }
	jni::ref<java::util::SortedMap> tailMap(jni::ref<java::lang::Object> fromKey) { return call_method<"tailMap", jni::ref<java::util::SortedMap>>(fromKey); }

protected:

	Collections_CheckedSortedMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDMAP
