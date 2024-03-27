// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEY_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources { class Bundles_CacheKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::Bundles_CacheKey>
{
	static constexpr fixed_string class_name = "sun/util/resources/Bundles$CacheKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEY)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::resources::Bundles_CacheKey : public jni::object_base<"sun/util/resources/Bundles$CacheKey",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Bundles_CacheKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEY