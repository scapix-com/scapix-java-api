// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class List; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::List>
{
	static constexpr fixed_string class_name = "java/util/List";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Collection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_LIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::List : public jni::object_base<"java/util/List",
	java::lang::Object,
	java::util::Collection>
{
public:

	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean containsAll(jni::ref<java::util::Collection> p1) { return call_method<"containsAll", jboolean>(p1); }
	jboolean addAll(jni::ref<java::util::Collection> p1) { return call_method<"addAll", jboolean>(p1); }
	jboolean addAll(jint p1, jni::ref<java::util::Collection> p2) { return call_method<"addAll", jboolean>(p1, p2); }
	jboolean removeAll(jni::ref<java::util::Collection> p1) { return call_method<"removeAll", jboolean>(p1); }
	jboolean retainAll(jni::ref<java::util::Collection> p1) { return call_method<"retainAll", jboolean>(p1); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> operator_) { return call_method<"replaceAll", void>(operator_); }
	void sort(jni::ref<java::util::Comparator> c) { return call_method<"sort", void>(c); }
	void clear() { return call_method<"clear", void>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> set(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"set", jni::ref<java::lang::Object>>(p1, p2); }
	void add(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"add", void>(p1, p2); }
	jni::ref<java::lang::Object> remove(jint p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jint indexOf(jni::ref<java::lang::Object> p1) { return call_method<"indexOf", jint>(p1); }
	jint lastIndexOf(jni::ref<java::lang::Object> p1) { return call_method<"lastIndexOf", jint>(p1); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::ListIterator> listIterator(jint p1) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(p1); }
	jni::ref<java::util::List> subList(jint p1, jint p2) { return call_method<"subList", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	static jni::ref<java::util::List> of() { return call_static_method<"of", jni::ref<java::util::List>>(); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1) { return call_static_method<"of", jni::ref<java::util::List>>(e1); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3, jni::ref<java::lang::Object> e4) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3, e4); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3, jni::ref<java::lang::Object> e4, jni::ref<java::lang::Object> e5) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3, e4, e5); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3, jni::ref<java::lang::Object> e4, jni::ref<java::lang::Object> e5, jni::ref<java::lang::Object> e6) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3, e4, e5, e6); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3, jni::ref<java::lang::Object> e4, jni::ref<java::lang::Object> e5, jni::ref<java::lang::Object> e6, jni::ref<java::lang::Object> e7) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3, e4, e5, e6, e7); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3, jni::ref<java::lang::Object> e4, jni::ref<java::lang::Object> e5, jni::ref<java::lang::Object> e6, jni::ref<java::lang::Object> e7, jni::ref<java::lang::Object> e8) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3, e4, e5, e6, e7, e8); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3, jni::ref<java::lang::Object> e4, jni::ref<java::lang::Object> e5, jni::ref<java::lang::Object> e6, jni::ref<java::lang::Object> e7, jni::ref<java::lang::Object> e8, jni::ref<java::lang::Object> e9) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3, e4, e5, e6, e7, e8, e9); }
	static jni::ref<java::util::List> of(jni::ref<java::lang::Object> e1, jni::ref<java::lang::Object> e2, jni::ref<java::lang::Object> e3, jni::ref<java::lang::Object> e4, jni::ref<java::lang::Object> e5, jni::ref<java::lang::Object> e6, jni::ref<java::lang::Object> e7, jni::ref<java::lang::Object> e8, jni::ref<java::lang::Object> e9, jni::ref<java::lang::Object> e10) { return call_static_method<"of", jni::ref<java::util::List>>(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10); }
	static jni::ref<java::util::List> of(jni::ref<jni::array<java::lang::Object>> elements) { return call_static_method<"of", jni::ref<java::util::List>>(elements); }
	static jni::ref<java::util::List> copyOf(jni::ref<java::util::Collection> coll) { return call_static_method<"copyOf", jni::ref<java::util::List>>(coll); }

protected:

	List(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LIST
