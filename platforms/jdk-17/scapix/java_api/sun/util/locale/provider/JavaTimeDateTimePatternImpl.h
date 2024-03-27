// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <scapix/java_api/sun/util/locale/provider/AvailableLanguageTags.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JAVATIMEDATETIMEPATTERNIMPL_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JAVATIMEDATETIMEPATTERNIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class JavaTimeDateTimePatternImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::JavaTimeDateTimePatternImpl>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/JavaTimeDateTimePatternImpl";
	using base_classes = std::tuple<scapix::java_api::sun::text::spi::JavaTimeDateTimePatternProvider, scapix::java_api::sun::util::locale::provider::AvailableLanguageTags>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JAVATIMEDATETIMEPATTERNIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JAVATIMEDATETIMEPATTERNIMPL)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JAVATIMEDATETIMEPATTERNIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleProviderAdapter_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::provider::JavaTimeDateTimePatternImpl : public jni::object_base<"sun/util/locale/provider/JavaTimeDateTimePatternImpl",
	sun::text::spi::JavaTimeDateTimePatternProvider,
	sun::util::locale::provider::AvailableLanguageTags>
{
public:

	static jni::ref<sun::util::locale::provider::JavaTimeDateTimePatternImpl> new_object(jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type> type, jni::ref<java::util::Set> langtags) { return base_::new_object(type, langtags); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jboolean isSupportedLocale(jni::ref<java::util::Locale> locale) { return call_method<"isSupportedLocale", jboolean>(locale); }
	jni::ref<java::lang::String> getJavaTimeDateTimePattern(jint timeStyle, jint dateStyle, jni::ref<java::lang::String> calType, jni::ref<java::util::Locale> locale) { return call_method<"getJavaTimeDateTimePattern", jni::ref<java::lang::String>>(timeStyle, dateStyle, calType, locale); }
	jni::ref<java::util::Set> getAvailableLanguageTags() { return call_method<"getAvailableLanguageTags", jni::ref<java::util::Set>>(); }

protected:

	JavaTimeDateTimePatternImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_JAVATIMEDATETIMEPATTERNIMPL
