// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESET_SPANCONDITION_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESET_SPANCONDITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class UnicodeSet_SpanCondition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::UnicodeSet_SpanCondition>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/UnicodeSet$SpanCondition";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESET_SPANCONDITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESET_SPANCONDITION)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESET_SPANCONDITION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::normalizer::UnicodeSet_SpanCondition : public jni::object_base<"sun/text/normalizer/UnicodeSet$SpanCondition",
	java::lang::Enum>
{
public:

	static jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition> NOT_CONTAINED() { return get_static_field<"NOT_CONTAINED", jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition>>(); }
	static jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition> CONTAINED() { return get_static_field<"CONTAINED", jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition>>(); }
	static jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition> SIMPLE() { return get_static_field<"SIMPLE", jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition>>(); }

	static jni::ref<jni::array<sun::text::normalizer::UnicodeSet_SpanCondition>> values() { return call_static_method<"values", jni::ref<jni::array<sun::text::normalizer::UnicodeSet_SpanCondition>>>(); }
	static jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::text::normalizer::UnicodeSet_SpanCondition>>(name); }

protected:

	UnicodeSet_SpanCondition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESET_SPANCONDITION
