// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_IDNA_INFO_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_IDNA_INFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class IDNA_Info; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::IDNA_Info>
{
	static constexpr fixed_string class_name = "android/icu/text/IDNA$Info";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_IDNA_INFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_IDNA_INFO)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_IDNA_INFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::IDNA_Info : public jni::object_base<"android/icu/text/IDNA$Info",
	java::lang::Object>
{
public:

	static jni::ref<android::icu::text::IDNA_Info> new_object() { return base_::new_object(); }
	jboolean hasErrors() { return call_method<"hasErrors", jboolean>(); }
	jni::ref<java::util::Set> getErrors() { return call_method<"getErrors", jni::ref<java::util::Set>>(); }
	jboolean isTransitionalDifferent() { return call_method<"isTransitionalDifferent", jboolean>(); }

protected:

	IDNA_Info(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_IDNA_INFO
