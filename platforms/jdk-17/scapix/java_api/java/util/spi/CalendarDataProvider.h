// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/spi/LocaleServiceProvider.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPI_CALENDARDATAPROVIDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPI_CALENDARDATAPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::spi { class CalendarDataProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::spi::CalendarDataProvider>
{
	static constexpr fixed_string class_name = "java/util/spi/CalendarDataProvider";
	using base_classes = std::tuple<scapix::java_api::java::util::spi::LocaleServiceProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPI_CALENDARDATAPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPI_CALENDARDATAPROVIDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPI_CALENDARDATAPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::spi::CalendarDataProvider : public jni::object_base<"java/util/spi/CalendarDataProvider",
	java::util::spi::LocaleServiceProvider>
{
public:

	jint getFirstDayOfWeek(jni::ref<java::util::Locale> p1) { return call_method<"getFirstDayOfWeek", jint>(p1); }
	jint getMinimalDaysInFirstWeek(jni::ref<java::util::Locale> p1) { return call_method<"getMinimalDaysInFirstWeek", jint>(p1); }

protected:

	CalendarDataProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPI_CALENDARDATAPROVIDER
