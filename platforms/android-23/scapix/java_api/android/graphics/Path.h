// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Path; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Path>
{
	static constexpr fixed_string class_name = "android/graphics/Path";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/graphics/Path_Direction.h>
#include <scapix/java_api/android/graphics/Path_FillType.h>
#include <scapix/java_api/android/graphics/Path_Op.h>
#include <scapix/java_api/android/graphics/RectF.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Path : public jni::object_base<"android/graphics/Path",
	java::lang::Object>
{
public:

	using Direction = Path_Direction;
	using FillType = Path_FillType;
	using Op = Path_Op;

	static jni::ref<android::graphics::Path> new_object() { return base_::new_object(); }
	static jni::ref<android::graphics::Path> new_object(jni::ref<android::graphics::Path> src) { return base_::new_object(src); }
	void reset() { return call_method<"reset", void>(); }
	void rewind() { return call_method<"rewind", void>(); }
	void set(jni::ref<android::graphics::Path> src) { return call_method<"set", void>(src); }
	jboolean op(jni::ref<android::graphics::Path> path, jni::ref<android::graphics::Path_Op> op) { return call_method<"op", jboolean>(path, op); }
	jboolean op(jni::ref<android::graphics::Path> path1, jni::ref<android::graphics::Path> path2, jni::ref<android::graphics::Path_Op> op) { return call_method<"op", jboolean>(path1, path2, op); }
	jboolean isConvex() { return call_method<"isConvex", jboolean>(); }
	jni::ref<android::graphics::Path_FillType> getFillType() { return call_method<"getFillType", jni::ref<android::graphics::Path_FillType>>(); }
	void setFillType(jni::ref<android::graphics::Path_FillType> ft) { return call_method<"setFillType", void>(ft); }
	jboolean isInverseFillType() { return call_method<"isInverseFillType", jboolean>(); }
	void toggleInverseFillType() { return call_method<"toggleInverseFillType", void>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean isRect(jni::ref<android::graphics::RectF> rect) { return call_method<"isRect", jboolean>(rect); }
	void computeBounds(jni::ref<android::graphics::RectF> bounds, jboolean exact) { return call_method<"computeBounds", void>(bounds, exact); }
	void incReserve(jint extraPtCount) { return call_method<"incReserve", void>(extraPtCount); }
	void moveTo(jfloat x, jfloat y) { return call_method<"moveTo", void>(x, y); }
	void rMoveTo(jfloat dx, jfloat dy) { return call_method<"rMoveTo", void>(dx, dy); }
	void lineTo(jfloat x, jfloat y) { return call_method<"lineTo", void>(x, y); }
	void rLineTo(jfloat dx, jfloat dy) { return call_method<"rLineTo", void>(dx, dy); }
	void quadTo(jfloat x1, jfloat y1, jfloat x2, jfloat y2) { return call_method<"quadTo", void>(x1, y1, x2, y2); }
	void rQuadTo(jfloat dx1, jfloat dy1, jfloat dx2, jfloat dy2) { return call_method<"rQuadTo", void>(dx1, dy1, dx2, dy2); }
	void cubicTo(jfloat x1, jfloat y1, jfloat x2, jfloat y2, jfloat x3, jfloat y3) { return call_method<"cubicTo", void>(x1, y1, x2, y2, x3, y3); }
	void rCubicTo(jfloat x1, jfloat y1, jfloat x2, jfloat y2, jfloat x3, jfloat y3) { return call_method<"rCubicTo", void>(x1, y1, x2, y2, x3, y3); }
	void arcTo(jni::ref<android::graphics::RectF> oval, jfloat startAngle, jfloat sweepAngle, jboolean forceMoveTo) { return call_method<"arcTo", void>(oval, startAngle, sweepAngle, forceMoveTo); }
	void arcTo(jni::ref<android::graphics::RectF> oval, jfloat startAngle, jfloat sweepAngle) { return call_method<"arcTo", void>(oval, startAngle, sweepAngle); }
	void arcTo(jfloat left, jfloat top, jfloat right, jfloat bottom, jfloat startAngle, jfloat sweepAngle, jboolean forceMoveTo) { return call_method<"arcTo", void>(left, top, right, bottom, startAngle, sweepAngle, forceMoveTo); }
	void close() { return call_method<"close", void>(); }
	void addRect(jni::ref<android::graphics::RectF> rect, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addRect", void>(rect, dir); }
	void addRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addRect", void>(left, top, right, bottom, dir); }
	void addOval(jni::ref<android::graphics::RectF> oval, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addOval", void>(oval, dir); }
	void addOval(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addOval", void>(left, top, right, bottom, dir); }
	void addCircle(jfloat x, jfloat y, jfloat radius, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addCircle", void>(x, y, radius, dir); }
	void addArc(jni::ref<android::graphics::RectF> oval, jfloat startAngle, jfloat sweepAngle) { return call_method<"addArc", void>(oval, startAngle, sweepAngle); }
	void addArc(jfloat left, jfloat top, jfloat right, jfloat bottom, jfloat startAngle, jfloat sweepAngle) { return call_method<"addArc", void>(left, top, right, bottom, startAngle, sweepAngle); }
	void addRoundRect(jni::ref<android::graphics::RectF> rect, jfloat rx, jfloat ry, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addRoundRect", void>(rect, rx, ry, dir); }
	void addRoundRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jfloat rx, jfloat ry, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addRoundRect", void>(left, top, right, bottom, rx, ry, dir); }
	void addRoundRect(jni::ref<android::graphics::RectF> rect, jni::ref<jni::array<jfloat>> radii, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addRoundRect", void>(rect, radii, dir); }
	void addRoundRect(jfloat left, jfloat top, jfloat right, jfloat bottom, jni::ref<jni::array<jfloat>> radii, jni::ref<android::graphics::Path_Direction> dir) { return call_method<"addRoundRect", void>(left, top, right, bottom, radii, dir); }
	void addPath(jni::ref<android::graphics::Path> src, jfloat dx, jfloat dy) { return call_method<"addPath", void>(src, dx, dy); }
	void addPath(jni::ref<android::graphics::Path> src) { return call_method<"addPath", void>(src); }
	void addPath(jni::ref<android::graphics::Path> src, jni::ref<android::graphics::Matrix> matrix) { return call_method<"addPath", void>(src, matrix); }
	void offset(jfloat dx, jfloat dy, jni::ref<android::graphics::Path> dst) { return call_method<"offset", void>(dx, dy, dst); }
	void offset(jfloat dx, jfloat dy) { return call_method<"offset", void>(dx, dy); }
	void setLastPoint(jfloat dx, jfloat dy) { return call_method<"setLastPoint", void>(dx, dy); }
	void transform(jni::ref<android::graphics::Matrix> matrix, jni::ref<android::graphics::Path> dst) { return call_method<"transform", void>(matrix, dst); }
	void transform(jni::ref<android::graphics::Matrix> matrix) { return call_method<"transform", void>(matrix); }

protected:

	Path(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH
