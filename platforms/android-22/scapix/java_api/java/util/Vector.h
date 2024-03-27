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
#include <scapix/java_api/java/util/Enumeration.h>
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

	static jni::ref<java::util::Vector> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Vector> new_object(jint capacity) { return base_::new_object(capacity); }
	static jni::ref<java::util::Vector> new_object(jint capacity, jint capacityIncrement) { return base_::new_object(capacity, capacityIncrement); }
	static jni::ref<java::util::Vector> new_object(jni::ref<java::util::Collection> collection) { return base_::new_object(collection); }
	void add(jint location, jni::ref<java::lang::Object> object) { return call_method<"add", void>(location, object); }
	jboolean add(jni::ref<java::lang::Object> object) { return call_method<"add", jboolean>(object); }
	jboolean addAll(jint location, jni::ref<java::util::Collection> collection) { return call_method<"addAll", jboolean>(location, collection); }
	jboolean addAll(jni::ref<java::util::Collection> collection) { return call_method<"addAll", jboolean>(collection); }
	void addElement(jni::ref<java::lang::Object> object) { return call_method<"addElement", void>(object); }
	jint capacity() { return call_method<"capacity", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean contains(jni::ref<java::lang::Object> object) { return call_method<"contains", jboolean>(object); }
	jboolean containsAll(jni::ref<java::util::Collection> collection) { return call_method<"containsAll", jboolean>(collection); }
	void copyInto(jni::ref<jni::array<java::lang::Object>> elements) { return call_method<"copyInto", void>(elements); }
	jni::ref<java::lang::Object> elementAt(jint location) { return call_method<"elementAt", jni::ref<java::lang::Object>>(location); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }
	void ensureCapacity(jint minimumCapacity) { return call_method<"ensureCapacity", void>(minimumCapacity); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jni::ref<java::lang::Object> firstElement() { return call_method<"firstElement", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> get(jint location) { return call_method<"get", jni::ref<java::lang::Object>>(location); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint indexOf(jni::ref<java::lang::Object> object) { return call_method<"indexOf", jint>(object); }
	jint indexOf(jni::ref<java::lang::Object> object, jint location) { return call_method<"indexOf", jint>(object, location); }
	void insertElementAt(jni::ref<java::lang::Object> object, jint location) { return call_method<"insertElementAt", void>(object, location); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::Object> lastElement() { return call_method<"lastElement", jni::ref<java::lang::Object>>(); }
	jint lastIndexOf(jni::ref<java::lang::Object> object) { return call_method<"lastIndexOf", jint>(object); }
	jint lastIndexOf(jni::ref<java::lang::Object> object, jint location) { return call_method<"lastIndexOf", jint>(object, location); }
	jni::ref<java::lang::Object> remove(jint location) { return call_method<"remove", jni::ref<java::lang::Object>>(location); }
	jboolean remove(jni::ref<java::lang::Object> object) { return call_method<"remove", jboolean>(object); }
	jboolean removeAll(jni::ref<java::util::Collection> collection) { return call_method<"removeAll", jboolean>(collection); }
	void removeAllElements() { return call_method<"removeAllElements", void>(); }
	jboolean removeElement(jni::ref<java::lang::Object> object) { return call_method<"removeElement", jboolean>(object); }
	void removeElementAt(jint location) { return call_method<"removeElementAt", void>(location); }
	jboolean retainAll(jni::ref<java::util::Collection> collection) { return call_method<"retainAll", jboolean>(collection); }
	jni::ref<java::lang::Object> set(jint location, jni::ref<java::lang::Object> object) { return call_method<"set", jni::ref<java::lang::Object>>(location, object); }
	void setElementAt(jni::ref<java::lang::Object> object, jint location) { return call_method<"setElementAt", void>(object, location); }
	void setSize(jint length) { return call_method<"setSize", void>(length); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::List> subList(jint start, jint end) { return call_method<"subList", jni::ref<java::util::List>>(start, end); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> contents) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(contents); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void trimToSize() { return call_method<"trimToSize", void>(); }

protected:

	Vector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_VECTOR