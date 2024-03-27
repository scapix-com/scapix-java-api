// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEYREFERENCE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEYREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources { class Bundles_CacheKeyReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::Bundles_CacheKeyReference>
{
	static constexpr fixed_string class_name = "sun/util/resources/Bundles$CacheKeyReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEYREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEYREFERENCE)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEYREFERENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/util/resources/Bundles_CacheKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::resources::Bundles_CacheKeyReference : public jni::object_base<"sun/util/resources/Bundles$CacheKeyReference",
	java::lang::Object>
{
public:

	jni::ref<sun::util::resources::Bundles_CacheKey> getCacheKey() { return call_method<"getCacheKey", jni::ref<sun::util::resources::Bundles_CacheKey>>(); }

protected:

	Bundles_CacheKeyReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_BUNDLES_CACHEKEYREFERENCE