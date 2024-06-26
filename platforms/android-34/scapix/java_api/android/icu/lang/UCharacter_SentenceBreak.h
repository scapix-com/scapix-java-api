// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_SENTENCEBREAK_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_SENTENCEBREAK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::lang { class UCharacter_SentenceBreak; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::lang::UCharacter_SentenceBreak>
{
	static constexpr fixed_string class_name = "android/icu/lang/UCharacter$SentenceBreak";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_SENTENCEBREAK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_SENTENCEBREAK)
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_SENTENCEBREAK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::lang::UCharacter_SentenceBreak : public jni::object_base<"android/icu/lang/UCharacter$SentenceBreak",
	java::lang::Object>
{
public:

	static jint ATERM() { return get_static_field<"ATERM", jint>(); }
	static jint CLOSE() { return get_static_field<"CLOSE", jint>(); }
	static jint CR() { return get_static_field<"CR", jint>(); }
	static jint EXTEND() { return get_static_field<"EXTEND", jint>(); }
	static jint FORMAT() { return get_static_field<"FORMAT", jint>(); }
	static jint LF() { return get_static_field<"LF", jint>(); }
	static jint LOWER() { return get_static_field<"LOWER", jint>(); }
	static jint NUMERIC() { return get_static_field<"NUMERIC", jint>(); }
	static jint OLETTER() { return get_static_field<"OLETTER", jint>(); }
	static jint OTHER() { return get_static_field<"OTHER", jint>(); }
	static jint SCONTINUE() { return get_static_field<"SCONTINUE", jint>(); }
	static jint SEP() { return get_static_field<"SEP", jint>(); }
	static jint SP() { return get_static_field<"SP", jint>(); }
	static jint STERM() { return get_static_field<"STERM", jint>(); }
	static jint UPPER() { return get_static_field<"UPPER", jint>(); }


protected:

	UCharacter_SentenceBreak(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_SENTENCEBREAK
