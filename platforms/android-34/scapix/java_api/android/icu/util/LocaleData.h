// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_LOCALEDATA_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_LOCALEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class LocaleData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::LocaleData>
{
	static constexpr fixed_string class_name = "android/icu/util/LocaleData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_LOCALEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_LOCALEDATA)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_LOCALEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/LocaleData_MeasurementSystem.h>
#include <scapix/java_api/android/icu/util/LocaleData_PaperSize.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/android/icu/util/VersionInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::LocaleData : public jni::object_base<"android/icu/util/LocaleData",
	java::lang::Object>
{
public:

	using PaperSize = LocaleData_PaperSize;
	using MeasurementSystem = LocaleData_MeasurementSystem;

	static jint ALT_QUOTATION_END() { return get_static_field<"ALT_QUOTATION_END", jint>(); }
	static jint ALT_QUOTATION_START() { return get_static_field<"ALT_QUOTATION_START", jint>(); }
	static jint QUOTATION_END() { return get_static_field<"QUOTATION_END", jint>(); }
	static jint QUOTATION_START() { return get_static_field<"QUOTATION_START", jint>(); }

	static jni::ref<android::icu::util::LocaleData> getInstance(jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::util::LocaleData>>(locale); }
	static jni::ref<android::icu::util::LocaleData> getInstance() { return call_static_method<"getInstance", jni::ref<android::icu::util::LocaleData>>(); }
	void setNoSubstitute(jboolean setting) { return call_method<"setNoSubstitute", void>(setting); }
	jboolean getNoSubstitute() { return call_method<"getNoSubstitute", jboolean>(); }
	jni::ref<java::lang::String> getDelimiter(jint type) { return call_method<"getDelimiter", jni::ref<java::lang::String>>(type); }
	static jni::ref<android::icu::util::LocaleData_MeasurementSystem> getMeasurementSystem(jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"getMeasurementSystem", jni::ref<android::icu::util::LocaleData_MeasurementSystem>>(locale); }
	static jni::ref<android::icu::util::LocaleData_PaperSize> getPaperSize(jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"getPaperSize", jni::ref<android::icu::util::LocaleData_PaperSize>>(locale); }
	static jni::ref<android::icu::util::VersionInfo> getCLDRVersion() { return call_static_method<"getCLDRVersion", jni::ref<android::icu::util::VersionInfo>>(); }

protected:

	LocaleData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_LOCALEDATA
