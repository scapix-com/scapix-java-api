// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_LANG_UPROPERTY_NAMECHOICE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UPROPERTY_NAMECHOICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::lang { class UProperty_NameChoice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::lang::UProperty_NameChoice>
{
	static constexpr fixed_string class_name = "android/icu/lang/UProperty$NameChoice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UPROPERTY_NAMECHOICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_LANG_UPROPERTY_NAMECHOICE)
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UPROPERTY_NAMECHOICE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::lang::UProperty_NameChoice : public jni::object_base<"android/icu/lang/UProperty$NameChoice",
	java::lang::Object>
{
public:

	static jint LONG() { return get_static_field<"LONG", jint>(); }
	static jint SHORT() { return get_static_field<"SHORT", jint>(); }


protected:

	UProperty_NameChoice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UPROPERTY_NAMECHOICE
