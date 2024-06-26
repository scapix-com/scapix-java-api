// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractCollection.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_VALUES_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_VALUES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class HashMap_Values; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::HashMap_Values>
{
	static constexpr fixed_string class_name = "java/util/HashMap$Values";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractCollection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_VALUES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_VALUES)
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_VALUES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::HashMap_Values : public jni::object_base<"java/util/HashMap$Values",
	java::util::AbstractCollection>
{
public:

	jint size() { return call_method<"size", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }

protected:

	HashMap_Values(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_VALUES
