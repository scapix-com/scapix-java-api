// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JRELOCALEPROVIDERADAPTER_AVAILABLEJRELOCALES_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JRELOCALEPROVIDERADAPTER_AVAILABLEJRELOCALES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class JRELocaleProviderAdapter_AvailableJRELocales; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::JRELocaleProviderAdapter_AvailableJRELocales>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/JRELocaleProviderAdapter$AvailableJRELocales";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JRELOCALEPROVIDERADAPTER_AVAILABLEJRELOCALES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JRELOCALEPROVIDERADAPTER_AVAILABLEJRELOCALES)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JRELOCALEPROVIDERADAPTER_AVAILABLEJRELOCALES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::JRELocaleProviderAdapter_AvailableJRELocales : public jni::object_base<"sun/util/locale/provider/JRELocaleProviderAdapter$AvailableJRELocales",
	java::lang::Object>
{
public:


protected:

	JRELocaleProviderAdapter_AvailableJRELocales(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JRELOCALEPROVIDERADAPTER_AVAILABLEJRELOCALES
