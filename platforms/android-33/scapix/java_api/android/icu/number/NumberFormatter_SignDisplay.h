// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_SIGNDISPLAY_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_SIGNDISPLAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::number { class NumberFormatter_SignDisplay; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::number::NumberFormatter_SignDisplay>
{
	static constexpr fixed_string class_name = "android/icu/number/NumberFormatter$SignDisplay";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_SIGNDISPLAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_SIGNDISPLAY)
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_SIGNDISPLAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::number::NumberFormatter_SignDisplay : public jni::object_base<"android/icu/number/NumberFormatter$SignDisplay",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> AUTO() { return get_static_field<"AUTO", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(); }
	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> ALWAYS() { return get_static_field<"ALWAYS", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(); }
	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> NEVER() { return get_static_field<"NEVER", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(); }
	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> ACCOUNTING() { return get_static_field<"ACCOUNTING", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(); }
	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> ACCOUNTING_ALWAYS() { return get_static_field<"ACCOUNTING_ALWAYS", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(); }
	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> EXCEPT_ZERO() { return get_static_field<"EXCEPT_ZERO", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(); }
	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> ACCOUNTING_EXCEPT_ZERO() { return get_static_field<"ACCOUNTING_EXCEPT_ZERO", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(); }

	static jni::ref<jni::array<android::icu::number::NumberFormatter_SignDisplay>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::number::NumberFormatter_SignDisplay>>>(); }
	static jni::ref<android::icu::number::NumberFormatter_SignDisplay> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::number::NumberFormatter_SignDisplay>>(name); }

protected:

	NumberFormatter_SignDisplay(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERFORMATTER_SIGNDISPLAY
