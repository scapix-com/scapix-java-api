// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/spi/DecimalFormatSymbolsProvider.h>
#include <scapix/java_api/sun/util/locale/provider/SPILocaleProviderAdapter_Delegate.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DECIMALFORMATSYMBOLSPROVIDERDELEGATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DECIMALFORMATSYMBOLSPROVIDERDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class SPILocaleProviderAdapter_DecimalFormatSymbolsProviderDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_DecimalFormatSymbolsProviderDelegate>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate";
	using base_classes = std::tuple<scapix::java_api::java::text::spi::DecimalFormatSymbolsProvider, scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DECIMALFORMATSYMBOLSPROVIDERDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DECIMALFORMATSYMBOLSPROVIDERDELEGATE)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DECIMALFORMATSYMBOLSPROVIDERDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/text/DecimalFormatSymbols.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::SPILocaleProviderAdapter_DecimalFormatSymbolsProviderDelegate : public jni::object_base<"sun/util/locale/provider/SPILocaleProviderAdapter$DecimalFormatSymbolsProviderDelegate",
	java::text::spi::DecimalFormatSymbolsProvider,
	sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>
{
public:

	void addImpl(jni::ref<java::text::spi::DecimalFormatSymbolsProvider> impl) { return call_method<"addImpl", void>(impl); }
	jni::ref<java::text::spi::DecimalFormatSymbolsProvider> getImpl(jni::ref<java::util::Locale> locale) { return call_method<"getImpl", jni::ref<java::text::spi::DecimalFormatSymbolsProvider>>(locale); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::text::DecimalFormatSymbols> getInstance(jni::ref<java::util::Locale> locale) { return call_method<"getInstance", jni::ref<java::text::DecimalFormatSymbols>>(locale); }

protected:

	SPILocaleProviderAdapter_DecimalFormatSymbolsProviderDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_DECIMALFORMATSYMBOLSPROVIDERDELEGATE
