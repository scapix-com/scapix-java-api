// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>
#include <scapix/java_api/java/util/SequencedSet.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDKEYSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDKEYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class LinkedHashMap_LinkedKeySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::LinkedHashMap_LinkedKeySet>
{
	static constexpr fixed_string class_name = "java/util/LinkedHashMap$LinkedKeySet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet, scapix::java_api::java::util::SequencedSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDKEYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDKEYSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDKEYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::LinkedHashMap_LinkedKeySet : public jni::object_base<"java/util/LinkedHashMap$LinkedKeySet",
	java::util::AbstractSet,
	java::util::SequencedSet>
{
public:

	jint size() { return call_method<"size", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jboolean remove(jni::ref<java::lang::Object> key) { return call_method<"remove", jboolean>(key); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	void addFirst(jni::ref<java::lang::Object> k) { return call_method<"addFirst", void>(k); }
	void addLast(jni::ref<java::lang::Object> k) { return call_method<"addLast", void>(k); }
	jni::ref<java::lang::Object> getFirst() { return call_method<"getFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getLast() { return call_method<"getLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeFirst() { return call_method<"removeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeLast() { return call_method<"removeLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::SequencedSet> reversed() { return call_method<"reversed", jni::ref<java::util::SequencedSet>>(); }

protected:

	LinkedHashMap_LinkedKeySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDKEYSET