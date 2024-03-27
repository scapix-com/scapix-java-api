// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class AlphabeticIndex_Record; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::AlphabeticIndex_Record>
{
	static constexpr fixed_string class_name = "android/icu/text/AlphabeticIndex$Record";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::AlphabeticIndex_Record : public jni::object_base<"android/icu/text/AlphabeticIndex$Record",
	java::lang::Object>
{
public:

	jni::ref<java::lang::CharSequence> getName() { return call_method<"getName", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::Object> getData() { return call_method<"getData", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AlphabeticIndex_Record(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD