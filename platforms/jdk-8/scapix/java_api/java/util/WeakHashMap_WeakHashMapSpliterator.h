// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_WEAKHASHMAPSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_WEAKHASHMAPSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class WeakHashMap_WeakHashMapSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::WeakHashMap_WeakHashMapSpliterator>
{
	static constexpr fixed_string class_name = "java/util/WeakHashMap$WeakHashMapSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_WEAKHASHMAPSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_WEAKHASHMAPSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_WEAKHASHMAPSPLITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::WeakHashMap_WeakHashMapSpliterator : public jni::object_base<"java/util/WeakHashMap$WeakHashMapSpliterator",
	java::lang::Object>
{
public:

	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }

protected:

	WeakHashMap_WeakHashMapSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_WEAKHASHMAPSPLITERATOR
