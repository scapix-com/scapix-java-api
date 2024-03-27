// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleServiceProviderPool_LocalizedObjectGetter.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_TIMEZONENAMEUTILITY_TIMEZONENAMEGETTER_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_TIMEZONENAMEUTILITY_TIMEZONENAMEGETTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class TimeZoneNameUtility_TimeZoneNameGetter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::TimeZoneNameUtility_TimeZoneNameGetter>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/TimeZoneNameUtility$TimeZoneNameGetter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_TIMEZONENAMEUTILITY_TIMEZONENAMEGETTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_TIMEZONENAMEUTILITY_TIMEZONENAMEGETTER)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_TIMEZONENAMEUTILITY_TIMEZONENAMEGETTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/spi/TimeZoneNameProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::TimeZoneNameUtility_TimeZoneNameGetter : public jni::object_base<"sun/util/locale/provider/TimeZoneNameUtility$TimeZoneNameGetter",
	java::lang::Object,
	sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>
{
public:

	jni::ref<java::lang::String> getObject(jni::ref<java::util::spi::TimeZoneNameProvider> timeZoneNameProvider, jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> requestID, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"getObject", jni::ref<java::lang::String>>(timeZoneNameProvider, locale, requestID, params); }

protected:

	TimeZoneNameUtility_TimeZoneNameGetter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_TIMEZONENAMEUTILITY_TIMEZONENAMEGETTER