// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/spi/NumberFormatProvider.h>
#include <scapix/java_api/sun/util/locale/provider/SPILocaleProviderAdapter_Delegate.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_NUMBERFORMATPROVIDERDELEGATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_NUMBERFORMATPROVIDERDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class SPILocaleProviderAdapter_NumberFormatProviderDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_NumberFormatProviderDelegate>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/SPILocaleProviderAdapter$NumberFormatProviderDelegate";
	using base_classes = std::tuple<scapix::java_api::java::text::spi::NumberFormatProvider, scapix::java_api::sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_NUMBERFORMATPROVIDERDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_NUMBERFORMATPROVIDERDELEGATE)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_NUMBERFORMATPROVIDERDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/text/NumberFormat.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::SPILocaleProviderAdapter_NumberFormatProviderDelegate : public jni::object_base<"sun/util/locale/provider/SPILocaleProviderAdapter$NumberFormatProviderDelegate",
	java::text::spi::NumberFormatProvider,
	sun::util::locale::provider::SPILocaleProviderAdapter_Delegate>
{
public:

	void addImpl(jni::ref<java::text::spi::NumberFormatProvider> impl) { return call_method<"addImpl", void>(impl); }
	jni::ref<java::text::spi::NumberFormatProvider> getImpl(jni::ref<java::util::Locale> locale) { return call_method<"getImpl", jni::ref<java::text::spi::NumberFormatProvider>>(locale); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::text::NumberFormat> getCurrencyInstance(jni::ref<java::util::Locale> locale) { return call_method<"getCurrencyInstance", jni::ref<java::text::NumberFormat>>(locale); }
	jni::ref<java::text::NumberFormat> getIntegerInstance(jni::ref<java::util::Locale> locale) { return call_method<"getIntegerInstance", jni::ref<java::text::NumberFormat>>(locale); }
	jni::ref<java::text::NumberFormat> getNumberInstance(jni::ref<java::util::Locale> locale) { return call_method<"getNumberInstance", jni::ref<java::text::NumberFormat>>(locale); }
	jni::ref<java::text::NumberFormat> getPercentInstance(jni::ref<java::util::Locale> locale) { return call_method<"getPercentInstance", jni::ref<java::text::NumberFormat>>(locale); }

protected:

	SPILocaleProviderAdapter_NumberFormatProviderDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_SPILOCALEPROVIDERADAPTER_NUMBERFORMATPROVIDERDELEGATE
