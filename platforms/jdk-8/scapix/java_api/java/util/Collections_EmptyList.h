// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/java/util/RandomAccess.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_EmptyList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_EmptyList>
{
	static constexpr fixed_string class_name = "java/util/Collections$EmptyList";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractList, scapix::java_api::java::util::RandomAccess, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_EmptyList : public jni::object_base<"java/util/Collections$EmptyList",
	java::util::AbstractList,
	java::util::RandomAccess,
	java::io::Serializable>
{
public:

	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean containsAll(jni::ref<java::util::Collection> p1) { return call_method<"containsAll", jboolean>(p1); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean removeIf(jni::ref<java::util::function::Predicate> p1) { return call_method<"removeIf", jboolean>(p1); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> p1) { return call_method<"replaceAll", void>(p1); }
	void sort(jni::ref<java::util::Comparator> p1) { return call_method<"sort", void>(p1); }
	void forEach(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEach", void>(p1); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }

protected:

	Collections_EmptyList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLIST