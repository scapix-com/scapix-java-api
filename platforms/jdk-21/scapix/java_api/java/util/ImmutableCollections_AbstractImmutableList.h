// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ImmutableCollections_AbstractImmutableCollection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/RandomAccess.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLELIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLELIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ImmutableCollections_AbstractImmutableList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ImmutableCollections_AbstractImmutableList>
{
	static constexpr fixed_string class_name = "java/util/ImmutableCollections$AbstractImmutableList";
	using base_classes = std::tuple<scapix::java_api::java::util::ImmutableCollections_AbstractImmutableCollection, scapix::java_api::java::util::List, scapix::java_api::java::util::RandomAccess>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLELIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLELIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLELIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ImmutableCollections_AbstractImmutableList : public jni::object_base<"java/util/ImmutableCollections$AbstractImmutableList",
	java::util::ImmutableCollections_AbstractImmutableCollection,
	java::util::List,
	java::util::RandomAccess>
{
public:

	void add(jint index, jni::ref<java::lang::Object> element) { return call_method<"add", void>(index, element); }
	jboolean addAll(jint index, jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(index, c); }
	jni::ref<java::lang::Object> remove(jint index) { return call_method<"remove", jni::ref<java::lang::Object>>(index); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> operator_) { return call_method<"replaceAll", void>(operator_); }
	jni::ref<java::lang::Object> set(jint index, jni::ref<java::lang::Object> element) { return call_method<"set", jni::ref<java::lang::Object>>(index, element); }
	void sort(jni::ref<java::util::Comparator> c) { return call_method<"sort", void>(c); }
	jni::ref<java::util::List> subList(jint fromIndex, jint toIndex) { return call_method<"subList", jni::ref<java::util::List>>(fromIndex, toIndex); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::ListIterator> listIterator(jint index) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(index); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jni::ref<java::util::List> reversed() { return call_method<"reversed", jni::ref<java::util::List>>(); }

protected:

	ImmutableCollections_AbstractImmutableList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLELIST
