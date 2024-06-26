// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/misc/Ref.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_CACHEENTRY_FWD
#define SCAPIX_JAVA_API_SUN_MISC_CACHEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class CacheEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::CacheEntry>
{
	static constexpr fixed_string class_name = "sun/misc/CacheEntry";
	using base_classes = std::tuple<scapix::java_api::sun::misc::Ref>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_CACHEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_CACHEENTRY)
#define SCAPIX_JAVA_API_SUN_MISC_CACHEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::CacheEntry : public jni::object_base<"sun/misc/CacheEntry",
	sun::misc::Ref>
{
public:

	jni::ref<java::lang::Object> reconstitute() { return call_method<"reconstitute", jni::ref<java::lang::Object>>(); }

protected:

	CacheEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_CACHEENTRY
