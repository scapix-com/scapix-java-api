// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERRANGEFORMATTER_RANGECOLLAPSE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERRANGEFORMATTER_RANGECOLLAPSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::number { class NumberRangeFormatter_RangeCollapse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::number::NumberRangeFormatter_RangeCollapse>
{
	static constexpr fixed_string class_name = "android/icu/number/NumberRangeFormatter$RangeCollapse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERRANGEFORMATTER_RANGECOLLAPSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERRANGEFORMATTER_RANGECOLLAPSE)
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERRANGEFORMATTER_RANGECOLLAPSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::number::NumberRangeFormatter_RangeCollapse : public jni::object_base<"android/icu/number/NumberRangeFormatter$RangeCollapse",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse> AUTO() { return get_static_field<"AUTO", jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse>>(); }
	static jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse> NONE() { return get_static_field<"NONE", jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse>>(); }
	static jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse> UNIT() { return get_static_field<"UNIT", jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse>>(); }
	static jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse> ALL() { return get_static_field<"ALL", jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse>>(); }

	static jni::ref<jni::array<android::icu::number::NumberRangeFormatter_RangeCollapse>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::number::NumberRangeFormatter_RangeCollapse>>>(); }
	static jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::number::NumberRangeFormatter_RangeCollapse>>(name); }

protected:

	NumberRangeFormatter_RangeCollapse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_NUMBERRANGEFORMATTER_RANGECOLLAPSE
