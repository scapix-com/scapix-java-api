// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXEDLIST_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXEDLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class FixedList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::FixedList>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/FixedList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::List>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXEDLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXEDLIST)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXEDLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::FixedList : public jni::object_base<"com/sun/java/util/jar/pack/FixedList",
	java::lang::Object,
	java::util::List>
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
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> set(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"set", jni::ref<java::lang::Object>>(p1, p2); }
	void add(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"add", void>(p1, p2); }
	jni::ref<java::lang::Object> remove(jint p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jint indexOf(jni::ref<java::lang::Object> p1) { return call_method<"indexOf", jint>(p1); }
	jint lastIndexOf(jni::ref<java::lang::Object> p1) { return call_method<"lastIndexOf", jint>(p1); }
	jni::ref<java::util::ListIterator> listIterator() { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(); }
	jni::ref<java::util::ListIterator> listIterator(jint p1) { return call_method<"listIterator", jni::ref<java::util::ListIterator>>(p1); }
	jni::ref<java::util::List> subList(jint p1, jint p2) { return call_method<"subList", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FixedList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXEDLIST
