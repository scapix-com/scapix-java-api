// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEMATCHER_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEMATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale { class LocaleMatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::LocaleMatcher>
{
	static constexpr fixed_string class_name = "sun/util/locale/LocaleMatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEMATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEMATCHER)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEMATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Locale_FilteringMode.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::LocaleMatcher : public jni::object_base<"sun/util/locale/LocaleMatcher",
	java::lang::Object>
{
public:

	static jni::ref<java::util::List> filter(jni::ref<java::util::List> p1, jni::ref<java::util::Collection> p2, jni::ref<java::util::Locale_FilteringMode> p3) { return call_static_method<"filter", jni::ref<java::util::List>>(p1, p2, p3); }
	static jni::ref<java::util::List> filterTags(jni::ref<java::util::List> p1, jni::ref<java::util::Collection> p2, jni::ref<java::util::Locale_FilteringMode> p3) { return call_static_method<"filterTags", jni::ref<java::util::List>>(p1, p2, p3); }
	static jni::ref<java::util::Locale> lookup(jni::ref<java::util::List> p1, jni::ref<java::util::Collection> p2) { return call_static_method<"lookup", jni::ref<java::util::Locale>>(p1, p2); }
	static jni::ref<java::lang::String> lookupTag(jni::ref<java::util::List> p1, jni::ref<java::util::Collection> p2) { return call_static_method<"lookupTag", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<java::util::List> parse(jni::ref<java::lang::String> p1) { return call_static_method<"parse", jni::ref<java::util::List>>(p1); }
	static jni::ref<java::util::List> mapEquivalents(jni::ref<java::util::List> p1, jni::ref<java::util::Map> p2) { return call_static_method<"mapEquivalents", jni::ref<java::util::List>>(p1, p2); }

protected:

	LocaleMatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEMATCHER