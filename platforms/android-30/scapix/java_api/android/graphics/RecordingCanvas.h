// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/Canvas.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECORDINGCANVAS_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECORDINGCANVAS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class RecordingCanvas; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::RecordingCanvas>
{
	static constexpr fixed_string class_name = "android/graphics/RecordingCanvas";
	using base_classes = std::tuple<scapix::java_api::android::graphics::Canvas>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECORDINGCANVAS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECORDINGCANVAS)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECORDINGCANVAS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/Canvas_VertexMode.h>
#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/graphics/NinePatch.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/graphics/Picture.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/android/graphics/RenderNode.h>
#include <scapix/java_api/android/graphics/text/MeasuredText.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::RecordingCanvas : public jni::object_base<"android/graphics/RecordingCanvas",
	android::graphics::Canvas>
{
public:

	void setDensity(jint density) { return call_method<"setDensity", void>(density); }
	jboolean isHardwareAccelerated() { return call_method<"isHardwareAccelerated", jboolean>(); }
	void setBitmap(jni::ref<android::graphics::Bitmap> bitmap) { return call_method<"setBitmap", void>(bitmap); }
	jboolean isOpaque() { return call_method<"isOpaque", jboolean>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jint getMaximumBitmapWidth() { return call_method<"getMaximumBitmapWidth", jint>(); }
	jint getMaximumBitmapHeight() { return call_method<"getMaximumBitmapHeight", jint>(); }
	void enableZ() { return call_method<"enableZ", void>(); }
	void disableZ() { return call_method<"disableZ", void>(); }
	void drawRenderNode(jni::ref<android::graphics::RenderNode> renderNode) { return call_method<"drawRenderNode", void>(renderNode); }
	void drawTextOnPath(jni::ref<jni::array<jchar>> text, jint index, jint count, jni::ref<android::graphics::Path> path, jfloat hOffset, jfloat vOffset, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextOnPath", void>(text, index, count, path, hOffset, vOffset, paint); }
	void drawTextOnPath(jni::ref<java::lang::String> text, jni::ref<android::graphics::Path> path, jfloat hOffset, jfloat vOffset, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextOnPath", void>(text, path, hOffset, vOffset, paint); }
	void drawTextRun(jni::ref<jni::array<jchar>> text, jint index, jint count, jint contextIndex, jint contextCount, jfloat x, jfloat y, jboolean isRtl, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextRun", void>(text, index, count, contextIndex, contextCount, x, y, isRtl, paint); }
	void drawTextRun(jni::ref<java::lang::CharSequence> text, jint start, jint end, jint contextStart, jint contextEnd, jfloat x, jfloat y, jboolean isRtl, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextRun", void>(text, start, end, contextStart, contextEnd, x, y, isRtl, paint); }
	void drawTextRun(jni::ref<android::graphics::text::MeasuredText> measuredText, jint start, jint end, jint contextStart, jint contextEnd, jfloat x, jfloat y, jboolean isRtl, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextRun", void>(measuredText, start, end, contextStart, contextEnd, x, y, isRtl, paint); }
	void drawPosText(jni::ref<jni::array<jchar>> text, jint index, jint count, jni::ref<jni::array<jfloat>> pos, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPosText", void>(text, index, count, pos, paint); }
	void drawPosText(jni::ref<java::lang::String> text, jni::ref<jni::array<jfloat>> pos, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPosText", void>(text, pos, paint); }
	void drawOval(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Paint> paint) { return call_method<"drawOval", void>(left, top, right, bottom, paint); }
	void drawOval(jni::ref<android::graphics::RectF> oval, jni::ref<android::graphics::Paint> paint) { return call_method<"drawOval", void>(oval, paint); }
	void drawDoubleRoundRect(jni::ref<android::graphics::RectF> outer, jfloat outerRx, jfloat outerRy, jni::ref<android::graphics::RectF> inner, jfloat innerRx, jfloat innerRy, jni::ref<android::graphics::Paint> paint) { return call_method<"drawDoubleRoundRect", void>(outer, outerRx, outerRy, inner, innerRx, innerRy, paint); }
	void drawDoubleRoundRect(jni::ref<android::graphics::RectF> outer, jni::ref<jni::array<jfloat>> outerRadii, jni::ref<android::graphics::RectF> inner, jni::ref<jni::array<jfloat>> innerRadii, jni::ref<android::graphics::Paint> paint) { return call_method<"drawDoubleRoundRect", void>(outer, outerRadii, inner, innerRadii, paint); }
	void drawPoint(jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPoint", void>(x, y, paint); }
	void drawCircle(jfloat cx, jfloat cy, jfloat radius, jni::ref<android::graphics::Paint> paint) { return call_method<"drawCircle", void>(cx, cy, radius, paint); }
	void drawPatch(jni::ref<android::graphics::NinePatch> patch, jni::ref<android::graphics::Rect> dst, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPatch", void>(patch, dst, paint); }
	void drawPatch(jni::ref<android::graphics::NinePatch> patch, jni::ref<android::graphics::RectF> dst, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPatch", void>(patch, dst, paint); }
	void drawText(jni::ref<jni::array<jchar>> text, jint index, jint count, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, index, count, x, y, paint); }
	void drawText(jni::ref<java::lang::CharSequence> text, jint start, jint end, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, start, end, x, y, paint); }
	void drawText(jni::ref<java::lang::String> text, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, x, y, paint); }
	void drawText(jni::ref<java::lang::String> text, jint start, jint end, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, start, end, x, y, paint); }
	void drawArc(jfloat left, jfloat top, jfloat right, jfloat bottom, jfloat startAngle, jfloat sweepAngle, jboolean useCenter, jni::ref<android::graphics::Paint> paint) { return call_method<"drawArc", void>(left, top, right, bottom, startAngle, sweepAngle, useCenter, paint); }
	void drawArc(jni::ref<android::graphics::RectF> oval, jfloat startAngle, jfloat sweepAngle, jboolean useCenter, jni::ref<android::graphics::Paint> paint) { return call_method<"drawArc", void>(oval, startAngle, sweepAngle, useCenter, paint); }
	void drawLine(jfloat startX, jfloat startY, jfloat stopX, jfloat stopY, jni::ref<android::graphics::Paint> paint) { return call_method<"drawLine", void>(startX, startY, stopX, stopY, paint); }
	void drawVertices(jni::ref<android::graphics::Canvas_VertexMode> mode, jint vertexCount, jni::ref<jni::array<jfloat>> verts, jint vertOffset, jni::ref<jni::array<jfloat>> texs, jint texOffset, jni::ref<jni::array<jint>> colors, jint colorOffset, jni::ref<jni::array<jshort>> indices, jint indexOffset, jint indexCount, jni::ref<android::graphics::Paint> paint) { return call_method<"drawVertices", void>(mode, vertexCount, verts, vertOffset, texs, texOffset, colors, colorOffset, indices, indexOffset, indexCount, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jfloat left, jfloat top, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, left, top, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<android::graphics::Matrix> matrix, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, matrix, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<android::graphics::Rect> src, jni::ref<android::graphics::Rect> dst, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, src, dst, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<android::graphics::Rect> src, jni::ref<android::graphics::RectF> dst, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, src, dst, paint); }
	void drawBitmap(jni::ref<jni::array<jint>> colors, jint offset, jint stride, jfloat x, jfloat y, jint width, jint height, jboolean hasAlpha, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(colors, offset, stride, x, y, width, height, hasAlpha, paint); }
	void drawBitmap(jni::ref<jni::array<jint>> colors, jint offset, jint stride, jint x, jint y, jint width, jint height, jboolean hasAlpha, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(colors, offset, stride, x, y, width, height, hasAlpha, paint); }
	void drawRGB(jint r, jint g, jint b) { return call_method<"drawRGB", void>(r, g, b); }
	void drawColor(jint color) { return call_method<"drawColor", void>(color); }
	void drawColor(jint color, jni::ref<android::graphics::PorterDuff_Mode> mode) { return call_method<"drawColor", void>(color, mode); }
	void drawColor(jint color, jni::ref<android::graphics::BlendMode> mode) { return call_method<"drawColor", void>(color, mode); }
	void drawColor(jlong color, jni::ref<android::graphics::BlendMode> p2) { return call_method<"drawColor", void>(color, p2); }
	void drawLines(jni::ref<jni::array<jfloat>> pts, jint offset, jint count, jni::ref<android::graphics::Paint> paint) { return call_method<"drawLines", void>(pts, offset, count, paint); }
	void drawLines(jni::ref<jni::array<jfloat>> pts, jni::ref<android::graphics::Paint> paint) { return call_method<"drawLines", void>(pts, paint); }
	void drawPoints(jni::ref<jni::array<jfloat>> pts, jint offset, jint count, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPoints", void>(pts, offset, count, paint); }
	void drawPoints(jni::ref<jni::array<jfloat>> pts, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPoints", void>(pts, paint); }
	void drawPicture(jni::ref<android::graphics::Picture> picture) { return call_method<"drawPicture", void>(picture); }
	void drawPicture(jni::ref<android::graphics::Picture> picture, jni::ref<android::graphics::Rect> dst) { return call_method<"drawPicture", void>(picture, dst); }
	void drawPicture(jni::ref<android::graphics::Picture> picture, jni::ref<android::graphics::RectF> dst) { return call_method<"drawPicture", void>(picture, dst); }
	void drawRoundRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jfloat rx, jfloat ry, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRoundRect", void>(left, top, right, bottom, rx, ry, paint); }
	void drawRoundRect(jni::ref<android::graphics::RectF> rect, jfloat rx, jfloat ry, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRoundRect", void>(rect, rx, ry, paint); }
	void drawPaint(jni::ref<android::graphics::Paint> paint) { return call_method<"drawPaint", void>(paint); }
	void drawARGB(jint a, jint r, jint g, jint b) { return call_method<"drawARGB", void>(a, r, g, b); }
	void drawPath(jni::ref<android::graphics::Path> path, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPath", void>(path, paint); }
	void drawRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRect", void>(left, top, right, bottom, paint); }
	void drawRect(jni::ref<android::graphics::Rect> r, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRect", void>(r, paint); }
	void drawRect(jni::ref<android::graphics::RectF> rect, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRect", void>(rect, paint); }
	void drawBitmapMesh(jni::ref<android::graphics::Bitmap> bitmap, jint meshWidth, jint meshHeight, jni::ref<jni::array<jfloat>> verts, jint vertOffset, jni::ref<jni::array<jint>> colors, jint colorOffset, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmapMesh", void>(bitmap, meshWidth, meshHeight, verts, vertOffset, colors, colorOffset, paint); }

protected:

	RecordingCanvas(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECORDINGCANVAS
