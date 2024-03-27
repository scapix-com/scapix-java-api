// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_SynchronizedCollection.h>
#include <scapix/java_api/java/util/List.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDLIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_SynchronizedList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_SynchronizedList>
{
	static constexpr fixed_string class_name = "java/util/Collections$SynchronizedList";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_SynchronizedCollection, scapix::java_api::java::util::List>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDLIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_SynchronizedList : public jni::object_base<"java/util/Collections$SynchronizedList",
	java::util::Collections_SynchronizedCollection,
	java::util::List>
{
public:

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> get(jint index) { return call_method<"get", jni::ref<java::lang::Object>>(index); }
	jni::ref<java::lang::Object> set(jint index, jni::ref<java::lang::Object> element) { return call_method<"set", jni::ref<java::lang::Object>>(index, element); }
	void add(jint index, jni::ref<java::lang::Object> element) { return call_method<"add", void>(index, element); }
	jni::ref<java::lang::Object> remove(jint index) { return call_method<"remove", jni::ref<java::lang::Object>>(index); }
	jint indexOf(jni::ref<java::lang::Object> o) { return call_method<"indexOf", jint>(o); }
	jint lastIndexOf(jni::ref<java::lang::Object> o) { return call_method<"lastIndexOf", jint>(o); }
	jboolean addAll(jint index, jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(index, c); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::ListIterator> listIterator(jint index) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(index); }
	jni::ref<java::util::List> subList(jint fromIndex, jint toIndex) { return call_method<"subList", jni::ref<java::util::List>>(fromIndex, toIndex); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> operator_) { return call_method<"replaceAll", void>(operator_); }
	void sort(jni::ref<java::util::Comparator> c) { return call_method<"sort", void>(c); }

protected:

	Collections_SynchronizedList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDLIST