// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::geom { class Curve; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::geom::Curve>
{
	static constexpr fixed_string class_name = "sun/awt/geom/Curve";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVE)
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/geom/PathIterator.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/sun/awt/geom/Crossings.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::geom::Curve : public jni::object_base<"sun/awt/geom/Curve",
	java::lang::Object>
{
public:

	static jint INCREASING() { return get_static_field<"INCREASING", jint>(); }
	static jint DECREASING() { return get_static_field<"DECREASING", jint>(); }
	static jint RECT_INTERSECTS() { return get_static_field<"RECT_INTERSECTS", jint>(); }
	static jdouble TMIN() { return get_static_field<"TMIN", jdouble>(); }

	static void insertMove(jni::ref<java::util::Vector> p1, jdouble p2, jdouble p3) { return call_static_method<"insertMove", void>(p1, p2, p3); }
	static void insertLine(jni::ref<java::util::Vector> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5) { return call_static_method<"insertLine", void>(p1, p2, p3, p4, p5); }
	static void insertQuad(jni::ref<java::util::Vector> p1, jdouble p2, jdouble p3, jni::ref<jni::array<jdouble>> p4) { return call_static_method<"insertQuad", void>(p1, p2, p3, p4); }
	static void insertCubic(jni::ref<java::util::Vector> p1, jdouble p2, jdouble p3, jni::ref<jni::array<jdouble>> p4) { return call_static_method<"insertCubic", void>(p1, p2, p3, p4); }
	static jint pointCrossingsForPath(jni::ref<java::awt::geom::PathIterator> p1, jdouble p2, jdouble p3) { return call_static_method<"pointCrossingsForPath", jint>(p1, p2, p3); }
	static jint pointCrossingsForLine(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6) { return call_static_method<"pointCrossingsForLine", jint>(p1, p2, p3, p4, p5, p6); }
	static jint pointCrossingsForQuad(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jint p9) { return call_static_method<"pointCrossingsForQuad", jint>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static jint pointCrossingsForCubic(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jint p11) { return call_static_method<"pointCrossingsForCubic", jint>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static jint rectCrossingsForPath(jni::ref<java::awt::geom::PathIterator> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5) { return call_static_method<"rectCrossingsForPath", jint>(p1, p2, p3, p4, p5); }
	static jint rectCrossingsForLine(jint p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9) { return call_static_method<"rectCrossingsForLine", jint>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static jint rectCrossingsForQuad(jint p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11, jint p12) { return call_static_method<"rectCrossingsForQuad", jint>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	static jint rectCrossingsForCubic(jint p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11, jdouble p12, jdouble p13, jint p14) { return call_static_method<"rectCrossingsForCubic", jint>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static jni::ref<sun::awt::geom::Curve> new_object(jint p1) { return base_::new_object(p1); }
	jint getDirection() { return call_method<"getDirection", jint>(); }
	jni::ref<sun::awt::geom::Curve> getWithDirection(jint p1) { return call_method<"getWithDirection", jni::ref<sun::awt::geom::Curve>>(p1); }
	static jdouble round(jdouble p1) { return call_static_method<"round", jdouble>(p1); }
	static jint orderof(jdouble p1, jdouble p2) { return call_static_method<"orderof", jint>(p1, p2); }
	static jlong signeddiffbits(jdouble p1, jdouble p2) { return call_static_method<"signeddiffbits", jlong>(p1, p2); }
	static jlong diffbits(jdouble p1, jdouble p2) { return call_static_method<"diffbits", jlong>(p1, p2); }
	static jdouble prev(jdouble p1) { return call_static_method<"prev", jdouble>(p1); }
	static jdouble next(jdouble p1) { return call_static_method<"next", jdouble>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> controlPointString() { return call_method<"controlPointString", jni::ref<java::lang::String>>(); }
	jint getOrder() { return call_method<"getOrder", jint>(); }
	jdouble getXTop() { return call_method<"getXTop", jdouble>(); }
	jdouble getYTop() { return call_method<"getYTop", jdouble>(); }
	jdouble getXBot() { return call_method<"getXBot", jdouble>(); }
	jdouble getYBot() { return call_method<"getYBot", jdouble>(); }
	jdouble getXMin() { return call_method<"getXMin", jdouble>(); }
	jdouble getXMax() { return call_method<"getXMax", jdouble>(); }
	jdouble getX0() { return call_method<"getX0", jdouble>(); }
	jdouble getY0() { return call_method<"getY0", jdouble>(); }
	jdouble getX1() { return call_method<"getX1", jdouble>(); }
	jdouble getY1() { return call_method<"getY1", jdouble>(); }
	jdouble XforY(jdouble p1) { return call_method<"XforY", jdouble>(p1); }
	jdouble TforY(jdouble p1) { return call_method<"TforY", jdouble>(p1); }
	jdouble XforT(jdouble p1) { return call_method<"XforT", jdouble>(p1); }
	jdouble YforT(jdouble p1) { return call_method<"YforT", jdouble>(p1); }
	jdouble dXforT(jdouble p1, jint p2) { return call_method<"dXforT", jdouble>(p1, p2); }
	jdouble dYforT(jdouble p1, jint p2) { return call_method<"dYforT", jdouble>(p1, p2); }
	jdouble nextVertical(jdouble p1, jdouble p2) { return call_method<"nextVertical", jdouble>(p1, p2); }
	jint crossingsFor(jdouble p1, jdouble p2) { return call_method<"crossingsFor", jint>(p1, p2); }
	jboolean accumulateCrossings(jni::ref<sun::awt::geom::Crossings> p1) { return call_method<"accumulateCrossings", jboolean>(p1); }
	void enlarge(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"enlarge", void>(p1); }
	jni::ref<sun::awt::geom::Curve> getSubCurve(jdouble p1, jdouble p2) { return call_method<"getSubCurve", jni::ref<sun::awt::geom::Curve>>(p1, p2); }
	jni::ref<sun::awt::geom::Curve> getReversedCurve() { return call_method<"getReversedCurve", jni::ref<sun::awt::geom::Curve>>(); }
	jni::ref<sun::awt::geom::Curve> getSubCurve(jdouble p1, jdouble p2, jint p3) { return call_method<"getSubCurve", jni::ref<sun::awt::geom::Curve>>(p1, p2, p3); }
	jint compareTo(jni::ref<sun::awt::geom::Curve> p1, jni::ref<jni::array<jdouble>> p2) { return call_method<"compareTo", jint>(p1, p2); }
	jboolean findIntersect(jni::ref<sun::awt::geom::Curve> p1, jni::ref<jni::array<jdouble>> p2, jdouble p3, jint p4, jint p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11, jdouble p12, jdouble p13, jdouble p14, jdouble p15, jdouble p16, jdouble p17) { return call_method<"findIntersect", jboolean>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); }
	jdouble refineTforY(jdouble p1, jdouble p2, jdouble p3) { return call_method<"refineTforY", jdouble>(p1, p2, p3); }
	jboolean fairlyClose(jdouble p1, jdouble p2) { return call_method<"fairlyClose", jboolean>(p1, p2); }
	jint getSegment(jni::ref<jni::array<jdouble>> p1) { return call_method<"getSegment", jint>(p1); }

protected:

	Curve(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVE
