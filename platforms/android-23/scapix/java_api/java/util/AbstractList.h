// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractCollection.h>
#include <scapix/java_api/java/util/List.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTLIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class AbstractList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::AbstractList>
{
	static constexpr fixed_string class_name = "java/util/AbstractList";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractCollection, scapix::java_api::java::util::List>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTLIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::AbstractList : public jni::object_base<"java/util/AbstractList",
	java::util::AbstractCollection,
	java::util::List>
{
public:

	void add(jint location, jni::ref<java::lang::Object> object) { return call_method<"add", void>(location, object); }
	jboolean add(jni::ref<java::lang::Object> object) { return call_method<"add", jboolean>(object); }
	jboolean addAll(jint location, jni::ref<java::util::Collection> collection) { return call_method<"addAll", jboolean>(location, collection); }
	void clear() { return call_method<"clear", void>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint indexOf(jni::ref<java::lang::Object> object) { return call_method<"indexOf", jint>(object); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jint lastIndexOf(jni::ref<java::lang::Object> object) { return call_method<"lastIndexOf", jint>(object); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::ListIterator> listIterator(jint location) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(location); }
	jni::ref<java::lang::Object> remove(jint location) { return call_method<"remove", jni::ref<java::lang::Object>>(location); }
	jni::ref<java::lang::Object> set(jint location, jni::ref<java::lang::Object> object) { return call_method<"set", jni::ref<java::lang::Object>>(location, object); }
	jni::ref<java::util::List> subList(jint start, jint end) { return call_method<"subList", jni::ref<java::util::List>>(start, end); }

protected:

	AbstractList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTLIST