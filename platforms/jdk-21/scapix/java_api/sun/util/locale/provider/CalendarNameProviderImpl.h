// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/spi/CalendarNameProvider.h>
#include <scapix/java_api/sun/util/locale/provider/AvailableLanguageTags.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARNAMEPROVIDERIMPL_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARNAMEPROVIDERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class CalendarNameProviderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::CalendarNameProviderImpl>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/CalendarNameProviderImpl";
	using base_classes = std::tuple<scapix::java_api::java::util::spi::CalendarNameProvider, scapix::java_api::sun::util::locale::provider::AvailableLanguageTags>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARNAMEPROVIDERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARNAMEPROVIDERIMPL)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARNAMEPROVIDERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleProviderAdapter_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::provider::CalendarNameProviderImpl : public jni::object_base<"sun/util/locale/provider/CalendarNameProviderImpl",
	java::util::spi::CalendarNameProvider,
	sun::util::locale::provider::AvailableLanguageTags>
{
public:

	static jni::ref<sun::util::locale::provider::CalendarNameProviderImpl> new_object(jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type> type, jni::ref<java::util::Set> langtags) { return base_::new_object(type, langtags); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::lang::String> calendarType, jint field, jint value, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(calendarType, field, value, style, locale); }
	jni::ref<java::lang::String> getJavaTimeDisplayName(jni::ref<java::lang::String> calendarType, jint field, jint value, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getJavaTimeDisplayName", jni::ref<java::lang::String>>(calendarType, field, value, style, locale); }
	jni::ref<java::lang::String> getDisplayNameImpl(jni::ref<java::lang::String> calendarType, jint field, jint value, jint style, jni::ref<java::util::Locale> locale, jboolean javatime) { return call_method<"getDisplayNameImpl", jni::ref<java::lang::String>>(calendarType, field, value, style, locale, javatime); }
	jni::ref<java::util::Map> getDisplayNames(jni::ref<java::lang::String> calendarType, jint field, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayNames", jni::ref<java::util::Map>>(calendarType, field, style, locale); }
	jni::ref<java::util::Map> getJavaTimeDisplayNames(jni::ref<java::lang::String> calendarType, jint field, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getJavaTimeDisplayNames", jni::ref<java::util::Map>>(calendarType, field, style, locale); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::util::Set> getAvailableLanguageTags() { return call_method<"getAvailableLanguageTags", jni::ref<java::util::Set>>(); }

protected:

	CalendarNameProviderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARNAMEPROVIDERIMPL