// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_CATEGORY_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_CATEGORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class ULocale_Category; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::ULocale_Category>
{
	static constexpr fixed_string class_name = "android/icu/util/ULocale$Category";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_CATEGORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_CATEGORY)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_CATEGORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::ULocale_Category : public jni::object_base<"android/icu/util/ULocale$Category",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::util::ULocale_Category> DISPLAY() { return get_static_field<"DISPLAY", jni::ref<android::icu::util::ULocale_Category>>(); }
	static jni::ref<android::icu::util::ULocale_Category> FORMAT() { return get_static_field<"FORMAT", jni::ref<android::icu::util::ULocale_Category>>(); }

	static jni::ref<jni::array<android::icu::util::ULocale_Category>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::util::ULocale_Category>>>(); }
	static jni::ref<android::icu::util::ULocale_Category> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::util::ULocale_Category>>(name); }

protected:

	ULocale_Category(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_CATEGORY
