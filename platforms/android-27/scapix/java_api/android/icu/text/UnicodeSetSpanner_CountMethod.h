// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class UnicodeSetSpanner_CountMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::UnicodeSetSpanner_CountMethod>
{
	static constexpr fixed_string class_name = "android/icu/text/UnicodeSetSpanner$CountMethod";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::UnicodeSetSpanner_CountMethod : public jni::object_base<"android/icu/text/UnicodeSetSpanner$CountMethod",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::UnicodeSetSpanner_CountMethod> MIN_ELEMENTS() { return get_static_field<"MIN_ELEMENTS", jni::ref<android::icu::text::UnicodeSetSpanner_CountMethod>>(); }
	static jni::ref<android::icu::text::UnicodeSetSpanner_CountMethod> WHOLE_SPAN() { return get_static_field<"WHOLE_SPAN", jni::ref<android::icu::text::UnicodeSetSpanner_CountMethod>>(); }

	static jni::ref<jni::array<android::icu::text::UnicodeSetSpanner_CountMethod>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::UnicodeSetSpanner_CountMethod>>>(); }
	static jni::ref<android::icu::text::UnicodeSetSpanner_CountMethod> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::UnicodeSetSpanner_CountMethod>>(name); }

protected:

	UnicodeSetSpanner_CountMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESETSPANNER_COUNTMETHOD
