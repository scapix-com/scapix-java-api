// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/style/ParagraphStyle.h>
#include <scapix/java_api/android/text/style/WrapTogetherSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_LINEHEIGHTSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_LINEHEIGHTSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class LineHeightSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::LineHeightSpan>
{
	static constexpr fixed_string class_name = "android/text/style/LineHeightSpan";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::style::ParagraphStyle, scapix::java_api::android::text::style::WrapTogetherSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_LINEHEIGHTSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_LINEHEIGHTSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_LINEHEIGHTSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Paint_FontMetricsInt.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/android/text/style/LineHeightSpan_WithDensity.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::LineHeightSpan : public jni::object_base<"android/text/style/LineHeightSpan",
	java::lang::Object,
	android::text::style::ParagraphStyle,
	android::text::style::WrapTogetherSpan>
{
public:

	using WithDensity = LineHeightSpan_WithDensity;

	void chooseHeight(jni::ref<java::lang::CharSequence> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<android::graphics::Paint_FontMetricsInt> p6) { return call_method<"chooseHeight", void>(p1, p2, p3, p4, p5, p6); }

protected:

	LineHeightSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_LINEHEIGHTSPAN
