// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_UnmodifiableCollection.h>
#include <scapix/java_api/java/util/List.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLELIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLELIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_UnmodifiableList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_UnmodifiableList>
{
	static constexpr fixed_string class_name = "java/util/Collections$UnmodifiableList";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_UnmodifiableCollection, scapix::java_api::java::util::List>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLELIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLELIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLELIST

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
class java::util::Collections_UnmodifiableList : public jni::object_base<"java/util/Collections$UnmodifiableList",
	java::util::Collections_UnmodifiableCollection,
	java::util::List>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> set(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"set", jni::ref<java::lang::Object>>(p1, p2); }
	void add(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"add", void>(p1, p2); }
	jni::ref<java::lang::Object> remove(jint p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jint indexOf(jni::ref<java::lang::Object> p1) { return call_method<"indexOf", jint>(p1); }
	jint lastIndexOf(jni::ref<java::lang::Object> p1) { return call_method<"lastIndexOf", jint>(p1); }
	jboolean addAll(jint p1, jni::ref<java::util::Collection> p2) { return call_method<"addAll", jboolean>(p1, p2); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> p1) { return call_method<"replaceAll", void>(p1); }
	void sort(jni::ref<java::util::Comparator> p1) { return call_method<"sort", void>(p1); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::ListIterator> listIterator(jint p1) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(p1); }
	jni::ref<java::util::List> subList(jint p1, jint p2) { return call_method<"subList", jni::ref<java::util::List>>(p1, p2); }

protected:

	Collections_UnmodifiableList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLELIST
