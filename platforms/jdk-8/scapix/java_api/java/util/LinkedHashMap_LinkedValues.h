// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractCollection.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDVALUES_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDVALUES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class LinkedHashMap_LinkedValues; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::LinkedHashMap_LinkedValues>
{
	static constexpr fixed_string class_name = "java/util/LinkedHashMap$LinkedValues";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractCollection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDVALUES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDVALUES)
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDVALUES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::LinkedHashMap_LinkedValues : public jni::object_base<"java/util/LinkedHashMap$LinkedValues",
	java::util::AbstractCollection>
{
public:

	jint size() { return call_method<"size", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	void forEach(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEach", void>(p1); }

protected:

	LinkedHashMap_LinkedValues(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_LINKEDVALUES
