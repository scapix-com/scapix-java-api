// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/spi/BreakIteratorProvider.h>
#include <scapix/java_api/sun/util/locale/provider/SPILocaleProviderAdapter_Delegate.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_BREAKITERATORPROVIDERDELEGATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_BREAKITERATORPROVIDERDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class SPILocaleProviderAdapter_BreakIteratorProviderDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_BreakIteratorProviderDelegate>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/SPILocaleProviderAdapter$BreakIteratorProviderDelegate";
	using base_classes = std::tuple<scapix::java_api::java::text::spi::BreakIteratorProvider, scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_BREAKITERATORPROVIDERDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_BREAKITERATORPROVIDERDELEGATE)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_BREAKITERATORPROVIDERDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/text/BreakIterator.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::SPILocaleProviderAdapter_BreakIteratorProviderDelegate : public jni::object_base<"sun/util/locale/provider/SPILocaleProviderAdapter$BreakIteratorProviderDelegate",
	java::text::spi::BreakIteratorProvider,
	sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>
{
public:

	void addImpl(jni::ref<java::text::spi::BreakIteratorProvider> impl) { return call_method<"addImpl", void>(impl); }
	jni::ref<java::text::spi::BreakIteratorProvider> getImpl(jni::ref<java::util::Locale> locale) { return call_method<"getImpl", jni::ref<java::text::spi::BreakIteratorProvider>>(locale); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::text::BreakIterator> getWordInstance(jni::ref<java::util::Locale> locale) { return call_method<"getWordInstance", jni::ref<java::text::BreakIterator>>(locale); }
	jni::ref<java::text::BreakIterator> getLineInstance(jni::ref<java::util::Locale> locale) { return call_method<"getLineInstance", jni::ref<java::text::BreakIterator>>(locale); }
	jni::ref<java::text::BreakIterator> getCharacterInstance(jni::ref<java::util::Locale> locale) { return call_method<"getCharacterInstance", jni::ref<java::text::BreakIterator>>(locale); }
	jni::ref<java::text::BreakIterator> getSentenceInstance(jni::ref<java::util::Locale> locale) { return call_method<"getSentenceInstance", jni::ref<java::text::BreakIterator>>(locale); }

protected:

	SPILocaleProviderAdapter_BreakIteratorProviderDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_BREAKITERATORPROVIDERDELEGATE
