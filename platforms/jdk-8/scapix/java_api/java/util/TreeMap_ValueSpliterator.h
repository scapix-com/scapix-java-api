// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/TreeMap_TreeMapSpliterator.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_VALUESPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_VALUESPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TreeMap_ValueSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TreeMap_ValueSpliterator>
{
	static constexpr fixed_string class_name = "java/util/TreeMap$ValueSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::util::TreeMap_TreeMapSpliterator, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_VALUESPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_VALUESPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_VALUESPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::TreeMap_ValueSpliterator : public jni::object_base<"java/util/TreeMap$ValueSpliterator",
	java::util::TreeMap_TreeMapSpliterator,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::TreeMap_ValueSpliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::TreeMap_ValueSpliterator>>(); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	TreeMap_ValueSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_VALUESPLITERATOR
