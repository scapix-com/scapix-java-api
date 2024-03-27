// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_ABSOLUTEUNIT_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_ABSOLUTEUNIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class RelativeDateTimeFormatter_AbsoluteUnit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>
{
	static constexpr fixed_string class_name = "android/icu/text/RelativeDateTimeFormatter$AbsoluteUnit";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_ABSOLUTEUNIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_ABSOLUTEUNIT)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_ABSOLUTEUNIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit : public jni::object_base<"android/icu/text/RelativeDateTimeFormatter$AbsoluteUnit",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> DAY() { return get_static_field<"DAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> FRIDAY() { return get_static_field<"FRIDAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> MONDAY() { return get_static_field<"MONDAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> MONTH() { return get_static_field<"MONTH", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> NOW() { return get_static_field<"NOW", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> SATURDAY() { return get_static_field<"SATURDAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> SUNDAY() { return get_static_field<"SUNDAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> THURSDAY() { return get_static_field<"THURSDAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> TUESDAY() { return get_static_field<"TUESDAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> WEDNESDAY() { return get_static_field<"WEDNESDAY", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> WEEK() { return get_static_field<"WEEK", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> YEAR() { return get_static_field<"YEAR", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(); }

	static jni::ref<jni::array<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit>>(name); }

protected:

	RelativeDateTimeFormatter_AbsoluteUnit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_ABSOLUTEUNIT
