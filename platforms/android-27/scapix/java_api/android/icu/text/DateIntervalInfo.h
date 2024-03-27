// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/android/icu/util/Freezable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class DateIntervalInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::DateIntervalInfo>
{
	static constexpr fixed_string class_name = "android/icu/text/DateIntervalInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::android::icu::util::Freezable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/DateIntervalInfo_PatternInfo.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::DateIntervalInfo : public jni::object_base<"android/icu/text/DateIntervalInfo",
	java::lang::Object,
	java::lang::Cloneable,
	android::icu::util::Freezable,
	java::io::Serializable>
{
public:

	using PatternInfo = DateIntervalInfo_PatternInfo;

	static jni::ref<android::icu::text::DateIntervalInfo> new_object(jni::ref<android::icu::util::ULocale> locale) { return base_::new_object(locale); }
	static jni::ref<android::icu::text::DateIntervalInfo> new_object(jni::ref<java::util::Locale> locale) { return base_::new_object(locale); }
	void setIntervalPattern(jni::ref<java::lang::String> skeleton, jint lrgDiffCalUnit, jni::ref<java::lang::String> intervalPattern) { return call_method<"setIntervalPattern", void>(skeleton, lrgDiffCalUnit, intervalPattern); }
	jni::ref<android::icu::text::DateIntervalInfo_PatternInfo> getIntervalPattern(jni::ref<java::lang::String> skeleton, jint field) { return call_method<"getIntervalPattern", jni::ref<android::icu::text::DateIntervalInfo_PatternInfo>>(skeleton, field); }
	jni::ref<java::lang::String> getFallbackIntervalPattern() { return call_method<"getFallbackIntervalPattern", jni::ref<java::lang::String>>(); }
	void setFallbackIntervalPattern(jni::ref<java::lang::String> fallbackPattern) { return call_method<"setFallbackIntervalPattern", void>(fallbackPattern); }
	jboolean getDefaultOrder() { return call_method<"getDefaultOrder", jboolean>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean isFrozen() { return call_method<"isFrozen", jboolean>(); }
	jni::ref<android::icu::text::DateIntervalInfo> freeze() { return call_method<"freeze", jni::ref<android::icu::text::DateIntervalInfo>>(); }
	jni::ref<android::icu::text::DateIntervalInfo> cloneAsThawed() { return call_method<"cloneAsThawed", jni::ref<android::icu::text::DateIntervalInfo>>(); }
	jboolean equals(jni::ref<java::lang::Object> a) { return call_method<"equals", jboolean>(a); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	DateIntervalInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO