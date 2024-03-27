// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/WeakHashMap_WeakHashMapSpliterator.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_ENTRYSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_ENTRYSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class WeakHashMap_EntrySpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::WeakHashMap_EntrySpliterator>
{
	static constexpr fixed_string class_name = "java/util/WeakHashMap$EntrySpliterator";
	using base_classes = std::tuple<scapix::java_api::java::util::WeakHashMap_WeakHashMapSpliterator, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_ENTRYSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_ENTRYSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_ENTRYSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::WeakHashMap_EntrySpliterator : public jni::object_base<"java/util/WeakHashMap$EntrySpliterator",
	java::util::WeakHashMap_WeakHashMapSpliterator,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::WeakHashMap_EntrySpliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::WeakHashMap_EntrySpliterator>>(); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> action) { return call_method<"forEachRemaining", void>(action); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	WeakHashMap_EntrySpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_ENTRYSPLITERATOR
