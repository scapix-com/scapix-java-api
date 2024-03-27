// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::text { class LineBreaker_ParagraphConstraints; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::text::LineBreaker_ParagraphConstraints>
{
	static constexpr fixed_string class_name = "android/graphics/text/LineBreaker$ParagraphConstraints";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::text::LineBreaker_ParagraphConstraints : public jni::object_base<"android/graphics/text/LineBreaker$ParagraphConstraints",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::text::LineBreaker_ParagraphConstraints> new_object() { return base_::new_object(); }
	void setWidth(jfloat width) { return call_method<"setWidth", void>(width); }
	void setIndent(jfloat firstWidth, jint firstWidthLineCount) { return call_method<"setIndent", void>(firstWidth, firstWidthLineCount); }
	void setTabStops(jni::ref<jni::array<jfloat>> tabStops, jfloat defaultTabStop) { return call_method<"setTabStops", void>(tabStops, defaultTabStop); }
	jfloat getWidth() { return call_method<"getWidth", jfloat>(); }
	jfloat getFirstWidth() { return call_method<"getFirstWidth", jfloat>(); }
	jint getFirstWidthLineCount() { return call_method<"getFirstWidthLineCount", jint>(); }
	jni::ref<jni::array<jfloat>> getTabStops() { return call_method<"getTabStops", jni::ref<jni::array<jfloat>>>(); }
	jfloat getDefaultTabStop() { return call_method<"getDefaultTabStop", jfloat>(); }

protected:

	LineBreaker_ParagraphConstraints(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_LINEBREAKER_PARAGRAPHCONSTRAINTS
