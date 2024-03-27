// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/number/NumberRangeFormatterSettings.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_UNLOCALIZEDNUMBERRANGEFORMATTER_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_UNLOCALIZEDNUMBERRANGEFORMATTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::number { class UnlocalizedNumberRangeFormatter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::number::UnlocalizedNumberRangeFormatter>
{
	static constexpr fixed_string class_name = "android/icu/number/UnlocalizedNumberRangeFormatter";
	using base_classes = std::tuple<scapix::java_api::android::icu::number::NumberRangeFormatterSettings>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_UNLOCALIZEDNUMBERRANGEFORMATTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_UNLOCALIZEDNUMBERRANGEFORMATTER)
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_UNLOCALIZEDNUMBERRANGEFORMATTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/number/LocalizedNumberRangeFormatter.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::number::UnlocalizedNumberRangeFormatter : public jni::object_base<"android/icu/number/UnlocalizedNumberRangeFormatter",
	android::icu::number::NumberRangeFormatterSettings>
{
public:

	jni::ref<android::icu::number::LocalizedNumberRangeFormatter> locale(jni::ref<java::util::Locale> locale) { return call_method<"locale", jni::ref<android::icu::number::LocalizedNumberRangeFormatter>>(locale); }
	jni::ref<android::icu::number::LocalizedNumberRangeFormatter> locale(jni::ref<android::icu::util::ULocale> locale) { return call_method<"locale", jni::ref<android::icu::number::LocalizedNumberRangeFormatter>>(locale); }

protected:

	UnlocalizedNumberRangeFormatter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_UNLOCALIZEDNUMBERRANGEFORMATTER
