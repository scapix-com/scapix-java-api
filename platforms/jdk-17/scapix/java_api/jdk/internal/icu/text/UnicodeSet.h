// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UNICODESET_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UNICODESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class UnicodeSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::UnicodeSet>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/UnicodeSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UNICODESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UNICODESET)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UNICODESET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/icu/text/UnicodeSet_SpanCondition.h>
#include <scapix/java_api/jdk/internal/icu/util/OutputInt.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::text::UnicodeSet : public jni::object_base<"jdk/internal/icu/text/UnicodeSet",
	java::lang::Object>
{
public:

	using SpanCondition = UnicodeSet_SpanCondition;

	static jint MIN_VALUE() { return get_static_field<"MIN_VALUE", jint>(); }
	static jint MAX_VALUE() { return get_static_field<"MAX_VALUE", jint>(); }

	static jni::ref<jdk::internal::icu::text::UnicodeSet> new_object(jint start, jint end) { return base_::new_object(start, end); }
	static jni::ref<jdk::internal::icu::text::UnicodeSet> new_object(jni::ref<java::lang::String> pattern) { return base_::new_object(pattern); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> set(jni::ref<jdk::internal::icu::text::UnicodeSet> other) { return call_method<"set", jni::ref<jdk::internal::icu::text::UnicodeSet>>(other); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> add(jint c) { return call_method<"add", jni::ref<jdk::internal::icu::text::UnicodeSet>>(c); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> add(jni::ref<java::lang::CharSequence> s) { return call_method<"add", jni::ref<jdk::internal::icu::text::UnicodeSet>>(s); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> complement(jint start, jint end) { return call_method<"complement", jni::ref<jdk::internal::icu::text::UnicodeSet>>(start, end); }
	jboolean contains(jint c) { return call_method<"contains", jboolean>(c); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> retainAll(jni::ref<jdk::internal::icu::text::UnicodeSet> c) { return call_method<"retainAll", jni::ref<jdk::internal::icu::text::UnicodeSet>>(c); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> clear() { return call_method<"clear", jni::ref<jdk::internal::icu::text::UnicodeSet>>(); }
	jint getRangeCount() { return call_method<"getRangeCount", jint>(); }
	jint getRangeStart(jint index) { return call_method<"getRangeStart", jint>(index); }
	jint getRangeEnd(jint index) { return call_method<"getRangeEnd", jint>(index); }
	jboolean isFrozen() { return call_method<"isFrozen", jboolean>(); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> freeze() { return call_method<"freeze", jni::ref<jdk::internal::icu::text::UnicodeSet>>(); }
	jint span(jni::ref<java::lang::CharSequence> s, jni::ref<jdk::internal::icu::text::UnicodeSet_SpanCondition> spanCondition) { return call_method<"span", jint>(s, spanCondition); }
	jint span(jni::ref<java::lang::CharSequence> s, jint start, jni::ref<jdk::internal::icu::text::UnicodeSet_SpanCondition> spanCondition) { return call_method<"span", jint>(s, start, spanCondition); }
	jint spanAndCount(jni::ref<java::lang::CharSequence> s, jint start, jni::ref<jdk::internal::icu::text::UnicodeSet_SpanCondition> spanCondition, jni::ref<jdk::internal::icu::util::OutputInt> outCount) { return call_method<"spanAndCount", jint>(s, start, spanCondition, outCount); }
	jint spanBack(jni::ref<java::lang::CharSequence> s, jint fromIndex, jni::ref<jdk::internal::icu::text::UnicodeSet_SpanCondition> spanCondition) { return call_method<"spanBack", jint>(s, fromIndex, spanCondition); }
	jni::ref<jdk::internal::icu::text::UnicodeSet> cloneAsThawed() { return call_method<"cloneAsThawed", jni::ref<jdk::internal::icu::text::UnicodeSet>>(); }

protected:

	UnicodeSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_UNICODESET
