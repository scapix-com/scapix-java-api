// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections>
{
	static constexpr fixed_string class_name = "java/util/Collections";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Deque.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/NavigableMap.h>
#include <scapix/java_api/java/util/NavigableSet.h>
#include <scapix/java_api/java/util/Queue.h>
#include <scapix/java_api/java/util/Random.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/SortedMap.h>
#include <scapix/java_api/java/util/SortedSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Collections : public jni::object_base<"java/util/Collections",
	java::lang::Object>
{
public:

	static jni::ref<java::util::Set> EMPTY_SET() { return get_static_field<"EMPTY_SET", jni::ref<java::util::Set>>(); }
	static jni::ref<java::util::List> EMPTY_LIST() { return get_static_field<"EMPTY_LIST", jni::ref<java::util::List>>(); }
	static jni::ref<java::util::Map> EMPTY_MAP() { return get_static_field<"EMPTY_MAP", jni::ref<java::util::Map>>(); }

	static void sort(jni::ref<java::util::List> p1) { return call_static_method<"sort", void>(p1); }
	static void sort(jni::ref<java::util::List> p1, jni::ref<java::util::Comparator> p2) { return call_static_method<"sort", void>(p1, p2); }
	static jint binarySearch(jni::ref<java::util::List> p1, jni::ref<java::lang::Object> p2) { return call_static_method<"binarySearch", jint>(p1, p2); }
	static jint binarySearch(jni::ref<java::util::List> p1, jni::ref<java::lang::Object> p2, jni::ref<java::util::Comparator> p3) { return call_static_method<"binarySearch", jint>(p1, p2, p3); }
	static void reverse(jni::ref<java::util::List> p1) { return call_static_method<"reverse", void>(p1); }
	static void shuffle(jni::ref<java::util::List> p1) { return call_static_method<"shuffle", void>(p1); }
	static void shuffle(jni::ref<java::util::List> p1, jni::ref<java::util::Random> p2) { return call_static_method<"shuffle", void>(p1, p2); }
	static void swap(jni::ref<java::util::List> p1, jint p2, jint p3) { return call_static_method<"swap", void>(p1, p2, p3); }
	static void fill(jni::ref<java::util::List> p1, jni::ref<java::lang::Object> p2) { return call_static_method<"fill", void>(p1, p2); }
	static void copy(jni::ref<java::util::List> p1, jni::ref<java::util::List> p2) { return call_static_method<"copy", void>(p1, p2); }
	static jni::ref<java::lang::Object> min(jni::ref<java::util::Collection> p1) { return call_static_method<"min", jni::ref<java::lang::Object>>(p1); }
	static jni::ref<java::lang::Object> min(jni::ref<java::util::Collection> p1, jni::ref<java::util::Comparator> p2) { return call_static_method<"min", jni::ref<java::lang::Object>>(p1, p2); }
	static jni::ref<java::lang::Object> max(jni::ref<java::util::Collection> p1) { return call_static_method<"max", jni::ref<java::lang::Object>>(p1); }
	static jni::ref<java::lang::Object> max(jni::ref<java::util::Collection> p1, jni::ref<java::util::Comparator> p2) { return call_static_method<"max", jni::ref<java::lang::Object>>(p1, p2); }
	static void rotate(jni::ref<java::util::List> p1, jint p2) { return call_static_method<"rotate", void>(p1, p2); }
	static jboolean replaceAll(jni::ref<java::util::List> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_static_method<"replaceAll", jboolean>(p1, p2, p3); }
	static jint indexOfSubList(jni::ref<java::util::List> p1, jni::ref<java::util::List> p2) { return call_static_method<"indexOfSubList", jint>(p1, p2); }
	static jint lastIndexOfSubList(jni::ref<java::util::List> p1, jni::ref<java::util::List> p2) { return call_static_method<"lastIndexOfSubList", jint>(p1, p2); }
	static jni::ref<java::util::Collection> unmodifiableCollection(jni::ref<java::util::Collection> p1) { return call_static_method<"unmodifiableCollection", jni::ref<java::util::Collection>>(p1); }
	static jni::ref<java::util::Set> unmodifiableSet(jni::ref<java::util::Set> p1) { return call_static_method<"unmodifiableSet", jni::ref<java::util::Set>>(p1); }
	static jni::ref<java::util::SortedSet> unmodifiableSortedSet(jni::ref<java::util::SortedSet> p1) { return call_static_method<"unmodifiableSortedSet", jni::ref<java::util::SortedSet>>(p1); }
	static jni::ref<java::util::NavigableSet> unmodifiableNavigableSet(jni::ref<java::util::NavigableSet> p1) { return call_static_method<"unmodifiableNavigableSet", jni::ref<java::util::NavigableSet>>(p1); }
	static jni::ref<java::util::List> unmodifiableList(jni::ref<java::util::List> p1) { return call_static_method<"unmodifiableList", jni::ref<java::util::List>>(p1); }
	static jni::ref<java::util::Map> unmodifiableMap(jni::ref<java::util::Map> p1) { return call_static_method<"unmodifiableMap", jni::ref<java::util::Map>>(p1); }
	static jni::ref<java::util::SortedMap> unmodifiableSortedMap(jni::ref<java::util::SortedMap> p1) { return call_static_method<"unmodifiableSortedMap", jni::ref<java::util::SortedMap>>(p1); }
	static jni::ref<java::util::NavigableMap> unmodifiableNavigableMap(jni::ref<java::util::NavigableMap> p1) { return call_static_method<"unmodifiableNavigableMap", jni::ref<java::util::NavigableMap>>(p1); }
	static jni::ref<java::util::Collection> synchronizedCollection(jni::ref<java::util::Collection> p1) { return call_static_method<"synchronizedCollection", jni::ref<java::util::Collection>>(p1); }
	static jni::ref<java::util::Set> synchronizedSet(jni::ref<java::util::Set> p1) { return call_static_method<"synchronizedSet", jni::ref<java::util::Set>>(p1); }
	static jni::ref<java::util::SortedSet> synchronizedSortedSet(jni::ref<java::util::SortedSet> p1) { return call_static_method<"synchronizedSortedSet", jni::ref<java::util::SortedSet>>(p1); }
	static jni::ref<java::util::NavigableSet> synchronizedNavigableSet(jni::ref<java::util::NavigableSet> p1) { return call_static_method<"synchronizedNavigableSet", jni::ref<java::util::NavigableSet>>(p1); }
	static jni::ref<java::util::List> synchronizedList(jni::ref<java::util::List> p1) { return call_static_method<"synchronizedList", jni::ref<java::util::List>>(p1); }
	static jni::ref<java::util::Map> synchronizedMap(jni::ref<java::util::Map> p1) { return call_static_method<"synchronizedMap", jni::ref<java::util::Map>>(p1); }
	static jni::ref<java::util::SortedMap> synchronizedSortedMap(jni::ref<java::util::SortedMap> p1) { return call_static_method<"synchronizedSortedMap", jni::ref<java::util::SortedMap>>(p1); }
	static jni::ref<java::util::NavigableMap> synchronizedNavigableMap(jni::ref<java::util::NavigableMap> p1) { return call_static_method<"synchronizedNavigableMap", jni::ref<java::util::NavigableMap>>(p1); }
	static jni::ref<java::util::Collection> checkedCollection(jni::ref<java::util::Collection> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"checkedCollection", jni::ref<java::util::Collection>>(p1, p2); }
	static jni::ref<java::util::Queue> checkedQueue(jni::ref<java::util::Queue> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"checkedQueue", jni::ref<java::util::Queue>>(p1, p2); }
	static jni::ref<java::util::Set> checkedSet(jni::ref<java::util::Set> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"checkedSet", jni::ref<java::util::Set>>(p1, p2); }
	static jni::ref<java::util::SortedSet> checkedSortedSet(jni::ref<java::util::SortedSet> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"checkedSortedSet", jni::ref<java::util::SortedSet>>(p1, p2); }
	static jni::ref<java::util::NavigableSet> checkedNavigableSet(jni::ref<java::util::NavigableSet> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"checkedNavigableSet", jni::ref<java::util::NavigableSet>>(p1, p2); }
	static jni::ref<java::util::List> checkedList(jni::ref<java::util::List> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"checkedList", jni::ref<java::util::List>>(p1, p2); }
	static jni::ref<java::util::Map> checkedMap(jni::ref<java::util::Map> p1, jni::ref<java::lang::Class> p2, jni::ref<java::lang::Class> p3) { return call_static_method<"checkedMap", jni::ref<java::util::Map>>(p1, p2, p3); }
	static jni::ref<java::util::SortedMap> checkedSortedMap(jni::ref<java::util::SortedMap> p1, jni::ref<java::lang::Class> p2, jni::ref<java::lang::Class> p3) { return call_static_method<"checkedSortedMap", jni::ref<java::util::SortedMap>>(p1, p2, p3); }
	static jni::ref<java::util::NavigableMap> checkedNavigableMap(jni::ref<java::util::NavigableMap> p1, jni::ref<java::lang::Class> p2, jni::ref<java::lang::Class> p3) { return call_static_method<"checkedNavigableMap", jni::ref<java::util::NavigableMap>>(p1, p2, p3); }
	static jni::ref<java::util::Iterator> emptyIterator() { return call_static_method<"emptyIterator", jni::ref<java::util::Iterator>>(); }
	static jni::ref<java::util::ListIterator> emptyListIterator() { return call_static_method<"emptyListIterator", jni::ref<java::util::ListIterator>>(); }
	static jni::ref<java::util::Enumeration> emptyEnumeration() { return call_static_method<"emptyEnumeration", jni::ref<java::util::Enumeration>>(); }
	static jni::ref<java::util::Set> emptySet() { return call_static_method<"emptySet", jni::ref<java::util::Set>>(); }
	static jni::ref<java::util::SortedSet> emptySortedSet() { return call_static_method<"emptySortedSet", jni::ref<java::util::SortedSet>>(); }
	static jni::ref<java::util::NavigableSet> emptyNavigableSet() { return call_static_method<"emptyNavigableSet", jni::ref<java::util::NavigableSet>>(); }
	static jni::ref<java::util::List> emptyList() { return call_static_method<"emptyList", jni::ref<java::util::List>>(); }
	static jni::ref<java::util::Map> emptyMap() { return call_static_method<"emptyMap", jni::ref<java::util::Map>>(); }
	static jni::ref<java::util::SortedMap> emptySortedMap() { return call_static_method<"emptySortedMap", jni::ref<java::util::SortedMap>>(); }
	static jni::ref<java::util::NavigableMap> emptyNavigableMap() { return call_static_method<"emptyNavigableMap", jni::ref<java::util::NavigableMap>>(); }
	static jni::ref<java::util::Set> singleton(jni::ref<java::lang::Object> p1) { return call_static_method<"singleton", jni::ref<java::util::Set>>(p1); }
	static jni::ref<java::util::List> singletonList(jni::ref<java::lang::Object> p1) { return call_static_method<"singletonList", jni::ref<java::util::List>>(p1); }
	static jni::ref<java::util::Map> singletonMap(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_static_method<"singletonMap", jni::ref<java::util::Map>>(p1, p2); }
	static jni::ref<java::util::List> nCopies(jint p1, jni::ref<java::lang::Object> p2) { return call_static_method<"nCopies", jni::ref<java::util::List>>(p1, p2); }
	static jni::ref<java::util::Comparator> reverseOrder() { return call_static_method<"reverseOrder", jni::ref<java::util::Comparator>>(); }
	static jni::ref<java::util::Comparator> reverseOrder(jni::ref<java::util::Comparator> p1) { return call_static_method<"reverseOrder", jni::ref<java::util::Comparator>>(p1); }
	static jni::ref<java::util::Enumeration> enumeration(jni::ref<java::util::Collection> p1) { return call_static_method<"enumeration", jni::ref<java::util::Enumeration>>(p1); }
	static jni::ref<java::util::ArrayList> list(jni::ref<java::util::Enumeration> p1) { return call_static_method<"list", jni::ref<java::util::ArrayList>>(p1); }
	static jint frequency(jni::ref<java::util::Collection> p1, jni::ref<java::lang::Object> p2) { return call_static_method<"frequency", jint>(p1, p2); }
	static jboolean disjoint(jni::ref<java::util::Collection> p1, jni::ref<java::util::Collection> p2) { return call_static_method<"disjoint", jboolean>(p1, p2); }
	static jboolean addAll(jni::ref<java::util::Collection> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_static_method<"addAll", jboolean>(p1, p2); }
	static jni::ref<java::util::Set> newSetFromMap(jni::ref<java::util::Map> p1) { return call_static_method<"newSetFromMap", jni::ref<java::util::Set>>(p1); }
	static jni::ref<java::util::Queue> asLifoQueue(jni::ref<java::util::Deque> p1) { return call_static_method<"asLifoQueue", jni::ref<java::util::Queue>>(p1); }

protected:

	Collections(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS
