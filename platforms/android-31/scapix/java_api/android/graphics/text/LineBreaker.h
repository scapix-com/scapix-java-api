// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::text { class LineBreaker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::text::LineBreaker>
{
	static constexpr fixed_string class_name = "android/graphics/text/LineBreaker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/text/LineBreaker_ParagraphConstraints.h>
#include <scapix/java_api/android/graphics/text/LineBreaker_Result.h>
#include <scapix/java_api/android/graphics/text/MeasuredText.h>
#include <scapix/java_api/android/graphics/text/LineBreaker_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::text::LineBreaker : public jni::object_base<"android/graphics/text/LineBreaker",
	java::lang::Object>
{
public:

	using Result = LineBreaker_Result;
	using ParagraphConstraints = LineBreaker_ParagraphConstraints;
	using Builder = LineBreaker_Builder;

	static jint BREAK_STRATEGY_BALANCED() { return get_static_field<"BREAK_STRATEGY_BALANCED", jint>(); }
	static jint BREAK_STRATEGY_HIGH_QUALITY() { return get_static_field<"BREAK_STRATEGY_HIGH_QUALITY", jint>(); }
	static jint BREAK_STRATEGY_SIMPLE() { return get_static_field<"BREAK_STRATEGY_SIMPLE", jint>(); }
	static jint HYPHENATION_FREQUENCY_FULL() { return get_static_field<"HYPHENATION_FREQUENCY_FULL", jint>(); }
	static jint HYPHENATION_FREQUENCY_NONE() { return get_static_field<"HYPHENATION_FREQUENCY_NONE", jint>(); }
	static jint HYPHENATION_FREQUENCY_NORMAL() { return get_static_field<"HYPHENATION_FREQUENCY_NORMAL", jint>(); }
	static jint JUSTIFICATION_MODE_INTER_WORD() { return get_static_field<"JUSTIFICATION_MODE_INTER_WORD", jint>(); }
	static jint JUSTIFICATION_MODE_NONE() { return get_static_field<"JUSTIFICATION_MODE_NONE", jint>(); }

	jni::ref<android::graphics::text::LineBreaker_Result> computeLineBreaks(jni::ref<android::graphics::text::MeasuredText> measuredPara, jni::ref<android::graphics::text::LineBreaker_ParagraphConstraints> constraints, jint lineNumber) { return call_method<"computeLineBreaks", jni::ref<android::graphics::text::LineBreaker_Result>>(measuredPara, constraints, lineNumber); }

protected:

	LineBreaker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER