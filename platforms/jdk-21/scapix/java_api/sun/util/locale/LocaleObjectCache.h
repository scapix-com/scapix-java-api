// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale { class LocaleObjectCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::LocaleObjectCache>
{
	static constexpr fixed_string class_name = "sun/util/locale/LocaleObjectCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::LocaleObjectCache : public jni::object_base<"sun/util/locale/LocaleObjectCache",
	java::lang::Object>
{
public:

	static jni::ref<sun::util::locale::LocaleObjectCache> new_object() { return base_::new_object(); }
	static jni::ref<sun::util::locale::LocaleObjectCache> new_object(jint initialCapacity, jfloat loadFactor, jint concurrencyLevel) { return base_::new_object(initialCapacity, loadFactor, concurrencyLevel); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }

protected:

	LocaleObjectCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEOBJECTCACHE
