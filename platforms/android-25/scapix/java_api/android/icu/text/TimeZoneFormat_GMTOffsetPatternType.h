// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class TimeZoneFormat_GMTOffsetPatternType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::TimeZoneFormat_GMTOffsetPatternType>
{
	static constexpr fixed_string class_name = "android/icu/text/TimeZoneFormat$GMTOffsetPatternType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::TimeZoneFormat_GMTOffsetPatternType : public jni::object_base<"android/icu/text/TimeZoneFormat$GMTOffsetPatternType",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> NEGATIVE_H() { return get_static_field<"NEGATIVE_H", jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> NEGATIVE_HM() { return get_static_field<"NEGATIVE_HM", jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> NEGATIVE_HMS() { return get_static_field<"NEGATIVE_HMS", jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> POSITIVE_H() { return get_static_field<"POSITIVE_H", jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> POSITIVE_HM() { return get_static_field<"POSITIVE_HM", jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> POSITIVE_HMS() { return get_static_field<"POSITIVE_HMS", jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>(); }

	static jni::ref<jni::array<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType>>(name); }

protected:

	TimeZoneFormat_GMTOffsetPatternType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_GMTOFFSETPATTERNTYPE