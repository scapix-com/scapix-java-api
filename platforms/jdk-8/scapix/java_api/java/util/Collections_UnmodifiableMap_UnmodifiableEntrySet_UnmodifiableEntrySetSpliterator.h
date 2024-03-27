// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRYSETSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRYSETSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator>
{
	static constexpr fixed_string class_name = "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRYSETSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRYSETSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRYSETSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator : public jni::object_base<"java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator",
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jboolean tryAdvance(jni::ref<java::util::function::Consumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jlong getExactSizeIfKnown() { return call_method<"getExactSizeIfKnown", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jboolean hasCharacteristics(jint p1) { return call_method<"hasCharacteristics", jboolean>(p1); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }

protected:

	Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRYSETSPLITERATOR