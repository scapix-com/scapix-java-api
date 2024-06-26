// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_SetFromMap.h>
#include <scapix/java_api/java/util/SequencedSet.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SEQUENCEDSETFROMMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SEQUENCEDSETFROMMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_SequencedSetFromMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_SequencedSetFromMap>
{
	static constexpr fixed_string class_name = "java/util/Collections$SequencedSetFromMap";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_SetFromMap, scapix::java_api::java::util::SequencedSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SEQUENCEDSETFROMMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SEQUENCEDSETFROMMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SEQUENCEDSETFROMMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_SequencedSetFromMap : public jni::object_base<"java/util/Collections$SequencedSetFromMap",
	java::util::Collections_SetFromMap,
	java::util::SequencedSet>
{
public:

	jni::ref<java::util::SequencedSet> reversed() { return call_method<"reversed", jni::ref<java::util::SequencedSet>>(); }
	void addFirst(jni::ref<java::lang::Object> e) { return call_method<"addFirst", void>(e); }
	void addLast(jni::ref<java::lang::Object> e) { return call_method<"addLast", void>(e); }
	jni::ref<java::lang::Object> getFirst() { return call_method<"getFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getLast() { return call_method<"getLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeFirst() { return call_method<"removeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeLast() { return call_method<"removeLast", jni::ref<java::lang::Object>>(); }

protected:

	Collections_SequencedSetFromMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SEQUENCEDSETFROMMAP
