// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_UnmodifiableSet.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_UnmodifiableMap_UnmodifiableEntrySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet>
{
	static constexpr fixed_string class_name = "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_UnmodifiableSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet : public jni::object_base<"java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet",
	java::util::Collections_UnmodifiableSet>
{
public:

	void forEach(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEach", void>(p1); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	jni::ref<java::util::stream::Stream> stream() { return call_method<"stream", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> parallelStream() { return call_method<"parallelStream", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean containsAll(jni::ref<java::util::Collection> p1) { return call_method<"containsAll", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	Collections_UnmodifiableMap_UnmodifiableEntrySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET