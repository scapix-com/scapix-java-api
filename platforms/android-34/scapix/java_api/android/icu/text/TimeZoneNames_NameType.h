// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class TimeZoneNames_NameType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::TimeZoneNames_NameType>
{
	static constexpr fixed_string class_name = "android/icu/text/TimeZoneNames$NameType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::TimeZoneNames_NameType : public jni::object_base<"android/icu/text/TimeZoneNames$NameType",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::text::TimeZoneNames_NameType> LONG_GENERIC() { return get_static_field<"LONG_GENERIC", jni::ref<android::icu::text::TimeZoneNames_NameType>>(); }
	static jni::ref<android::icu::text::TimeZoneNames_NameType> LONG_STANDARD() { return get_static_field<"LONG_STANDARD", jni::ref<android::icu::text::TimeZoneNames_NameType>>(); }
	static jni::ref<android::icu::text::TimeZoneNames_NameType> LONG_DAYLIGHT() { return get_static_field<"LONG_DAYLIGHT", jni::ref<android::icu::text::TimeZoneNames_NameType>>(); }
	static jni::ref<android::icu::text::TimeZoneNames_NameType> SHORT_GENERIC() { return get_static_field<"SHORT_GENERIC", jni::ref<android::icu::text::TimeZoneNames_NameType>>(); }
	static jni::ref<android::icu::text::TimeZoneNames_NameType> SHORT_STANDARD() { return get_static_field<"SHORT_STANDARD", jni::ref<android::icu::text::TimeZoneNames_NameType>>(); }
	static jni::ref<android::icu::text::TimeZoneNames_NameType> SHORT_DAYLIGHT() { return get_static_field<"SHORT_DAYLIGHT", jni::ref<android::icu::text::TimeZoneNames_NameType>>(); }
	static jni::ref<android::icu::text::TimeZoneNames_NameType> EXEMPLAR_LOCATION() { return get_static_field<"EXEMPLAR_LOCATION", jni::ref<android::icu::text::TimeZoneNames_NameType>>(); }

	static jni::ref<jni::array<android::icu::text::TimeZoneNames_NameType>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::text::TimeZoneNames_NameType>>>(); }
	static jni::ref<android::icu::text::TimeZoneNames_NameType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::text::TimeZoneNames_NameType>>(name); }

protected:

	TimeZoneNames_NameType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_TIMEZONENAMES_NAMETYPE
