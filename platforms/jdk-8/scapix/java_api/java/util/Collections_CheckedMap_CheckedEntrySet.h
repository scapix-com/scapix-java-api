// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Set.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_CheckedMap_CheckedEntrySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_CheckedMap_CheckedEntrySet>
{
	static constexpr fixed_string class_name = "java/util/Collections$CheckedMap$CheckedEntrySet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Set>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_CheckedMap_CheckedEntrySet : public jni::object_base<"java/util/Collections$CheckedMap$CheckedEntrySet",
	java::lang::Object,
	java::util::Set>
{
public:

	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jboolean add(jni::ref<java::util::Map_Entry> p1) { return call_method<"add", jboolean>(p1); }
	jboolean addAll(jni::ref<java::util::Collection> p1) { return call_method<"addAll", jboolean>(p1); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean containsAll(jni::ref<java::util::Collection> p1) { return call_method<"containsAll", jboolean>(p1); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean removeAll(jni::ref<java::util::Collection> p1) { return call_method<"removeAll", jboolean>(p1); }
	jboolean retainAll(jni::ref<java::util::Collection> p1) { return call_method<"retainAll", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	Collections_CheckedMap_CheckedEntrySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET
