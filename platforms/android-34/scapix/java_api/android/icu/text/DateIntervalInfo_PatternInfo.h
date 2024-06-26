// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class DateIntervalInfo_PatternInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::DateIntervalInfo_PatternInfo>
{
	static constexpr fixed_string class_name = "android/icu/text/DateIntervalInfo$PatternInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::DateIntervalInfo_PatternInfo : public jni::object_base<"android/icu/text/DateIntervalInfo$PatternInfo",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<android::icu::text::DateIntervalInfo_PatternInfo> new_object(jni::ref<java::lang::String> firstPart, jni::ref<java::lang::String> secondPart, jboolean firstDateInPtnIsLaterDate) { return base_::new_object(firstPart, secondPart, firstDateInPtnIsLaterDate); }
	jni::ref<java::lang::String> getFirstPart() { return call_method<"getFirstPart", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSecondPart() { return call_method<"getSecondPart", jni::ref<java::lang::String>>(); }
	jboolean firstDateInPtnIsLaterDate() { return call_method<"firstDateInPtnIsLaterDate", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> a) { return call_method<"equals", jboolean>(a); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DateIntervalInfo_PatternInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO
