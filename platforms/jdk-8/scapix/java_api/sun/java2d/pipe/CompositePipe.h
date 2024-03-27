// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_COMPOSITEPIPE_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_COMPOSITEPIPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class CompositePipe; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::CompositePipe>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/CompositePipe";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_COMPOSITEPIPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_COMPOSITEPIPE)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_COMPOSITEPIPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::CompositePipe : public jni::object_base<"sun/java2d/pipe/CompositePipe",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> startSequence(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2, jni::ref<java::awt::Rectangle> p3, jni::ref<jni::array<jint>> p4) { return call_method<"startSequence", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jboolean needTile(jni::ref<java::lang::Object> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"needTile", jboolean>(p1, p2, p3, p4, p5); }
	void renderPathTile(jni::ref<java::lang::Object> p1, jni::ref<jni::array<jbyte>> p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8) { return call_method<"renderPathTile", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void skipTile(jni::ref<java::lang::Object> p1, jint p2, jint p3) { return call_method<"skipTile", void>(p1, p2, p3); }
	void endSequence(jni::ref<java::lang::Object> p1) { return call_method<"endSequence", void>(p1); }

protected:

	CompositePipe(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_COMPOSITEPIPE