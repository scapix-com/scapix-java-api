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

	static jni::ref<java::util::List> EMPTY_LIST() { return get_static_field<"EMPTY_LIST", jni::ref<java::util::List>>(); }
	static jni::ref<java::util::Map> EMPTY_MAP() { return get_static_field<"EMPTY_MAP", jni::ref<java::util::Map>>(); }
	static jni::ref<java::util::Set> EMPTY_SET() { return get_static_field<"EMPTY_SET", jni::ref<java::util::Set>>(); }

	static void sort(jni::ref<java::util::List> list) { return call_static_method<"sort", void>(list); }
	static void sort(jni::ref<java::util::List> list, jni::ref<java::util::Comparator> c) { return call_static_method<"sort", void>(list, c); }
	static jint binarySearch(jni::ref<java::util::List> list, jni::ref<java::lang::Object> key) { return call_static_method<"binarySearch", jint>(list, key); }
	static jint binarySearch(jni::ref<java::util::List> list, jni::ref<java::lang::Object> key, jni::ref<java::util::Comparator> c) { return call_static_method<"binarySearch", jint>(list, key, c); }
	static void reverse(jni::ref<java::util::List> list) { return call_static_method<"reverse", void>(list); }
	static void shuffle(jni::ref<java::util::List> list) { return call_static_method<"shuffle", void>(list); }
	static void shuffle(jni::ref<java::util::List> list, jni::ref<java::util::Random> rnd) { return call_static_method<"shuffle", void>(list, rnd); }
	static void swap(jni::ref<java::util::List> list, jint i, jint j) { return call_static_method<"swap", void>(list, i, j); }
	static void fill(jni::ref<java::util::List> list, jni::ref<java::lang::Object> obj) { return call_static_method<"fill", void>(list, obj); }
	static void copy(jni::ref<java::util::List> dest, jni::ref<java::util::List> src) { return call_static_method<"copy", void>(dest, src); }
	static jni::ref<java::lang::Object> min(jni::ref<java::util::Collection> coll) { return call_static_method<"min", jni::ref<java::lang::Object>>(coll); }
	static jni::ref<java::lang::Object> min(jni::ref<java::util::Collection> coll, jni::ref<java::util::Comparator> comp) { return call_static_method<"min", jni::ref<java::lang::Object>>(coll, comp); }
	static jni::ref<java::lang::Object> max(jni::ref<java::util::Collection> coll) { return call_static_method<"max", jni::ref<java::lang::Object>>(coll); }
	static jni::ref<java::lang::Object> max(jni::ref<java::util::Collection> coll, jni::ref<java::util::Comparator> comp) { return call_static_method<"max", jni::ref<java::lang::Object>>(coll, comp); }
	static void rotate(jni::ref<java::util::List> list, jint distance) { return call_static_method<"rotate", void>(list, distance); }
	static jboolean replaceAll(jni::ref<java::util::List> list, jni::ref<java::lang::Object> oldVal, jni::ref<java::lang::Object> newVal) { return call_static_method<"replaceAll", jboolean>(list, oldVal, newVal); }
	static jint indexOfSubList(jni::ref<java::util::List> source, jni::ref<java::util::List> target) { return call_static_method<"indexOfSubList", jint>(source, target); }
	static jint lastIndexOfSubList(jni::ref<java::util::List> source, jni::ref<java::util::List> target) { return call_static_method<"lastIndexOfSubList", jint>(source, target); }
	static jni::ref<java::util::Collection> unmodifiableCollection(jni::ref<java::util::Collection> c) { return call_static_method<"unmodifiableCollection", jni::ref<java::util::Collection>>(c); }
	static jni::ref<java::util::Set> unmodifiableSet(jni::ref<java::util::Set> s) { return call_static_method<"unmodifiableSet", jni::ref<java::util::Set>>(s); }
	static jni::ref<java::util::SortedSet> unmodifiableSortedSet(jni::ref<java::util::SortedSet> s) { return call_static_method<"unmodifiableSortedSet", jni::ref<java::util::SortedSet>>(s); }
	static jni::ref<java::util::NavigableSet> unmodifiableNavigableSet(jni::ref<java::util::NavigableSet> s) { return call_static_method<"unmodifiableNavigableSet", jni::ref<java::util::NavigableSet>>(s); }
	static jni::ref<java::util::List> unmodifiableList(jni::ref<java::util::List> list) { return call_static_method<"unmodifiableList", jni::ref<java::util::List>>(list); }
	static jni::ref<java::util::Map> unmodifiableMap(jni::ref<java::util::Map> m) { return call_static_method<"unmodifiableMap", jni::ref<java::util::Map>>(m); }
	static jni::ref<java::util::SortedMap> unmodifiableSortedMap(jni::ref<java::util::SortedMap> m) { return call_static_method<"unmodifiableSortedMap", jni::ref<java::util::SortedMap>>(m); }
	static jni::ref<java::util::NavigableMap> unmodifiableNavigableMap(jni::ref<java::util::NavigableMap> m) { return call_static_method<"unmodifiableNavigableMap", jni::ref<java::util::NavigableMap>>(m); }
	static jni::ref<java::util::Collection> synchronizedCollection(jni::ref<java::util::Collection> c) { return call_static_method<"synchronizedCollection", jni::ref<java::util::Collection>>(c); }
	static jni::ref<java::util::Set> synchronizedSet(jni::ref<java::util::Set> s) { return call_static_method<"synchronizedSet", jni::ref<java::util::Set>>(s); }
	static jni::ref<java::util::SortedSet> synchronizedSortedSet(jni::ref<java::util::SortedSet> s) { return call_static_method<"synchronizedSortedSet", jni::ref<java::util::SortedSet>>(s); }
	static jni::ref<java::util::NavigableSet> synchronizedNavigableSet(jni::ref<java::util::NavigableSet> s) { return call_static_method<"synchronizedNavigableSet", jni::ref<java::util::NavigableSet>>(s); }
	static jni::ref<java::util::List> synchronizedList(jni::ref<java::util::List> list) { return call_static_method<"synchronizedList", jni::ref<java::util::List>>(list); }
	static jni::ref<java::util::Map> synchronizedMap(jni::ref<java::util::Map> m) { return call_static_method<"synchronizedMap", jni::ref<java::util::Map>>(m); }
	static jni::ref<java::util::SortedMap> synchronizedSortedMap(jni::ref<java::util::SortedMap> m) { return call_static_method<"synchronizedSortedMap", jni::ref<java::util::SortedMap>>(m); }
	static jni::ref<java::util::NavigableMap> synchronizedNavigableMap(jni::ref<java::util::NavigableMap> m) { return call_static_method<"synchronizedNavigableMap", jni::ref<java::util::NavigableMap>>(m); }
	static jni::ref<java::util::Collection> checkedCollection(jni::ref<java::util::Collection> c, jni::ref<java::lang::Class> type) { return call_static_method<"checkedCollection", jni::ref<java::util::Collection>>(c, type); }
	static jni::ref<java::util::Queue> checkedQueue(jni::ref<java::util::Queue> queue, jni::ref<java::lang::Class> type) { return call_static_method<"checkedQueue", jni::ref<java::util::Queue>>(queue, type); }
	static jni::ref<java::util::Set> checkedSet(jni::ref<java::util::Set> s, jni::ref<java::lang::Class> type) { return call_static_method<"checkedSet", jni::ref<java::util::Set>>(s, type); }
	static jni::ref<java::util::SortedSet> checkedSortedSet(jni::ref<java::util::SortedSet> s, jni::ref<java::lang::Class> type) { return call_static_method<"checkedSortedSet", jni::ref<java::util::SortedSet>>(s, type); }
	static jni::ref<java::util::NavigableSet> checkedNavigableSet(jni::ref<java::util::NavigableSet> s, jni::ref<java::lang::Class> type) { return call_static_method<"checkedNavigableSet", jni::ref<java::util::NavigableSet>>(s, type); }
	static jni::ref<java::util::List> checkedList(jni::ref<java::util::List> list, jni::ref<java::lang::Class> type) { return call_static_method<"checkedList", jni::ref<java::util::List>>(list, type); }
	static jni::ref<java::util::Map> checkedMap(jni::ref<java::util::Map> m, jni::ref<java::lang::Class> keyType, jni::ref<java::lang::Class> valueType) { return call_static_method<"checkedMap", jni::ref<java::util::Map>>(m, keyType, valueType); }
	static jni::ref<java::util::SortedMap> checkedSortedMap(jni::ref<java::util::SortedMap> m, jni::ref<java::lang::Class> keyType, jni::ref<java::lang::Class> valueType) { return call_static_method<"checkedSortedMap", jni::ref<java::util::SortedMap>>(m, keyType, valueType); }
	static jni::ref<java::util::NavigableMap> checkedNavigableMap(jni::ref<java::util::NavigableMap> m, jni::ref<java::lang::Class> keyType, jni::ref<java::lang::Class> valueType) { return call_static_method<"checkedNavigableMap", jni::ref<java::util::NavigableMap>>(m, keyType, valueType); }
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
	static jni::ref<java::util::Set> singleton(jni::ref<java::lang::Object> o) { return call_static_method<"singleton", jni::ref<java::util::Set>>(o); }
	static jni::ref<java::util::List> singletonList(jni::ref<java::lang::Object> o) { return call_static_method<"singletonList", jni::ref<java::util::List>>(o); }
	static jni::ref<java::util::Map> singletonMap(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_static_method<"singletonMap", jni::ref<java::util::Map>>(key, value); }
	static jni::ref<java::util::List> nCopies(jint n, jni::ref<java::lang::Object> o) { return call_static_method<"nCopies", jni::ref<java::util::List>>(n, o); }
	static jni::ref<java::util::Comparator> reverseOrder() { return call_static_method<"reverseOrder", jni::ref<java::util::Comparator>>(); }
	static jni::ref<java::util::Comparator> reverseOrder(jni::ref<java::util::Comparator> cmp) { return call_static_method<"reverseOrder", jni::ref<java::util::Comparator>>(cmp); }
	static jni::ref<java::util::Enumeration> enumeration(jni::ref<java::util::Collection> c) { return call_static_method<"enumeration", jni::ref<java::util::Enumeration>>(c); }
	static jni::ref<java::util::ArrayList> list(jni::ref<java::util::Enumeration> e) { return call_static_method<"list", jni::ref<java::util::ArrayList>>(e); }
	static jint frequency(jni::ref<java::util::Collection> c, jni::ref<java::lang::Object> o) { return call_static_method<"frequency", jint>(c, o); }
	static jboolean disjoint(jni::ref<java::util::Collection> c1, jni::ref<java::util::Collection> c2) { return call_static_method<"disjoint", jboolean>(c1, c2); }
	static jboolean addAll(jni::ref<java::util::Collection> c, jni::ref<jni::array<java::lang::Object>> elements) { return call_static_method<"addAll", jboolean>(c, elements); }
	static jni::ref<java::util::Set> newSetFromMap(jni::ref<java::util::Map> map) { return call_static_method<"newSetFromMap", jni::ref<java::util::Set>>(map); }
	static jni::ref<java::util::Queue> asLifoQueue(jni::ref<java::util::Deque> deque) { return call_static_method<"asLifoQueue", jni::ref<java::util::Queue>>(deque); }

protected:

	Collections(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS
