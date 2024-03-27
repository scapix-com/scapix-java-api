// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/TreeMap_NavigableSubMap_SubMapIterator.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_SUBMAPKEYITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_SUBMAPKEYITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TreeMap_NavigableSubMap_SubMapKeyIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TreeMap_NavigableSubMap_SubMapKeyIterator>
{
	static constexpr fixed_string class_name = "java/util/TreeMap$NavigableSubMap$SubMapKeyIterator";
	using base_classes = std::tuple<scapix::java_api::java::util::TreeMap_NavigableSubMap_SubMapIterator, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_SUBMAPKEYITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_SUBMAPKEYITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_SUBMAPKEYITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::TreeMap_NavigableSubMap_SubMapKeyIterator : public jni::object_base<"java/util/TreeMap$NavigableSubMap$SubMapKeyIterator",
	java::util::TreeMap_NavigableSubMap_SubMapIterator,
	java::util::Spliterator>
{
public:

	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void remove() { return call_method<"remove", void>(); }
	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }

protected:

	TreeMap_NavigableSubMap_SubMapKeyIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_SUBMAPKEYITERATOR