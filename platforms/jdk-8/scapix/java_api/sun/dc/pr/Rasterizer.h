// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/pipe/AATileGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_DC_PR_RASTERIZER_FWD
#define SCAPIX_JAVA_API_SUN_DC_PR_RASTERIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::dc::pr { class Rasterizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::dc::pr::Rasterizer>
{
	static constexpr fixed_string class_name = "sun/dc/pr/Rasterizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::pipe::AATileGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_DC_PR_RASTERIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_DC_PR_RASTERIZER)
#define SCAPIX_JAVA_API_SUN_DC_PR_RASTERIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/dc/path/FastPathProducer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::dc::pr::Rasterizer : public jni::object_base<"sun/dc/pr/Rasterizer",
	java::lang::Object,
	sun::java2d::pipe::AATileGenerator>
{
public:

	static jint EOFILL() { return get_static_field<"EOFILL", jint>(); }
	static jint NZFILL() { return get_static_field<"NZFILL", jint>(); }
	static jint STROKE() { return get_static_field<"STROKE", jint>(); }
	static jint ROUND() { return get_static_field<"ROUND", jint>(); }
	static jint SQUARE() { return get_static_field<"SQUARE", jint>(); }
	static jint BUTT() { return get_static_field<"BUTT", jint>(); }
	static jint BEVEL() { return get_static_field<"BEVEL", jint>(); }
	static jint MITER() { return get_static_field<"MITER", jint>(); }
	static jint TILE_SIZE() { return get_static_field<"TILE_SIZE", jint>(); }
	static jint TILE_SIZE_L2S() { return get_static_field<"TILE_SIZE_L2S", jint>(); }
	static jint MAX_ALPHA() { return get_static_field<"MAX_ALPHA", jint>(); }
	static jint MAX_MITER() { return get_static_field<"MAX_MITER", jint>(); }
	static jint MAX_WN() { return get_static_field<"MAX_WN", jint>(); }
	static jint TILE_IS_ALL_0() { return get_static_field<"TILE_IS_ALL_0", jint>(); }
	static jint TILE_IS_ALL_1() { return get_static_field<"TILE_IS_ALL_1", jint>(); }
	static jint TILE_IS_GENERAL() { return get_static_field<"TILE_IS_GENERAL", jint>(); }

	static jni::ref<sun::dc::pr::Rasterizer> new_object() { return base_::new_object(); }
	void setUsage(jint p1) { return call_method<"setUsage", void>(p1); }
	void setPenDiameter(jfloat p1) { return call_method<"setPenDiameter", void>(p1); }
	void setPenT4(jni::ref<jni::array<jfloat>> p1) { return call_method<"setPenT4", void>(p1); }
	void setPenFitting(jfloat p1, jint p2) { return call_method<"setPenFitting", void>(p1, p2); }
	void setPenDisplacement(jfloat p1, jfloat p2) { return call_method<"setPenDisplacement", void>(p1, p2); }
	void setCaps(jint p1) { return call_method<"setCaps", void>(p1); }
	void setCorners(jint p1, jfloat p2) { return call_method<"setCorners", void>(p1, p2); }
	void setDash(jni::ref<jni::array<jfloat>> p1, jfloat p2) { return call_method<"setDash", void>(p1, p2); }
	void setDashT4(jni::ref<jni::array<jfloat>> p1) { return call_method<"setDashT4", void>(p1); }
	void beginPath(jni::ref<jni::array<jfloat>> p1) { return call_method<"beginPath", void>(p1); }
	void beginPath() { return call_method<"beginPath", void>(); }
	void beginSubpath(jfloat p1, jfloat p2) { return call_method<"beginSubpath", void>(p1, p2); }
	void appendLine(jfloat p1, jfloat p2) { return call_method<"appendLine", void>(p1, p2); }
	void appendQuadratic(jfloat p1, jfloat p2, jfloat p3, jfloat p4) { return call_method<"appendQuadratic", void>(p1, p2, p3, p4); }
	void appendCubic(jfloat p1, jfloat p2, jfloat p3, jfloat p4, jfloat p5, jfloat p6) { return call_method<"appendCubic", void>(p1, p2, p3, p4, p5, p6); }
	void closedSubpath() { return call_method<"closedSubpath", void>(); }
	void endPath() { return call_method<"endPath", void>(); }
	void useProxy(jni::ref<sun::dc::path::FastPathProducer> p1) { return call_method<"useProxy", void>(p1); }
	void getAlphaBox(jni::ref<jni::array<jint>> p1) { return call_method<"getAlphaBox", void>(p1); }
	void setOutputArea(jfloat p1, jfloat p2, jint p3, jint p4) { return call_method<"setOutputArea", void>(p1, p2, p3, p4); }
	jint getTileState() { return call_method<"getTileState", jint>(); }
	void writeAlpha(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jint p4) { return call_method<"writeAlpha", void>(p1, p2, p3, p4); }
	void writeAlpha(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jint p4) { return call_method<"writeAlpha", void>(p1, p2, p3, p4); }
	void nextTile() { return call_method<"nextTile", void>(); }
	void reset() { return call_method<"reset", void>(); }
	jint getTileWidth() { return call_method<"getTileWidth", jint>(); }
	jint getTileHeight() { return call_method<"getTileHeight", jint>(); }
	jint getTypicalAlpha() { return call_method<"getTypicalAlpha", jint>(); }
	void getAlpha(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"getAlpha", void>(p1, p2, p3); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	Rasterizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_DC_PR_RASTERIZER