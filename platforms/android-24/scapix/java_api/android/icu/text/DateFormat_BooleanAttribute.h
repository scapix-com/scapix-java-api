// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class DateFormat_BooleanAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::DateFormat_BooleanAttribute>
{
	static constexpr fixed_string class_name = "android/icu/text/DateFormat$BooleanAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::DateFormat_BooleanAttribute : public jni::object_base<"android/icu/text/DateFormat$BooleanAttribute",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::DateFormat_BooleanAttribute> PARSE_ALLOW_NUMERIC() { return get_static_field<"PARSE_ALLOW_NUMERIC", jni::ref<android::icu::text::DateFormat_BooleanAttribute>>(); }
	static jni::ref<android::icu::text::DateFormat_BooleanAttribute> PARSE_ALLOW_WHITESPACE() { return get_static_field<"PARSE_ALLOW_WHITESPACE", jni::ref<android::icu::text::DateFormat_BooleanAttribute>>(); }

	static jni::ref<jni::array<android::icu::text::DateFormat_BooleanAttribute>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::DateFormat_BooleanAttribute>>>(); }
	static jni::ref<android::icu::text::DateFormat_BooleanAttribute> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::DateFormat_BooleanAttribute>>(name); }

protected:

	DateFormat_BooleanAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEFORMAT_BOOLEANATTRIBUTE
