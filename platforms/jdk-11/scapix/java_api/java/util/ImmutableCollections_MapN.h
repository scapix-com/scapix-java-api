// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ImmutableCollections_AbstractImmutableMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_MAPN_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_MAPN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ImmutableCollections_MapN; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ImmutableCollections_MapN>
{
	static constexpr fixed_string class_name = "java/util/ImmutableCollections$MapN";
	using base_classes = std::tuple<scapix::java_api::java::util::ImmutableCollections_AbstractImmutableMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_MAPN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_MAPN)
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_MAPN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ImmutableCollections_MapN : public jni::object_base<"java/util/ImmutableCollections$MapN",
	java::util::ImmutableCollections_AbstractImmutableMap>
{
public:

	jboolean containsKey(jni::ref<java::lang::Object> o) { return call_method<"containsKey", jboolean>(o); }
	jboolean containsValue(jni::ref<java::lang::Object> o) { return call_method<"containsValue", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> o) { return call_method<"get", jni::ref<java::lang::Object>>(o); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }

protected:

	ImmutableCollections_MapN(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_MAPN
