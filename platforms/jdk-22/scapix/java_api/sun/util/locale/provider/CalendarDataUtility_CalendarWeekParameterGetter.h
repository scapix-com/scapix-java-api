// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleServiceProviderPool_LocalizedObjectGetter.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARWEEKPARAMETERGETTER_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARWEEKPARAMETERGETTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale::provider { class CalendarDataUtility_CalendarWeekParameterGetter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::provider::CalendarDataUtility_CalendarWeekParameterGetter>
{
	static constexpr fixed_string class_name = "sun/util/locale/provider/CalendarDataUtility$CalendarWeekParameterGetter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARWEEKPARAMETERGETTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARWEEKPARAMETERGETTER)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARWEEKPARAMETERGETTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/spi/CalendarDataProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::provider::CalendarDataUtility_CalendarWeekParameterGetter : public jni::object_base<"sun/util/locale/provider/CalendarDataUtility$CalendarWeekParameterGetter",
	java::lang::Object,
	sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>
{
public:

	jni::ref<java::lang::Integer> getObject(jni::ref<java::util::spi::CalendarDataProvider> calendarDataProvider, jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> requestID, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"getObject", jni::ref<java::lang::Integer>>(calendarDataProvider, locale, requestID, params); }

protected:

	CalendarDataUtility_CalendarWeekParameterGetter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_PROVIDER_CALENDARDATAUTILITY_CALENDARWEEKPARAMETERGETTER