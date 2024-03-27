// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/RandomAccess.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CopyOnWriteArrayList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CopyOnWriteArrayList>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CopyOnWriteArrayList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::List, scapix::java_api::java::util::RandomAccess, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::CopyOnWriteArrayList : public jni::object_base<"java/util/concurrent/CopyOnWriteArrayList",
	java::lang::Object,
	java::util::List,
	java::util::RandomAccess,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::CopyOnWriteArrayList> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::CopyOnWriteArrayList> new_object(jni::ref<java::util::Collection> collection) { return base_::new_object(collection); }
	static jni::ref<java::util::concurrent::CopyOnWriteArrayList> new_object(jni::ref<jni::array<java::lang::Object>> array) { return base_::new_object(array); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::lang::Object> get(jint index) { return call_method<"get", jni::ref<java::lang::Object>>(index); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jboolean containsAll(jni::ref<java::util::Collection> collection) { return call_method<"containsAll", jboolean>(collection); }
	jint indexOf(jni::ref<java::lang::Object> object, jint from) { return call_method<"indexOf", jint>(object, from); }
	jint indexOf(jni::ref<java::lang::Object> object) { return call_method<"indexOf", jint>(object); }
	jint lastIndexOf(jni::ref<java::lang::Object> object, jint to) { return call_method<"lastIndexOf", jint>(object, to); }
	jint lastIndexOf(jni::ref<java::lang::Object> object) { return call_method<"lastIndexOf", jint>(object); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::ListIterator> listIterator(jint index) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(index); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::List> subList(jint from, jint to) { return call_method<"subList", jni::ref<java::util::List>>(from, to); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> contents) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(contents); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	void add(jint index, jni::ref<java::lang::Object> e) { return call_method<"add", void>(index, e); }
	jboolean addAll(jni::ref<java::util::Collection> collection) { return call_method<"addAll", jboolean>(collection); }
	jboolean addAll(jint index, jni::ref<java::util::Collection> collection) { return call_method<"addAll", jboolean>(index, collection); }
	jint addAllAbsent(jni::ref<java::util::Collection> collection) { return call_method<"addAllAbsent", jint>(collection); }
	jboolean addIfAbsent(jni::ref<java::lang::Object> object) { return call_method<"addIfAbsent", jboolean>(object); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> remove(jint index) { return call_method<"remove", jni::ref<java::lang::Object>>(index); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean removeAll(jni::ref<java::util::Collection> collection) { return call_method<"removeAll", jboolean>(collection); }
	jboolean retainAll(jni::ref<java::util::Collection> collection) { return call_method<"retainAll", jboolean>(collection); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> operator_) { return call_method<"replaceAll", void>(operator_); }
	void sort(jni::ref<java::util::Comparator> c) { return call_method<"sort", void>(c); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	jni::ref<java::lang::Object> set(jint index, jni::ref<java::lang::Object> e) { return call_method<"set", jni::ref<java::lang::Object>>(index, e); }

protected:

	CopyOnWriteArrayList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST