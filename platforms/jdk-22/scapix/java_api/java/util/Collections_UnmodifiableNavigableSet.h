// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_UnmodifiableSortedSet.h>
#include <scapix/java_api/java/util/NavigableSet.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLENAVIGABLESET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLENAVIGABLESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_UnmodifiableNavigableSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_UnmodifiableNavigableSet>
{
	static constexpr fixed_string class_name = "java/util/Collections$UnmodifiableNavigableSet";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_UnmodifiableSortedSet, scapix::java_api::java::util::NavigableSet, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLENAVIGABLESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLENAVIGABLESET)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLENAVIGABLESET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_UnmodifiableNavigableSet : public jni::object_base<"java/util/Collections$UnmodifiableNavigableSet",
	java::util::Collections_UnmodifiableSortedSet,
	java::util::NavigableSet,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::Object> lower(jni::ref<java::lang::Object> e) { return call_method<"lower", jni::ref<java::lang::Object>>(e); }
	jni::ref<java::lang::Object> floor(jni::ref<java::lang::Object> e) { return call_method<"floor", jni::ref<java::lang::Object>>(e); }
	jni::ref<java::lang::Object> ceiling(jni::ref<java::lang::Object> e) { return call_method<"ceiling", jni::ref<java::lang::Object>>(e); }
	jni::ref<java::lang::Object> higher(jni::ref<java::lang::Object> e) { return call_method<"higher", jni::ref<java::lang::Object>>(e); }
	jni::ref<java::lang::Object> pollFirst() { return call_method<"pollFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollLast() { return call_method<"pollLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::NavigableSet> descendingSet() { return call_method<"descendingSet", jni::ref<java::util::NavigableSet>>(); }
	jni::ref<java::util::Iterator> descendingIterator() { return call_method<"descendingIterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::NavigableSet> subSet(jni::ref<java::lang::Object> fromElement, jboolean fromInclusive, jni::ref<java::lang::Object> toElement, jboolean toInclusive) { return call_method<"subSet", jni::ref<java::util::NavigableSet>>(fromElement, fromInclusive, toElement, toInclusive); }
	jni::ref<java::util::NavigableSet> headSet(jni::ref<java::lang::Object> toElement, jboolean inclusive) { return call_method<"headSet", jni::ref<java::util::NavigableSet>>(toElement, inclusive); }
	jni::ref<java::util::NavigableSet> tailSet(jni::ref<java::lang::Object> fromElement, jboolean inclusive) { return call_method<"tailSet", jni::ref<java::util::NavigableSet>>(fromElement, inclusive); }

protected:

	Collections_UnmodifiableNavigableSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLENAVIGABLESET
