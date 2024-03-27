// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class UnicodeSetStringSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::UnicodeSetStringSpan>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/UnicodeSetStringSpan";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/sun/text/normalizer/OutputInt.h>
#include <scapix/java_api/sun/text/normalizer/UnicodeSet.h>
#include <scapix/java_api/sun/text/normalizer/UnicodeSet_SpanCondition.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::UnicodeSetStringSpan : public jni::object_base<"sun/text/normalizer/UnicodeSetStringSpan",
	java::lang::Object>
{
public:

	static jint WITH_COUNT() { return get_static_field<"WITH_COUNT", jint>(); }
	static jint FWD() { return get_static_field<"FWD", jint>(); }
	static jint BACK() { return get_static_field<"BACK", jint>(); }
	static jint CONTAINED() { return get_static_field<"CONTAINED", jint>(); }
	static jint NOT_CONTAINED() { return get_static_field<"NOT_CONTAINED", jint>(); }
	static jint ALL() { return get_static_field<"ALL", jint>(); }
	static jint FWD_UTF16_CONTAINED() { return get_static_field<"FWD_UTF16_CONTAINED", jint>(); }
	static jint FWD_UTF16_NOT_CONTAINED() { return get_static_field<"FWD_UTF16_NOT_CONTAINED", jint>(); }
	static jint BACK_UTF16_CONTAINED() { return get_static_field<"BACK_UTF16_CONTAINED", jint>(); }
	static jint BACK_UTF16_NOT_CONTAINED() { return get_static_field<"BACK_UTF16_NOT_CONTAINED", jint>(); }

	static jni::ref<sun::text::normalizer::UnicodeSetStringSpan> new_object(jni::ref<sun::text::normalizer::UnicodeSet> set, jni::ref<java::util::ArrayList> setStrings, jint which) { return base_::new_object(set, setStrings, which); }
	jboolean needsStringSpanUTF16() { return call_method<"needsStringSpanUTF16", jboolean>(); }
	jboolean contains(jint c) { return call_method<"contains", jboolean>(c); }
	jint span(jni::ref<java::lang::CharSequence> s, jint start, jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition> spanCondition) { return call_method<"span", jint>(s, start, spanCondition); }
	jint spanAndCount(jni::ref<java::lang::CharSequence> s, jint start, jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition> spanCondition, jni::ref<sun::text::normalizer::OutputInt> outCount) { return call_method<"spanAndCount", jint>(s, start, spanCondition, outCount); }
	jint spanBack(jni::ref<java::lang::CharSequence> s, jint length, jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition> spanCondition) { return call_method<"spanBack", jint>(s, length, spanCondition); }

protected:

	UnicodeSetStringSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN
