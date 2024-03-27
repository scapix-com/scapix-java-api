// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class TimeZoneFormat_Style; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::TimeZoneFormat_Style>
{
	static constexpr fixed_string class_name = "android/icu/text/TimeZoneFormat$Style";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::TimeZoneFormat_Style : public jni::object_base<"android/icu/text/TimeZoneFormat$Style",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::TimeZoneFormat_Style> EXEMPLAR_LOCATION() { return get_static_field<"EXEMPLAR_LOCATION", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> GENERIC_LOCATION() { return get_static_field<"GENERIC_LOCATION", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> GENERIC_LONG() { return get_static_field<"GENERIC_LONG", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> GENERIC_SHORT() { return get_static_field<"GENERIC_SHORT", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_BASIC_FIXED() { return get_static_field<"ISO_BASIC_FIXED", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_BASIC_FULL() { return get_static_field<"ISO_BASIC_FULL", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_BASIC_LOCAL_FIXED() { return get_static_field<"ISO_BASIC_LOCAL_FIXED", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_BASIC_LOCAL_FULL() { return get_static_field<"ISO_BASIC_LOCAL_FULL", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_BASIC_LOCAL_SHORT() { return get_static_field<"ISO_BASIC_LOCAL_SHORT", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_BASIC_SHORT() { return get_static_field<"ISO_BASIC_SHORT", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_EXTENDED_FIXED() { return get_static_field<"ISO_EXTENDED_FIXED", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_EXTENDED_FULL() { return get_static_field<"ISO_EXTENDED_FULL", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_EXTENDED_LOCAL_FIXED() { return get_static_field<"ISO_EXTENDED_LOCAL_FIXED", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ISO_EXTENDED_LOCAL_FULL() { return get_static_field<"ISO_EXTENDED_LOCAL_FULL", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> LOCALIZED_GMT() { return get_static_field<"LOCALIZED_GMT", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> LOCALIZED_GMT_SHORT() { return get_static_field<"LOCALIZED_GMT_SHORT", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> SPECIFIC_LONG() { return get_static_field<"SPECIFIC_LONG", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> SPECIFIC_SHORT() { return get_static_field<"SPECIFIC_SHORT", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ZONE_ID() { return get_static_field<"ZONE_ID", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> ZONE_ID_SHORT() { return get_static_field<"ZONE_ID_SHORT", jni::ref<android::icu::text::TimeZoneFormat_Style>>(); }

	static jni::ref<jni::array<android::icu::text::TimeZoneFormat_Style>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::TimeZoneFormat_Style>>>(); }
	static jni::ref<android::icu::text::TimeZoneFormat_Style> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::TimeZoneFormat_Style>>(name); }

protected:

	TimeZoneFormat_Style(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONEFORMAT_STYLE
