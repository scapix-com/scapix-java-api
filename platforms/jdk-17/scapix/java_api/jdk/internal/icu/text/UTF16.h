// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UTF16_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UTF16_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class UTF16; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::UTF16>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/UTF16";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UTF16_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UTF16)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UTF16

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::text::UTF16 : public jni::object_base<"jdk/internal/icu/text/UTF16",
	java::lang::Object>
{
public:

	static jint CODEPOINT_MIN_VALUE() { return get_static_field<"CODEPOINT_MIN_VALUE", jint>(); }
	static jint CODEPOINT_MAX_VALUE() { return get_static_field<"CODEPOINT_MAX_VALUE", jint>(); }
	static jint SUPPLEMENTARY_MIN_VALUE() { return get_static_field<"SUPPLEMENTARY_MIN_VALUE", jint>(); }
	static jint LEAD_SURROGATE_MIN_VALUE() { return get_static_field<"LEAD_SURROGATE_MIN_VALUE", jint>(); }
	static jint TRAIL_SURROGATE_MIN_VALUE() { return get_static_field<"TRAIL_SURROGATE_MIN_VALUE", jint>(); }
	static jint LEAD_SURROGATE_MAX_VALUE() { return get_static_field<"LEAD_SURROGATE_MAX_VALUE", jint>(); }
	static jint TRAIL_SURROGATE_MAX_VALUE() { return get_static_field<"TRAIL_SURROGATE_MAX_VALUE", jint>(); }
	static jint SURROGATE_MIN_VALUE() { return get_static_field<"SURROGATE_MIN_VALUE", jint>(); }

	static jint charAt(jni::ref<java::lang::String> source, jint offset16) { return call_static_method<"charAt", jint>(source, offset16); }
	static jint charAt(jni::ref<java::lang::CharSequence> source, jint offset16) { return call_static_method<"charAt", jint>(source, offset16); }
	static jint charAt(jni::ref<jni::array<jchar>> source, jint start, jint limit, jint offset16) { return call_static_method<"charAt", jint>(source, start, limit, offset16); }
	static jint getCharCount(jint char32) { return call_static_method<"getCharCount", jint>(char32); }
	static jboolean isSurrogate(jchar char16) { return call_static_method<"isSurrogate", jboolean>(char16); }
	static jboolean isTrailSurrogate(jchar char16) { return call_static_method<"isTrailSurrogate", jboolean>(char16); }
	static jboolean isLeadSurrogate(jchar char16) { return call_static_method<"isLeadSurrogate", jboolean>(char16); }
	static jchar getLeadSurrogate(jint char32) { return call_static_method<"getLeadSurrogate", jchar>(char32); }
	static jchar getTrailSurrogate(jint char32) { return call_static_method<"getTrailSurrogate", jchar>(char32); }
	static jni::ref<java::lang::String> valueOf(jint char32) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(char32); }
	static jni::ref<java::lang::StringBuffer> append(jni::ref<java::lang::StringBuffer> target, jint char32) { return call_static_method<"append", jni::ref<java::lang::StringBuffer>>(target, char32); }
	static jint moveCodePointOffset(jni::ref<jni::array<jchar>> source, jint start, jint limit, jint offset16, jint shift32) { return call_static_method<"moveCodePointOffset", jint>(source, start, limit, offset16, shift32); }

protected:

	UTF16(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UTF16
