// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERINGSYSTEM_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERINGSYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class NumberingSystem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::NumberingSystem>
{
	static constexpr fixed_string class_name = "android/icu/text/NumberingSystem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERINGSYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERINGSYSTEM)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERINGSYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::NumberingSystem : public jni::object_base<"android/icu/text/NumberingSystem",
	java::lang::Object>
{
public:

	static jni::ref<android::icu::text::NumberingSystem> new_object() { return base_::new_object(); }
	static jni::ref<android::icu::text::NumberingSystem> getInstance(jint radix_in, jboolean isAlgorithmic_in, jni::ref<java::lang::String> desc_in) { return call_static_method<"getInstance", jni::ref<android::icu::text::NumberingSystem>>(radix_in, isAlgorithmic_in, desc_in); }
	static jni::ref<android::icu::text::NumberingSystem> getInstance(jni::ref<java::util::Locale> inLocale) { return call_static_method<"getInstance", jni::ref<android::icu::text::NumberingSystem>>(inLocale); }
	static jni::ref<android::icu::text::NumberingSystem> getInstance(jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::text::NumberingSystem>>(locale); }
	static jni::ref<android::icu::text::NumberingSystem> getInstance() { return call_static_method<"getInstance", jni::ref<android::icu::text::NumberingSystem>>(); }
	static jni::ref<android::icu::text::NumberingSystem> getInstanceByName(jni::ref<java::lang::String> name) { return call_static_method<"getInstanceByName", jni::ref<android::icu::text::NumberingSystem>>(name); }
	static jni::ref<jni::array<java::lang::String>> getAvailableNames() { return call_static_method<"getAvailableNames", jni::ref<jni::array<java::lang::String>>>(); }
	static jboolean isValidDigitString(jni::ref<java::lang::String> str) { return call_static_method<"isValidDigitString", jboolean>(str); }
	jint getRadix() { return call_method<"getRadix", jint>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isAlgorithmic() { return call_method<"isAlgorithmic", jboolean>(); }

protected:

	NumberingSystem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NUMBERINGSYSTEM