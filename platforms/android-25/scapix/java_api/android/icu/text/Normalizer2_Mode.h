// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NORMALIZER2_MODE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NORMALIZER2_MODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class Normalizer2_Mode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::Normalizer2_Mode>
{
	static constexpr fixed_string class_name = "android/icu/text/Normalizer2$Mode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NORMALIZER2_MODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NORMALIZER2_MODE)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NORMALIZER2_MODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::Normalizer2_Mode : public jni::object_base<"android/icu/text/Normalizer2$Mode",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::Normalizer2_Mode> COMPOSE() { return get_static_field<"COMPOSE", jni::ref<android::icu::text::Normalizer2_Mode>>(); }
	static jni::ref<android::icu::text::Normalizer2_Mode> COMPOSE_CONTIGUOUS() { return get_static_field<"COMPOSE_CONTIGUOUS", jni::ref<android::icu::text::Normalizer2_Mode>>(); }
	static jni::ref<android::icu::text::Normalizer2_Mode> DECOMPOSE() { return get_static_field<"DECOMPOSE", jni::ref<android::icu::text::Normalizer2_Mode>>(); }
	static jni::ref<android::icu::text::Normalizer2_Mode> FCD() { return get_static_field<"FCD", jni::ref<android::icu::text::Normalizer2_Mode>>(); }

	static jni::ref<jni::array<android::icu::text::Normalizer2_Mode>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::Normalizer2_Mode>>>(); }
	static jni::ref<android::icu::text::Normalizer2_Mode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::Normalizer2_Mode>>(name); }

protected:

	Normalizer2_Mode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_NORMALIZER2_MODE