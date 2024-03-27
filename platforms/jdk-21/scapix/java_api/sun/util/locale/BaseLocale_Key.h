// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_BASELOCALE_KEY_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_BASELOCALE_KEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale { class BaseLocale_Key; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::BaseLocale_Key>
{
	static constexpr fixed_string class_name = "sun/util/locale/BaseLocale$Key";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_BASELOCALE_KEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_BASELOCALE_KEY)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_BASELOCALE_KEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::BaseLocale_Key : public jni::object_base<"sun/util/locale/BaseLocale$Key",
	java::lang::Object>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	static jni::ref<sun::util::locale::BaseLocale_Key> normalize(jni::ref<sun::util::locale::BaseLocale_Key> key) { return call_static_method<"normalize", jni::ref<sun::util::locale::BaseLocale_Key>>(key); }

protected:

	BaseLocale_Key(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_BASELOCALE_KEY
