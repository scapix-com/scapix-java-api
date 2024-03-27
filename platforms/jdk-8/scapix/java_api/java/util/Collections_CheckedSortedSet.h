// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_CheckedSet.h>
#include <scapix/java_api/java/util/SortedSet.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_CheckedSortedSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_CheckedSortedSet>
{
	static constexpr fixed_string class_name = "java/util/Collections$CheckedSortedSet";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_CheckedSet, scapix::java_api::java::util::SortedSet, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_CheckedSortedSet : public jni::object_base<"java/util/Collections$CheckedSortedSet",
	java::util::Collections_CheckedSet,
	java::util::SortedSet,
	java::io::Serializable>
{
public:

	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::lang::Object> first() { return call_method<"first", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> last() { return call_method<"last", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::SortedSet> subSet(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"subSet", jni::ref<java::util::SortedSet>>(p1, p2); }
	jni::ref<java::util::SortedSet> headSet(jni::ref<java::lang::Object> p1) { return call_method<"headSet", jni::ref<java::util::SortedSet>>(p1); }
	jni::ref<java::util::SortedSet> tailSet(jni::ref<java::lang::Object> p1) { return call_method<"tailSet", jni::ref<java::util::SortedSet>>(p1); }

protected:

	Collections_CheckedSortedSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDSORTEDSET