// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class UnicodeSet_ComparisonStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::UnicodeSet_ComparisonStyle>
{
	static constexpr fixed_string class_name = "android/icu/text/UnicodeSet$ComparisonStyle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::UnicodeSet_ComparisonStyle : public jni::object_base<"android/icu/text/UnicodeSet$ComparisonStyle",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::UnicodeSet_ComparisonStyle> LEXICOGRAPHIC() { return get_static_field<"LEXICOGRAPHIC", jni::ref<android::icu::text::UnicodeSet_ComparisonStyle>>(); }
	static jni::ref<android::icu::text::UnicodeSet_ComparisonStyle> LONGER_FIRST() { return get_static_field<"LONGER_FIRST", jni::ref<android::icu::text::UnicodeSet_ComparisonStyle>>(); }
	static jni::ref<android::icu::text::UnicodeSet_ComparisonStyle> SHORTER_FIRST() { return get_static_field<"SHORTER_FIRST", jni::ref<android::icu::text::UnicodeSet_ComparisonStyle>>(); }

	static jni::ref<jni::array<android::icu::text::UnicodeSet_ComparisonStyle>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::UnicodeSet_ComparisonStyle>>>(); }
	static jni::ref<android::icu::text::UnicodeSet_ComparisonStyle> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::UnicodeSet_ComparisonStyle>>(name); }

protected:

	UnicodeSet_ComparisonStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE