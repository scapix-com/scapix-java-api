// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/SoftReference.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_CACHEENTRY_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_CACHEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale { class LocaleObjectCache_CacheEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::LocaleObjectCache_CacheEntry>
{
	static constexpr fixed_string class_name = "sun/util/locale/LocaleObjectCache$CacheEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::SoftReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_CACHEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_CACHEENTRY)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_CACHEENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::LocaleObjectCache_CacheEntry : public jni::object_base<"sun/util/locale/LocaleObjectCache$CacheEntry",
	java::lang::ref::SoftReference>
{
public:


protected:

	LocaleObjectCache_CacheEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_CACHEENTRY
