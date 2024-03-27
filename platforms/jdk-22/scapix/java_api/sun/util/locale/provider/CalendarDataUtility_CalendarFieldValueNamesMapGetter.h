// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleServiceProviderPool_LocalizedObjectGetter.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARFIELDVALUENAMESMAPGETTER_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARFIELDVALUENAMESMAPGETTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class CalendarDataUtility_CalendarFieldValueNamesMapGetter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::CalendarDataUtility_CalendarFieldValueNamesMapGetter>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNamesMapGetter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARFIELDVALUENAMESMAPGETTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARFIELDVALUENAMESMAPGETTER)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARFIELDVALUENAMESMAPGETTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/spi/CalendarNameProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::CalendarDataUtility_CalendarFieldValueNamesMapGetter : public jni::object_base<"sun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNamesMapGetter",
	java::lang::Object,
	sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>
{
public:

	jni::ref<java::util::Map> getObject(jni::ref<java::util::spi::CalendarNameProvider> calendarNameProvider, jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> requestID, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"getObject", jni::ref<java::util::Map>>(calendarNameProvider, locale, requestID, params); }

protected:

	CalendarDataUtility_CalendarFieldValueNamesMapGetter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARFIELDVALUENAMESMAPGETTER
