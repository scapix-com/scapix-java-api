// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/SortedMap.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PROPMAP_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PROPMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class PropMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::PropMap>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/PropMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::SortedMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PROPMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PROPMAP)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PROPMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::PropMap : public jni::object_base<"com/sun/java/util/jar/pack/PropMap",
	java::lang::Object,
	java::util::SortedMap>
{
public:

	jni::ref<java::lang::String> put(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"put", jni::ref<java::lang::String>>(p1, p2); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::lang::String> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::String>>(p1); }
	void putAll(jni::ref<java::util::Map> p1) { return call_method<"putAll", void>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::SortedMap> subMap(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"subMap", jni::ref<java::util::SortedMap>>(p1, p2); }
	jni::ref<java::util::SortedMap> headMap(jni::ref<java::lang::String> p1) { return call_method<"headMap", jni::ref<java::util::SortedMap>>(p1); }
	jni::ref<java::util::SortedMap> tailMap(jni::ref<java::lang::String> p1) { return call_method<"tailMap", jni::ref<java::util::SortedMap>>(p1); }
	jni::ref<java::lang::String> firstKey() { return call_method<"firstKey", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> lastKey() { return call_method<"lastKey", jni::ref<java::lang::String>>(); }

protected:

	PropMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PROPMAP