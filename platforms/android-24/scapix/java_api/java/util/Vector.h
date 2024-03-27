// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/RandomAccess.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_VECTOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_VECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Vector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Vector>
{
	static constexpr fixed_string class_name = "java/util/Vector";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractList, scapix::java_api::java::util::List, scapix::java_api::java::util::RandomAccess, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_VECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_VECTOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_VECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Vector : public jni::object_base<"java/util/Vector",
	java::util::AbstractList,
	java::util::List,
	java::util::RandomAccess,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::Vector> new_object(jint initialCapacity, jint capacityIncrement) { return base_::new_object(initialCapacity, capacityIncrement); }
	static jni::ref<java::util::Vector> new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
	static jni::ref<java::util::Vector> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Vector> new_object(jni::ref<java::util::Collection> c) { return base_::new_object(c); }
	void copyInto(jni::ref<jni::array<java::lang::Object>> anArray) { return call_method<"copyInto", void>(anArray); }
	void trimToSize() { return call_method<"trimToSize", void>(); }
	void ensureCapacity(jint minCapacity) { return call_method<"ensureCapacity", void>(minCapacity); }
	void setSize(jint newSize) { return call_method<"setSize", void>(newSize); }
	jint capacity() { return call_method<"capacity", jint>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jint indexOf(jni::ref<java::lang::Object> o) { return call_method<"indexOf", jint>(o); }
	jint indexOf(jni::ref<java::lang::Object> o, jint index) { return call_method<"indexOf", jint>(o, index); }
	jint lastIndexOf(jni::ref<java::lang::Object> o) { return call_method<"lastIndexOf", jint>(o); }
	jint lastIndexOf(jni::ref<java::lang::Object> o, jint index) { return call_method<"lastIndexOf", jint>(o, index); }
	jni::ref<java::lang::Object> elementAt(jint index) { return call_method<"elementAt", jni::ref<java::lang::Object>>(index); }
	jni::ref<java::lang::Object> firstElement() { return call_method<"firstElement", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> lastElement() { return call_method<"lastElement", jni::ref<java::lang::Object>>(); }
	void setElementAt(jni::ref<java::lang::Object> obj, jint index) { return call_method<"setElementAt", void>(obj, index); }
	void removeElementAt(jint index) { return call_method<"removeElementAt", void>(index); }
	void insertElementAt(jni::ref<java::lang::Object> obj, jint index) { return call_method<"insertElementAt", void>(obj, index); }
	void addElement(jni::ref<java::lang::Object> obj) { return call_method<"addElement", void>(obj); }
	jboolean removeElement(jni::ref<java::lang::Object> obj) { return call_method<"removeElement", jboolean>(obj); }
	void removeAllElements() { return call_method<"removeAllElements", void>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	jni::ref<java::lang::Object> get(jint index) { return call_method<"get", jni::ref<java::lang::Object>>(index); }
	jni::ref<java::lang::Object> set(jint index, jni::ref<java::lang::Object> element) { return call_method<"set", jni::ref<java::lang::Object>>(index, element); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	void add(jint index, jni::ref<java::lang::Object> element) { return call_method<"add", void>(index, element); }
	jni::ref<java::lang::Object> remove(jint index) { return call_method<"remove", jni::ref<java::lang::Object>>(index); }
	void clear() { return call_method<"clear", void>(); }
	jboolean containsAll(jni::ref<java::util::Collection> c) { return call_method<"containsAll", jboolean>(c); }
	jboolean addAll(jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(c); }
	jboolean removeAll(jni::ref<java::util::Collection> c) { return call_method<"removeAll", jboolean>(c); }
	jboolean retainAll(jni::ref<java::util::Collection> c) { return call_method<"retainAll", jboolean>(c); }
	jboolean addAll(jint index, jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(index, c); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> subList(jint fromIndex, jint toIndex) { return call_method<"subList", jni::ref<java::util::List>>(fromIndex, toIndex); }
	jni::ref<java::util::ListIterator> listIterator(jint index) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(index); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	jboolean removeIf(jni::ref<java::util::function::Predicate> filter) { return call_method<"removeIf", jboolean>(filter); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> operator_) { return call_method<"replaceAll", void>(operator_); }
	void sort(jni::ref<java::util::Comparator> c) { return call_method<"sort", void>(c); }

protected:

	Vector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_VECTOR
