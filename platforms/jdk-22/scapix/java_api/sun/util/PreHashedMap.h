// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_PREHASHEDMAP_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_PREHASHEDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util { class PreHashedMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::PreHashedMap>
{
	static constexpr fixed_string class_name = "sun/util/PreHashedMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_PREHASHEDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_PREHASHEDMAP)
#define SCAPIX_JAVA_API_SUN_UTIL_PREHASHEDMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::PreHashedMap : public jni::object_base<"sun/util/PreHashedMap",
	java::util::AbstractMap>
{
public:

	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> k) { return call_method<"get", jni::ref<java::lang::Object>>(k); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::String> k, jni::ref<java::lang::Object> v) { return call_method<"put", jni::ref<java::lang::Object>>(k, v); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }

protected:

	PreHashedMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_PREHASHEDMAP
