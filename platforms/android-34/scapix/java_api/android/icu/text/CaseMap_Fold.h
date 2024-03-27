// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/CaseMap.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_CASEMAP_FOLD_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_CASEMAP_FOLD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class CaseMap_Fold; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::CaseMap_Fold>
{
	static constexpr fixed_string class_name = "android/icu/text/CaseMap$Fold";
	using base_classes = std::tuple<scapix::java_api::android::icu::text::CaseMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_CASEMAP_FOLD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_CASEMAP_FOLD)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_CASEMAP_FOLD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/Edits.h>
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::CaseMap_Fold : public jni::object_base<"android/icu/text/CaseMap$Fold",
	android::icu::text::CaseMap>
{
public:

	jni::ref<android::icu::text::CaseMap_Fold> omitUnchangedText() { return call_method<"omitUnchangedText", jni::ref<android::icu::text::CaseMap_Fold>>(); }
	jni::ref<android::icu::text::CaseMap_Fold> turkic() { return call_method<"turkic", jni::ref<android::icu::text::CaseMap_Fold>>(); }
	jni::ref<java::lang::String> apply(jni::ref<java::lang::CharSequence> src) { return call_method<"apply", jni::ref<java::lang::String>>(src); }
	jni::ref<java::lang::Appendable> apply(jni::ref<java::lang::CharSequence> src, jni::ref<java::lang::Appendable> dest, jni::ref<android::icu::text::Edits> edits) { return call_method<"apply", jni::ref<java::lang::Appendable>>(src, dest, edits); }

protected:

	CaseMap_Fold(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_CASEMAP_FOLD