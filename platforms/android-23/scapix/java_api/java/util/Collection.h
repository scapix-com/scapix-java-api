// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collection>
{
	static constexpr fixed_string class_name = "java/util/Collection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Collection : public jni::object_base<"java/util/Collection",
	java::lang::Object,
	java::lang::Iterable>
{
public:

	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean addAll(jni::ref<java::util::Collection> p1) { return call_method<"addAll", jboolean>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean containsAll(jni::ref<java::util::Collection> p1) { return call_method<"containsAll", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean removeAll(jni::ref<java::util::Collection> p1) { return call_method<"removeAll", jboolean>(p1); }
	jboolean retainAll(jni::ref<java::util::Collection> p1) { return call_method<"retainAll", jboolean>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }

protected:

	Collection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTION
