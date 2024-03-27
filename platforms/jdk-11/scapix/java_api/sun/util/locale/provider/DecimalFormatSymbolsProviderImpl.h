// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/spi/DecimalFormatSymbolsProvider.h>
#include <scapix/java_api/sun/util/locale/provider/AvailableLanguageTags.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_DECIMALFORMATSYMBOLSPROVIDERIMPL_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_DECIMALFORMATSYMBOLSPROVIDERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class DecimalFormatSymbolsProviderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::DecimalFormatSymbolsProviderImpl>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/DecimalFormatSymbolsProviderImpl";
	using base_classes = std::tuple<scapix::java_api::java::text::spi::DecimalFormatSymbolsProvider, scapix::java_api::sun::util::locale::provider::AvailableLanguageTags>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_DECIMALFORMATSYMBOLSPROVIDERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_DECIMALFORMATSYMBOLSPROVIDERIMPL)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_DECIMALFORMATSYMBOLSPROVIDERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/text/DecimalFormatSymbols.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleProviderAdapter_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::provider::DecimalFormatSymbolsProviderImpl : public jni::object_base<"sun/util/locale/provider/DecimalFormatSymbolsProviderImpl",
	java::text::spi::DecimalFormatSymbolsProvider,
	sun::util::locale::provider::AvailableLanguageTags>
{
public:

	static jni::ref<sun::util::locale::provider::DecimalFormatSymbolsProviderImpl> new_object(jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type> type, jni::ref<java::util::Set> langtags) { return base_::new_object(type, langtags); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::text::DecimalFormatSymbols> getInstance(jni::ref<java::util::Locale> locale) { return call_method<"getInstance", jni::ref<java::text::DecimalFormatSymbols>>(locale); }
	jni::ref<java::util::Set> getAvailableLanguageTags() { return call_method<"getAvailableLanguageTags", jni::ref<java::util::Set>>(); }

protected:

	DecimalFormatSymbolsProviderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_DECIMALFORMATSYMBOLSPROVIDERIMPL
