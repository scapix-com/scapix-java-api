// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class TimeZoneFormat_ParseOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::TimeZoneFormat_ParseOption>
{
	static constexpr fixed_string class_name = "android/icu/text/TimeZoneFormat$ParseOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::TimeZoneFormat_ParseOption : public jni::object_base<"android/icu/text/TimeZoneFormat$ParseOption",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::TimeZoneFormat_ParseOption> ALL_STYLES() { return get_static_field<"ALL_STYLES", jni::ref<android::icu::text::TimeZoneFormat_ParseOption>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_ParseOption> TZ_DATABASE_ABBREVIATIONS() { return get_static_field<"TZ_DATABASE_ABBREVIATIONS", jni::ref<android::icu::text::TimeZoneFormat_ParseOption>>(); }

	static jni::ref<jni::array<android::icu::text::TimeZoneFormat_ParseOption>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::TimeZoneFormat_ParseOption>>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_ParseOption> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::TimeZoneFormat_ParseOption>>(name); }

protected:

	TimeZoneFormat_ParseOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_PARSEOPTION
