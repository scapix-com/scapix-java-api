// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_LOCALEPROVIDERADAPTER_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_LOCALEPROVIDERADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class LocaleProviderAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::LocaleProviderAdapter>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/LocaleProviderAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_LOCALEPROVIDERADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_LOCALEPROVIDERADAPTER)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_LOCALEPROVIDERADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/text/spi/BreakIteratorProvider.h>
#include <scapix/java_api/java/text/spi/CollatorProvider.h>
#include <scapix/java_api/java/text/spi/DateFormatProvider.h>
#include <scapix/java_api/java/text/spi/DateFormatSymbolsProvider.h>
#include <scapix/java_api/java/text/spi/DecimalFormatSymbolsProvider.h>
#include <scapix/java_api/java/text/spi/NumberFormatProvider.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/spi/CalendarDataProvider.h>
#include <scapix/java_api/java/util/spi/CalendarNameProvider.h>
#include <scapix/java_api/java/util/spi/CurrencyNameProvider.h>
#include <scapix/java_api/java/util/spi/LocaleNameProvider.h>
#include <scapix/java_api/java/util/spi/LocaleServiceProvider.h>
#include <scapix/java_api/java/util/spi/TimeZoneNameProvider.h>
#include <scapix/java_api/sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleProviderAdapter_Type.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleResources.h>
#include <scapix/java_api/sun/util/spi/CalendarProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::provider::LocaleProviderAdapter : public jni::object_base<"sun/util/locale/provider/LocaleProviderAdapter",
	java::lang::Object>
{
public:

	using Type = LocaleProviderAdapter_Type;

	static jni::ref<sun::util::locale::provider::LocaleProviderAdapter> new_object() { return base_::new_object(); }
	static jni::ref<sun::util::locale::provider::LocaleProviderAdapter> forType(jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type> type) { return call_static_method<"forType", jni::ref<sun::util::locale::provider::LocaleProviderAdapter>>(type); }
	static jni::ref<sun::util::locale::provider::LocaleProviderAdapter> forJRE() { return call_static_method<"forJRE", jni::ref<sun::util::locale::provider::LocaleProviderAdapter>>(); }
	static jni::ref<sun::util::locale::provider::LocaleProviderAdapter> getResourceBundleBased() { return call_static_method<"getResourceBundleBased", jni::ref<sun::util::locale::provider::LocaleProviderAdapter>>(); }
	static jni::ref<java::util::List> getAdapterPreference() { return call_static_method<"getAdapterPreference", jni::ref<java::util::List>>(); }
	static jni::ref<sun::util::locale::provider::LocaleProviderAdapter> getAdapter(jni::ref<java::lang::Class> providerClass, jni::ref<java::util::Locale> locale) { return call_static_method<"getAdapter", jni::ref<sun::util::locale::provider::LocaleProviderAdapter>>(providerClass, locale); }
	jboolean isSupportedProviderLocale(jni::ref<java::util::Locale> locale, jni::ref<java::util::Set> langtags) { return call_method<"isSupportedProviderLocale", jboolean>(locale, langtags); }
	static jni::ref<jni::array<java::util::Locale>> toLocaleArray(jni::ref<java::util::Set> tags) { return call_static_method<"toLocaleArray", jni::ref<jni::array<java::util::Locale>>>(tags); }
	jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type> getAdapterType() { return call_method<"getAdapterType", jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type>>(); }
	jni::ref<java::util::spi::LocaleServiceProvider> getLocaleServiceProvider(jni::ref<java::lang::Class> p1) { return call_method<"getLocaleServiceProvider", jni::ref<java::util::spi::LocaleServiceProvider>>(p1); }
	jni::ref<java::text::spi::BreakIteratorProvider> getBreakIteratorProvider() { return call_method<"getBreakIteratorProvider", jni::ref<java::text::spi::BreakIteratorProvider>>(); }
	jni::ref<java::text::spi::CollatorProvider> getCollatorProvider() { return call_method<"getCollatorProvider", jni::ref<java::text::spi::CollatorProvider>>(); }
	jni::ref<java::text::spi::DateFormatProvider> getDateFormatProvider() { return call_method<"getDateFormatProvider", jni::ref<java::text::spi::DateFormatProvider>>(); }
	jni::ref<java::text::spi::DateFormatSymbolsProvider> getDateFormatSymbolsProvider() { return call_method<"getDateFormatSymbolsProvider", jni::ref<java::text::spi::DateFormatSymbolsProvider>>(); }
	jni::ref<java::text::spi::DecimalFormatSymbolsProvider> getDecimalFormatSymbolsProvider() { return call_method<"getDecimalFormatSymbolsProvider", jni::ref<java::text::spi::DecimalFormatSymbolsProvider>>(); }
	jni::ref<java::text::spi::NumberFormatProvider> getNumberFormatProvider() { return call_method<"getNumberFormatProvider", jni::ref<java::text::spi::NumberFormatProvider>>(); }
	jni::ref<java::util::spi::CurrencyNameProvider> getCurrencyNameProvider() { return call_method<"getCurrencyNameProvider", jni::ref<java::util::spi::CurrencyNameProvider>>(); }
	jni::ref<java::util::spi::LocaleNameProvider> getLocaleNameProvider() { return call_method<"getLocaleNameProvider", jni::ref<java::util::spi::LocaleNameProvider>>(); }
	jni::ref<java::util::spi::TimeZoneNameProvider> getTimeZoneNameProvider() { return call_method<"getTimeZoneNameProvider", jni::ref<java::util::spi::TimeZoneNameProvider>>(); }
	jni::ref<java::util::spi::CalendarDataProvider> getCalendarDataProvider() { return call_method<"getCalendarDataProvider", jni::ref<java::util::spi::CalendarDataProvider>>(); }
	jni::ref<java::util::spi::CalendarNameProvider> getCalendarNameProvider() { return call_method<"getCalendarNameProvider", jni::ref<java::util::spi::CalendarNameProvider>>(); }
	jni::ref<sun::util::spi::CalendarProvider> getCalendarProvider() { return call_method<"getCalendarProvider", jni::ref<sun::util::spi::CalendarProvider>>(); }
	jni::ref<sun::text::spi::JavaTimeDateTimePatternProvider> getJavaTimeDateTimePatternProvider() { return call_method<"getJavaTimeDateTimePatternProvider", jni::ref<sun::text::spi::JavaTimeDateTimePatternProvider>>(); }
	jni::ref<sun::util::locale::provider::LocaleResources> getLocaleResources(jni::ref<java::util::Locale> p1) { return call_method<"getLocaleResources", jni::ref<sun::util::locale::provider::LocaleResources>>(p1); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }

protected:

	LocaleProviderAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_LOCALEPROVIDERADAPTER
