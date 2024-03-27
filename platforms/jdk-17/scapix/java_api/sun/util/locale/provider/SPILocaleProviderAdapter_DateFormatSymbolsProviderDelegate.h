// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/spi/DateFormatSymbolsProvider.h>
#include <scapix/java_api/sun/util/locale/provider/SPILocaleProviderAdapter_Delegate.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DATEFORMATSYMBOLSPROVIDERDELEGATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DATEFORMATSYMBOLSPROVIDERDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class SPILocaleProviderAdapter_DateFormatSymbolsProviderDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_DateFormatSymbolsProviderDelegate>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate";
	using base_classes = std::tuple<scapix::java_api::java::text::spi::DateFormatSymbolsProvider, scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DATEFORMATSYMBOLSPROVIDERDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DATEFORMATSYMBOLSPROVIDERDELEGATE)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DATEFORMATSYMBOLSPROVIDERDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/text/DateFormatSymbols.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::SPILocaleProviderAdapter_DateFormatSymbolsProviderDelegate : public jni::object_base<"sun/util/locale/provider/SPILocaleProviderAdapter$DateFormatSymbolsProviderDelegate",
	java::text::spi::DateFormatSymbolsProvider,
	sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>
{
public:

	jni::ref<java::util::Map> getDelegateMap() { return call_method<"getDelegateMap", jni::ref<java::util::Map>>(); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::text::DateFormatSymbols> getInstance(jni::ref<java::util::Locale> locale) { return call_method<"getInstance", jni::ref<java::text::DateFormatSymbols>>(locale); }

protected:

	SPILocaleProviderAdapter_DateFormatSymbolsProviderDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DATEFORMATSYMBOLSPROVIDERDELEGATE
