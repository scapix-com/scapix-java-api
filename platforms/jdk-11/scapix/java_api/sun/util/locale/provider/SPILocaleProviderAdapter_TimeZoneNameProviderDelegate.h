// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/spi/TimeZoneNameProvider.h>
#include <scapix/java_api/sun/util/locale/provider/SPILocaleProviderAdapter_Delegate.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_TIMEZONENAMEPROVIDERDELEGATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_TIMEZONENAMEPROVIDERDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class SPILocaleProviderAdapter_TimeZoneNameProviderDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_TimeZoneNameProviderDelegate>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/SPILocaleProviderAdapter$TimeZoneNameProviderDelegate";
	using base_classes = std::tuple<scapix::java_api::java::util::spi::TimeZoneNameProvider, scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_TIMEZONENAMEPROVIDERDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_TIMEZONENAMEPROVIDERDELEGATE)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_TIMEZONENAMEPROVIDERDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::SPILocaleProviderAdapter_TimeZoneNameProviderDelegate : public jni::object_base<"sun/util/locale/provider/SPILocaleProviderAdapter$TimeZoneNameProviderDelegate",
	java::util::spi::TimeZoneNameProvider,
	sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>
{
public:

	void addImpl(jni::ref<java::util::spi::TimeZoneNameProvider> impl) { return call_method<"addImpl", void>(impl); }
	jni::ref<java::util::spi::TimeZoneNameProvider> getImpl(jni::ref<java::util::Locale> locale) { return call_method<"getImpl", jni::ref<java::util::spi::TimeZoneNameProvider>>(locale); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::lang::String> ID, jboolean daylight, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(ID, daylight, style, locale); }
	jni::ref<java::lang::String> getGenericDisplayName(jni::ref<java::lang::String> ID, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getGenericDisplayName", jni::ref<java::lang::String>>(ID, style, locale); }

protected:

	SPILocaleProviderAdapter_TimeZoneNameProviderDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_TIMEZONENAMEPROVIDERDELEGATE
