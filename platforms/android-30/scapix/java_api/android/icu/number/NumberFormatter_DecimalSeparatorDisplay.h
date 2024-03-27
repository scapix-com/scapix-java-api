// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_DECIMALSEPARATORDISPLAY_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_DECIMALSEPARATORDISPLAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::number { class NumberFormatter_DecimalSeparatorDisplay; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::number::NumberFormatter_DecimalSeparatorDisplay>
{
	static constexpr fixed_string class_name = "android/icu/number/NumberFormatter$DecimalSeparatorDisplay";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_DECIMALSEPARATORDISPLAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_DECIMALSEPARATORDISPLAY)
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_DECIMALSEPARATORDISPLAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::number::NumberFormatter_DecimalSeparatorDisplay : public jni::object_base<"android/icu/number/NumberFormatter$DecimalSeparatorDisplay",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::number::NumberFormatter_DecimalSeparatorDisplay> AUTO() { return get_static_field<"AUTO", jni::ref<android::icu::number::NumberFormatter_DecimalSeparatorDisplay>>(); }
	static jni::ref<android::icu::number::NumberFormatter_DecimalSeparatorDisplay> ALWAYS() { return get_static_field<"ALWAYS", jni::ref<android::icu::number::NumberFormatter_DecimalSeparatorDisplay>>(); }

	static jni::ref<jni::array<android::icu::number::NumberFormatter_DecimalSeparatorDisplay>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::number::NumberFormatter_DecimalSeparatorDisplay>>>(); }
	static jni::ref<android::icu::number::NumberFormatter_DecimalSeparatorDisplay> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::number::NumberFormatter_DecimalSeparatorDisplay>>(name); }

protected:

	NumberFormatter_DecimalSeparatorDisplay(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_DECIMALSEPARATORDISPLAY
