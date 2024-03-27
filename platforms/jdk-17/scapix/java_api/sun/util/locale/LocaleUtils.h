// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEUTILS_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale { class LocaleUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::LocaleUtils>
{
	static constexpr fixed_string class_name = "sun/util/locale/LocaleUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEUTILS)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::LocaleUtils : public jni::object_base<"sun/util/locale/LocaleUtils",
	java::lang::Object>
{
public:

	static jboolean caseIgnoreMatch(jni::ref<java::lang::String> s1, jni::ref<java::lang::String> s2) { return call_static_method<"caseIgnoreMatch", jboolean>(s1, s2); }
	static jni::ref<java::lang::String> toLowerString(jni::ref<java::lang::String> s) { return call_static_method<"toLowerString", jni::ref<java::lang::String>>(s); }
	static jboolean isAlphaNumericString(jni::ref<java::lang::String> s) { return call_static_method<"isAlphaNumericString", jboolean>(s); }
	static jboolean isEmpty(jni::ref<java::lang::String> str) { return call_static_method<"isEmpty", jboolean>(str); }
	static jboolean isEmpty(jni::ref<java::util::Set> set) { return call_static_method<"isEmpty", jboolean>(set); }
	static jboolean isEmpty(jni::ref<java::util::Map> map) { return call_static_method<"isEmpty", jboolean>(map); }
	static jboolean isEmpty(jni::ref<java::util::List> list) { return call_static_method<"isEmpty", jboolean>(list); }

protected:

	LocaleUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_LOCALEUTILS
