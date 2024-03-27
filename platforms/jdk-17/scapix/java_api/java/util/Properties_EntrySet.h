// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Set.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_ENTRYSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_ENTRYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Properties_EntrySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Properties_EntrySet>
{
	static constexpr fixed_string class_name = "java/util/Properties$EntrySet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Set>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_ENTRYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_ENTRYSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_ENTRYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Properties_EntrySet : public jni::object_base<"java/util/Properties$EntrySet",
	java::lang::Object,
	java::util::Set>
{
public:

	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	void clear() { return call_method<"clear", void>(); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean add(jni::ref<java::util::Map_Entry> e) { return call_method<"add", jboolean>(e); }
	jboolean addAll(jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(c); }
	jboolean containsAll(jni::ref<java::util::Collection> c) { return call_method<"containsAll", jboolean>(c); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean removeAll(jni::ref<java::util::Collection> c) { return call_method<"removeAll", jboolean>(c); }
	jboolean retainAll(jni::ref<java::util::Collection> c) { return call_method<"retainAll", jboolean>(c); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }

protected:

	Properties_EntrySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_ENTRYSET
