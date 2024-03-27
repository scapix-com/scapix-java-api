// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_CANVAS_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_CANVAS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Canvas; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Canvas>
{
	static constexpr fixed_string class_name = "android/graphics/Canvas";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_CANVAS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_CANVAS)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_CANVAS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Canvas_EdgeType.h>
#include <scapix/java_api/android/graphics/Canvas_VertexMode.h>
#include <scapix/java_api/android/graphics/DrawFilter.h>
#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/graphics/Picture.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/graphics/Region_Op.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Canvas : public jni::object_base<"android/graphics/Canvas",
	java::lang::Object>
{
public:

	using VertexMode = Canvas_VertexMode;
	using EdgeType = Canvas_EdgeType;

	static jint ALL_SAVE_FLAG() { return get_static_field<"ALL_SAVE_FLAG", jint>(); }
	static jint CLIP_SAVE_FLAG() { return get_static_field<"CLIP_SAVE_FLAG", jint>(); }
	static jint CLIP_TO_LAYER_SAVE_FLAG() { return get_static_field<"CLIP_TO_LAYER_SAVE_FLAG", jint>(); }
	static jint FULL_COLOR_LAYER_SAVE_FLAG() { return get_static_field<"FULL_COLOR_LAYER_SAVE_FLAG", jint>(); }
	static jint HAS_ALPHA_LAYER_SAVE_FLAG() { return get_static_field<"HAS_ALPHA_LAYER_SAVE_FLAG", jint>(); }
	static jint MATRIX_SAVE_FLAG() { return get_static_field<"MATRIX_SAVE_FLAG", jint>(); }

	static jni::ref<android::graphics::Canvas> new_object() { return base_::new_object(); }
	static jni::ref<android::graphics::Canvas> new_object(jni::ref<android::graphics::Bitmap> bitmap) { return base_::new_object(bitmap); }
	jboolean isHardwareAccelerated() { return call_method<"isHardwareAccelerated", jboolean>(); }
	void setBitmap(jni::ref<android::graphics::Bitmap> bitmap) { return call_method<"setBitmap", void>(bitmap); }
	jboolean isOpaque() { return call_method<"isOpaque", jboolean>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jint getDensity() { return call_method<"getDensity", jint>(); }
	void setDensity(jint density) { return call_method<"setDensity", void>(density); }
	jint getMaximumBitmapWidth() { return call_method<"getMaximumBitmapWidth", jint>(); }
	jint getMaximumBitmapHeight() { return call_method<"getMaximumBitmapHeight", jint>(); }
	jint save() { return call_method<"save", jint>(); }
	jint save(jint saveFlags) { return call_method<"save", jint>(saveFlags); }
	jint saveLayer(jni::ref<android::graphics::RectF> bounds, jni::ref<android::graphics::Paint> paint, jint saveFlags) { return call_method<"saveLayer", jint>(bounds, paint, saveFlags); }
	jint saveLayer(jni::ref<android::graphics::RectF> bounds, jni::ref<android::graphics::Paint> paint) { return call_method<"saveLayer", jint>(bounds, paint); }
	jint saveLayer(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Paint> paint, jint saveFlags) { return call_method<"saveLayer", jint>(left, top, right, bottom, paint, saveFlags); }
	jint saveLayer(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Paint> paint) { return call_method<"saveLayer", jint>(left, top, right, bottom, paint); }
	jint saveLayerAlpha(jni::ref<android::graphics::RectF> bounds, jint alpha, jint saveFlags) { return call_method<"saveLayerAlpha", jint>(bounds, alpha, saveFlags); }
	jint saveLayerAlpha(jni::ref<android::graphics::RectF> bounds, jint alpha) { return call_method<"saveLayerAlpha", jint>(bounds, alpha); }
	jint saveLayerAlpha(jfloat left, jfloat top, jfloat right, jfloat bottom, jint alpha, jint saveFlags) { return call_method<"saveLayerAlpha", jint>(left, top, right, bottom, alpha, saveFlags); }
	jint saveLayerAlpha(jfloat left, jfloat top, jfloat right, jfloat bottom, jint alpha) { return call_method<"saveLayerAlpha", jint>(left, top, right, bottom, alpha); }
	void restore() { return call_method<"restore", void>(); }
	jint getSaveCount() { return call_method<"getSaveCount", jint>(); }
	void restoreToCount(jint saveCount) { return call_method<"restoreToCount", void>(saveCount); }
	void translate(jfloat dx, jfloat dy) { return call_method<"translate", void>(dx, dy); }
	void scale(jfloat sx, jfloat sy) { return call_method<"scale", void>(sx, sy); }
	void scale(jfloat sx, jfloat sy, jfloat px, jfloat py) { return call_method<"scale", void>(sx, sy, px, py); }
	void rotate(jfloat degrees) { return call_method<"rotate", void>(degrees); }
	void rotate(jfloat degrees, jfloat px, jfloat py) { return call_method<"rotate", void>(degrees, px, py); }
	void skew(jfloat sx, jfloat sy) { return call_method<"skew", void>(sx, sy); }
	void concat(jni::ref<android::graphics::Matrix> matrix) { return call_method<"concat", void>(matrix); }
	void setMatrix(jni::ref<android::graphics::Matrix> matrix) { return call_method<"setMatrix", void>(matrix); }
	void getMatrix(jni::ref<android::graphics::Matrix> ctm) { return call_method<"getMatrix", void>(ctm); }
	jni::ref<android::graphics::Matrix> getMatrix() { return call_method<"getMatrix", jni::ref<android::graphics::Matrix>>(); }
	jboolean clipRect(jni::ref<android::graphics::RectF> rect, jni::ref<android::graphics::Region_Op> op) { return call_method<"clipRect", jboolean>(rect, op); }
	jboolean clipRect(jni::ref<android::graphics::Rect> rect, jni::ref<android::graphics::Region_Op> op) { return call_method<"clipRect", jboolean>(rect, op); }
	jboolean clipRect(jni::ref<android::graphics::RectF> rect) { return call_method<"clipRect", jboolean>(rect); }
	jboolean clipRect(jni::ref<android::graphics::Rect> rect) { return call_method<"clipRect", jboolean>(rect); }
	jboolean clipRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Region_Op> op) { return call_method<"clipRect", jboolean>(left, top, right, bottom, op); }
	jboolean clipRect(jfloat left, jfloat top, jfloat right, jfloat bottom) { return call_method<"clipRect", jboolean>(left, top, right, bottom); }
	jboolean clipRect(jint left, jint top, jint right, jint bottom) { return call_method<"clipRect", jboolean>(left, top, right, bottom); }
	jboolean clipPath(jni::ref<android::graphics::Path> path, jni::ref<android::graphics::Region_Op> op) { return call_method<"clipPath", jboolean>(path, op); }
	jboolean clipPath(jni::ref<android::graphics::Path> path) { return call_method<"clipPath", jboolean>(path); }
	jboolean clipRegion(jni::ref<android::graphics::Region> region, jni::ref<android::graphics::Region_Op> op) { return call_method<"clipRegion", jboolean>(region, op); }
	jboolean clipRegion(jni::ref<android::graphics::Region> region) { return call_method<"clipRegion", jboolean>(region); }
	jni::ref<android::graphics::DrawFilter> getDrawFilter() { return call_method<"getDrawFilter", jni::ref<android::graphics::DrawFilter>>(); }
	void setDrawFilter(jni::ref<android::graphics::DrawFilter> filter) { return call_method<"setDrawFilter", void>(filter); }
	jboolean quickReject(jni::ref<android::graphics::RectF> rect, jni::ref<android::graphics::Canvas_EdgeType> type) { return call_method<"quickReject", jboolean>(rect, type); }
	jboolean quickReject(jni::ref<android::graphics::Path> path, jni::ref<android::graphics::Canvas_EdgeType> type) { return call_method<"quickReject", jboolean>(path, type); }
	jboolean quickReject(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Canvas_EdgeType> type) { return call_method<"quickReject", jboolean>(left, top, right, bottom, type); }
	jboolean getClipBounds(jni::ref<android::graphics::Rect> bounds) { return call_method<"getClipBounds", jboolean>(bounds); }
	jni::ref<android::graphics::Rect> getClipBounds() { return call_method<"getClipBounds", jni::ref<android::graphics::Rect>>(); }
	void drawRGB(jint r, jint g, jint b) { return call_method<"drawRGB", void>(r, g, b); }
	void drawARGB(jint a, jint r, jint g, jint b) { return call_method<"drawARGB", void>(a, r, g, b); }
	void drawColor(jint color) { return call_method<"drawColor", void>(color); }
	void drawColor(jint color, jni::ref<android::graphics::PorterDuff_Mode> mode) { return call_method<"drawColor", void>(color, mode); }
	void drawPaint(jni::ref<android::graphics::Paint> paint) { return call_method<"drawPaint", void>(paint); }
	void drawPoints(jni::ref<jni::array<jfloat>> pts, jint offset, jint count, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPoints", void>(pts, offset, count, paint); }
	void drawPoints(jni::ref<jni::array<jfloat>> pts, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPoints", void>(pts, paint); }
	void drawPoint(jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPoint", void>(x, y, paint); }
	void drawLine(jfloat startX, jfloat startY, jfloat stopX, jfloat stopY, jni::ref<android::graphics::Paint> paint) { return call_method<"drawLine", void>(startX, startY, stopX, stopY, paint); }
	void drawLines(jni::ref<jni::array<jfloat>> pts, jint offset, jint count, jni::ref<android::graphics::Paint> paint) { return call_method<"drawLines", void>(pts, offset, count, paint); }
	void drawLines(jni::ref<jni::array<jfloat>> pts, jni::ref<android::graphics::Paint> paint) { return call_method<"drawLines", void>(pts, paint); }
	void drawRect(jni::ref<android::graphics::RectF> rect, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRect", void>(rect, paint); }
	void drawRect(jni::ref<android::graphics::Rect> r, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRect", void>(r, paint); }
	void drawRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRect", void>(left, top, right, bottom, paint); }
	void drawOval(jni::ref<android::graphics::RectF> oval, jni::ref<android::graphics::Paint> paint) { return call_method<"drawOval", void>(oval, paint); }
	void drawOval(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Paint> paint) { return call_method<"drawOval", void>(left, top, right, bottom, paint); }
	void drawCircle(jfloat cx, jfloat cy, jfloat radius, jni::ref<android::graphics::Paint> paint) { return call_method<"drawCircle", void>(cx, cy, radius, paint); }
	void drawArc(jni::ref<android::graphics::RectF> oval, jfloat startAngle, jfloat sweepAngle, jboolean useCenter, jni::ref<android::graphics::Paint> paint) { return call_method<"drawArc", void>(oval, startAngle, sweepAngle, useCenter, paint); }
	void drawArc(jfloat left, jfloat top, jfloat right, jfloat bottom, jfloat startAngle, jfloat sweepAngle, jboolean useCenter, jni::ref<android::graphics::Paint> paint) { return call_method<"drawArc", void>(left, top, right, bottom, startAngle, sweepAngle, useCenter, paint); }
	void drawRoundRect(jni::ref<android::graphics::RectF> rect, jfloat rx, jfloat ry, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRoundRect", void>(rect, rx, ry, paint); }
	void drawRoundRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jfloat rx, jfloat ry, jni::ref<android::graphics::Paint> paint) { return call_method<"drawRoundRect", void>(left, top, right, bottom, rx, ry, paint); }
	void drawPath(jni::ref<android::graphics::Path> path, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPath", void>(path, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jfloat left, jfloat top, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, left, top, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<android::graphics::Rect> src, jni::ref<android::graphics::RectF> dst, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, src, dst, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<android::graphics::Rect> src, jni::ref<android::graphics::Rect> dst, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, src, dst, paint); }
	void drawBitmap(jni::ref<jni::array<jint>> colors, jint offset, jint stride, jfloat x, jfloat y, jint width, jint height, jboolean hasAlpha, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(colors, offset, stride, x, y, width, height, hasAlpha, paint); }
	void drawBitmap(jni::ref<jni::array<jint>> colors, jint offset, jint stride, jint x, jint y, jint width, jint height, jboolean hasAlpha, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(colors, offset, stride, x, y, width, height, hasAlpha, paint); }
	void drawBitmap(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<android::graphics::Matrix> matrix, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmap", void>(bitmap, matrix, paint); }
	void drawBitmapMesh(jni::ref<android::graphics::Bitmap> bitmap, jint meshWidth, jint meshHeight, jni::ref<jni::array<jfloat>> verts, jint vertOffset, jni::ref<jni::array<jint>> colors, jint colorOffset, jni::ref<android::graphics::Paint> paint) { return call_method<"drawBitmapMesh", void>(bitmap, meshWidth, meshHeight, verts, vertOffset, colors, colorOffset, paint); }
	void drawVertices(jni::ref<android::graphics::Canvas_VertexMode> mode, jint vertexCount, jni::ref<jni::array<jfloat>> verts, jint vertOffset, jni::ref<jni::array<jfloat>> texs, jint texOffset, jni::ref<jni::array<jint>> colors, jint colorOffset, jni::ref<jni::array<jshort>> indices, jint indexOffset, jint indexCount, jni::ref<android::graphics::Paint> paint) { return call_method<"drawVertices", void>(mode, vertexCount, verts, vertOffset, texs, texOffset, colors, colorOffset, indices, indexOffset, indexCount, paint); }
	void drawText(jni::ref<jni::array<jchar>> text, jint index, jint count, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, index, count, x, y, paint); }
	void drawText(jni::ref<java::lang::String> text, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, x, y, paint); }
	void drawText(jni::ref<java::lang::String> text, jint start, jint end, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, start, end, x, y, paint); }
	void drawText(jni::ref<java::lang::CharSequence> text, jint start, jint end, jfloat x, jfloat y, jni::ref<android::graphics::Paint> paint) { return call_method<"drawText", void>(text, start, end, x, y, paint); }
	void drawTextRun(jni::ref<jni::array<jchar>> text, jint index, jint count, jint contextIndex, jint contextCount, jfloat x, jfloat y, jboolean isRtl, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextRun", void>(text, index, count, contextIndex, contextCount, x, y, isRtl, paint); }
	void drawTextRun(jni::ref<java::lang::CharSequence> text, jint start, jint end, jint contextStart, jint contextEnd, jfloat x, jfloat y, jboolean isRtl, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextRun", void>(text, start, end, contextStart, contextEnd, x, y, isRtl, paint); }
	void drawPosText(jni::ref<jni::array<jchar>> text, jint index, jint count, jni::ref<jni::array<jfloat>> pos, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPosText", void>(text, index, count, pos, paint); }
	void drawPosText(jni::ref<java::lang::String> text, jni::ref<jni::array<jfloat>> pos, jni::ref<android::graphics::Paint> paint) { return call_method<"drawPosText", void>(text, pos, paint); }
	void drawTextOnPath(jni::ref<jni::array<jchar>> text, jint index, jint count, jni::ref<android::graphics::Path> path, jfloat hOffset, jfloat vOffset, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextOnPath", void>(text, index, count, path, hOffset, vOffset, paint); }
	void drawTextOnPath(jni::ref<java::lang::String> text, jni::ref<android::graphics::Path> path, jfloat hOffset, jfloat vOffset, jni::ref<android::graphics::Paint> paint) { return call_method<"drawTextOnPath", void>(text, path, hOffset, vOffset, paint); }
	void drawPicture(jni::ref<android::graphics::Picture> picture) { return call_method<"drawPicture", void>(picture); }
	void drawPicture(jni::ref<android::graphics::Picture> picture, jni::ref<android::graphics::RectF> dst) { return call_method<"drawPicture", void>(picture, dst); }
	void drawPicture(jni::ref<android::graphics::Picture> picture, jni::ref<android::graphics::Rect> dst) { return call_method<"drawPicture", void>(picture, dst); }

protected:

	Canvas(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_CANVAS
