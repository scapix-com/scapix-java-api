// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/SortedSet.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDSETVIEW_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDSETVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ReverseOrderSortedSetView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ReverseOrderSortedSetView>
{
	static constexpr fixed_string class_name = "java/util/ReverseOrderSortedSetView";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::SortedSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDSETVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDSETVIEW)
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDSETVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/IntFunction.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ReverseOrderSortedSetView : public jni::object_base<"java/util/ReverseOrderSortedSetView",
	java::lang::Object,
	java::util::SortedSet>
{
public:

	static jni::ref<java::util::SortedSet> of(jni::ref<java::util::SortedSet> set) { return call_static_method<"of", jni::ref<java::util::SortedSet>>(set); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jboolean addAll(jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(c); }
	void clear() { return call_method<"clear", void>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jboolean containsAll(jni::ref<java::util::Collection> c) { return call_method<"containsAll", jboolean>(c); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::stream::Stream> parallelStream() { return call_method<"parallelStream", jni::ref<java::util::stream::Stream>>(); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean removeAll(jni::ref<java::util::Collection> c) { return call_method<"removeAll", jboolean>(c); }
	jboolean retainAll(jni::ref<java::util::Collection> c) { return call_method<"retainAll", jboolean>(c); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::stream::Stream> stream() { return call_method<"stream", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<java::util::function::IntFunction> generator) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(generator); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::lang::Object> first() { return call_method<"first", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> last() { return call_method<"last", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::SortedSet> headSet(jni::ref<java::lang::Object> to) { return call_method<"headSet", jni::ref<java::util::SortedSet>>(to); }
	jni::ref<java::util::SortedSet> subSet(jni::ref<java::lang::Object> from, jni::ref<java::lang::Object> to) { return call_method<"subSet", jni::ref<java::util::SortedSet>>(from, to); }
	jni::ref<java::util::SortedSet> tailSet(jni::ref<java::lang::Object> from) { return call_method<"tailSet", jni::ref<java::util::SortedSet>>(from); }

protected:

	ReverseOrderSortedSetView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDSETVIEW
