// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Layout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Layout>
{
	static constexpr fixed_string class_name = "android/text/Layout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT)
#define SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/text/Layout_Alignment.h>
#include <scapix/java_api/android/text/Layout_Directions.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Layout : public jni::object_base<"android/text/Layout",
	java::lang::Object>
{
public:

	using Alignment = Layout_Alignment;
	using Directions = Layout_Directions;

	static jint DIR_LEFT_TO_RIGHT() { return get_static_field<"DIR_LEFT_TO_RIGHT", jint>(); }
	static jint DIR_RIGHT_TO_LEFT() { return get_static_field<"DIR_RIGHT_TO_LEFT", jint>(); }

	static jfloat getDesiredWidth(jni::ref<java::lang::CharSequence> source, jni::ref<android::text::TextPaint> paint) { return call_static_method<"getDesiredWidth", jfloat>(source, paint); }
	static jfloat getDesiredWidth(jni::ref<java::lang::CharSequence> source, jint start, jint end, jni::ref<android::text::TextPaint> paint) { return call_static_method<"getDesiredWidth", jfloat>(source, start, end, paint); }
	void draw(jni::ref<android::graphics::Canvas> c) { return call_method<"draw", void>(c); }
	void draw(jni::ref<android::graphics::Canvas> canvas, jni::ref<android::graphics::Path> highlight, jni::ref<android::graphics::Paint> highlightPaint, jint cursorOffsetVertical) { return call_method<"draw", void>(canvas, highlight, highlightPaint, cursorOffsetVertical); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::text::TextPaint> getPaint() { return call_method<"getPaint", jni::ref<android::text::TextPaint>>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getEllipsizedWidth() { return call_method<"getEllipsizedWidth", jint>(); }
	void increaseWidthTo(jint wid) { return call_method<"increaseWidthTo", void>(wid); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jni::ref<android::text::Layout_Alignment> getAlignment() { return call_method<"getAlignment", jni::ref<android::text::Layout_Alignment>>(); }
	jfloat getSpacingMultiplier() { return call_method<"getSpacingMultiplier", jfloat>(); }
	jfloat getSpacingAdd() { return call_method<"getSpacingAdd", jfloat>(); }
	jint getLineCount() { return call_method<"getLineCount", jint>(); }
	jint getLineBounds(jint line, jni::ref<android::graphics::Rect> bounds) { return call_method<"getLineBounds", jint>(line, bounds); }
	jint getLineTop(jint p1) { return call_method<"getLineTop", jint>(p1); }
	jint getLineDescent(jint p1) { return call_method<"getLineDescent", jint>(p1); }
	jint getLineStart(jint p1) { return call_method<"getLineStart", jint>(p1); }
	jint getParagraphDirection(jint p1) { return call_method<"getParagraphDirection", jint>(p1); }
	jboolean getLineContainsTab(jint p1) { return call_method<"getLineContainsTab", jboolean>(p1); }
	jni::ref<android::text::Layout_Directions> getLineDirections(jint p1) { return call_method<"getLineDirections", jni::ref<android::text::Layout_Directions>>(p1); }
	jint getTopPadding() { return call_method<"getTopPadding", jint>(); }
	jint getBottomPadding() { return call_method<"getBottomPadding", jint>(); }
	jboolean isRtlCharAt(jint offset) { return call_method<"isRtlCharAt", jboolean>(offset); }
	jfloat getPrimaryHorizontal(jint offset) { return call_method<"getPrimaryHorizontal", jfloat>(offset); }
	jfloat getSecondaryHorizontal(jint offset) { return call_method<"getSecondaryHorizontal", jfloat>(offset); }
	jfloat getLineLeft(jint line) { return call_method<"getLineLeft", jfloat>(line); }
	jfloat getLineRight(jint line) { return call_method<"getLineRight", jfloat>(line); }
	jfloat getLineMax(jint line) { return call_method<"getLineMax", jfloat>(line); }
	jfloat getLineWidth(jint line) { return call_method<"getLineWidth", jfloat>(line); }
	jint getLineForVertical(jint vertical) { return call_method<"getLineForVertical", jint>(vertical); }
	jint getLineForOffset(jint offset) { return call_method<"getLineForOffset", jint>(offset); }
	jint getOffsetForHorizontal(jint line, jfloat horiz) { return call_method<"getOffsetForHorizontal", jint>(line, horiz); }
	jint getLineEnd(jint line) { return call_method<"getLineEnd", jint>(line); }
	jint getLineVisibleEnd(jint line) { return call_method<"getLineVisibleEnd", jint>(line); }
	jint getLineBottom(jint line) { return call_method<"getLineBottom", jint>(line); }
	jint getLineBaseline(jint line) { return call_method<"getLineBaseline", jint>(line); }
	jint getLineAscent(jint line) { return call_method<"getLineAscent", jint>(line); }
	jint getOffsetToLeftOf(jint offset) { return call_method<"getOffsetToLeftOf", jint>(offset); }
	jint getOffsetToRightOf(jint offset) { return call_method<"getOffsetToRightOf", jint>(offset); }
	void getCursorPath(jint point, jni::ref<android::graphics::Path> dest, jni::ref<java::lang::CharSequence> editingBuffer) { return call_method<"getCursorPath", void>(point, dest, editingBuffer); }
	void getSelectionPath(jint start, jint end, jni::ref<android::graphics::Path> dest) { return call_method<"getSelectionPath", void>(start, end, dest); }
	jni::ref<android::text::Layout_Alignment> getParagraphAlignment(jint line) { return call_method<"getParagraphAlignment", jni::ref<android::text::Layout_Alignment>>(line); }
	jint getParagraphLeft(jint line) { return call_method<"getParagraphLeft", jint>(line); }
	jint getParagraphRight(jint line) { return call_method<"getParagraphRight", jint>(line); }
	jint getEllipsisStart(jint p1) { return call_method<"getEllipsisStart", jint>(p1); }
	jint getEllipsisCount(jint p1) { return call_method<"getEllipsisCount", jint>(p1); }

protected:

	Layout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT
