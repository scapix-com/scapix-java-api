// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Format_Field.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class NumberFormat_Field; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::NumberFormat_Field>
{
	static constexpr fixed_string class_name = "android/icu/text/NumberFormat$Field";
	using base_classes = std::tuple<scapix::java_api::java::text::Format_Field>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::NumberFormat_Field : public jni::object_base<"android/icu/text/NumberFormat$Field",
	java::text::Format_Field>
{
public:

	static jni::ref<android::icu::text::NumberFormat_Field> CURRENCY() { return get_static_field<"CURRENCY", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> DECIMAL_SEPARATOR() { return get_static_field<"DECIMAL_SEPARATOR", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> EXPONENT() { return get_static_field<"EXPONENT", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> EXPONENT_SIGN() { return get_static_field<"EXPONENT_SIGN", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> EXPONENT_SYMBOL() { return get_static_field<"EXPONENT_SYMBOL", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> FRACTION() { return get_static_field<"FRACTION", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> GROUPING_SEPARATOR() { return get_static_field<"GROUPING_SEPARATOR", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> INTEGER() { return get_static_field<"INTEGER", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> PERCENT() { return get_static_field<"PERCENT", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> PERMILLE() { return get_static_field<"PERMILLE", jni::ref<android::icu::text::NumberFormat_Field>>(); }
	static jni::ref<android::icu::text::NumberFormat_Field> SIGN() { return get_static_field<"SIGN", jni::ref<android::icu::text::NumberFormat_Field>>(); }


protected:

	NumberFormat_Field(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD
