// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ConcurrentHashMap_CollectionView.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_KEYSETVIEW_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_KEYSETVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentHashMap_KeySetView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentHashMap_KeySetView>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentHashMap$KeySetView";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ConcurrentHashMap_CollectionView, scapix::java_api::java::util::Set, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_KEYSETVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_KEYSETVIEW)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_KEYSETVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ConcurrentHashMap_KeySetView : public jni::object_base<"java/util/concurrent/ConcurrentHashMap$KeySetView",
	java::util::concurrent::ConcurrentHashMap_CollectionView,
	java::util::Set,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::Object> getMappedValue() { return call_method<"getMappedValue", jni::ref<java::lang::Object>>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jboolean addAll(jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(c); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }

protected:

	ConcurrentHashMap_KeySetView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_KEYSETVIEW
