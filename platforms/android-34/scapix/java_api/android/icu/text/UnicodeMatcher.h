// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODEMATCHER_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODEMATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class UnicodeMatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::UnicodeMatcher>
{
	static constexpr fixed_string class_name = "android/icu/text/UnicodeMatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODEMATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODEMATCHER)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODEMATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/Replaceable.h>
#include <scapix/java_api/android/icu/text/UnicodeSet.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::UnicodeMatcher : public jni::object_base<"android/icu/text/UnicodeMatcher",
	java::lang::Object>
{
public:

	static jchar ETHER() { return get_static_field<"ETHER", jchar>(); }
	static jint U_MATCH() { return get_static_field<"U_MATCH", jint>(); }
	static jint U_MISMATCH() { return get_static_field<"U_MISMATCH", jint>(); }
	static jint U_PARTIAL_MATCH() { return get_static_field<"U_PARTIAL_MATCH", jint>(); }

	jint matches(jni::ref<android::icu::text::Replaceable> p1, jni::ref<jni::array<jint>> p2, jint p3, jboolean p4) { return call_method<"matches", jint>(p1, p2, p3, p4); }
	jni::ref<java::lang::String> toPattern(jboolean p1) { return call_method<"toPattern", jni::ref<java::lang::String>>(p1); }
	jboolean matchesIndexValue(jint p1) { return call_method<"matchesIndexValue", jboolean>(p1); }
	void addMatchSetTo(jni::ref<android::icu::text::UnicodeSet> p1) { return call_method<"addMatchSetTo", void>(p1); }

protected:

	UnicodeMatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_UNICODEMATCHER
