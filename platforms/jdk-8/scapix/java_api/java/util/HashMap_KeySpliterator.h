// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/HashMap_HashMapSpliterator.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_KEYSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_KEYSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class HashMap_KeySpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::HashMap_KeySpliterator>
{
	static constexpr fixed_string class_name = "java/util/HashMap$KeySpliterator";
	using base_classes = std::tuple<scapix::java_api::java::util::HashMap_HashMapSpliterator, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_KEYSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_KEYSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_KEYSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::HashMap_KeySpliterator : public jni::object_base<"java/util/HashMap$KeySpliterator",
	java::util::HashMap_HashMapSpliterator,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::HashMap_KeySpliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::HashMap_KeySpliterator>>(); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	HashMap_KeySpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_KEYSPLITERATOR
