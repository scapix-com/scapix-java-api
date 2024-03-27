// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDCONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class BufferedContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::BufferedContext>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/BufferedContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDCONTEXT)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Composite.h>
#include <scapix/java_api/java/awt/Paint.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/pipe/Region.h>
#include <scapix/java_api/sun/java2d/pipe/RenderQueue.h>
#include <scapix/java_api/sun/java2d/pipe/hw/AccelSurface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::BufferedContext : public jni::object_base<"sun/java2d/pipe/BufferedContext",
	java::lang::Object>
{
public:

	static jint NO_CONTEXT_FLAGS() { return get_static_field<"NO_CONTEXT_FLAGS", jint>(); }
	static jint SRC_IS_OPAQUE() { return get_static_field<"SRC_IS_OPAQUE", jint>(); }
	static jint USE_MASK() { return get_static_field<"USE_MASK", jint>(); }

	static void validateContext(jni::ref<sun::java2d::pipe::hw::AccelSurface> p1, jni::ref<sun::java2d::pipe::hw::AccelSurface> p2, jni::ref<sun::java2d::pipe::Region> p3, jni::ref<java::awt::Composite> p4, jni::ref<java::awt::geom::AffineTransform> p5, jni::ref<java::awt::Paint> p6, jni::ref<sun::java2d::SunGraphics2D> p7, jint p8) { return call_static_method<"validateContext", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	static void validateContext(jni::ref<sun::java2d::pipe::hw::AccelSurface> p1) { return call_static_method<"validateContext", void>(p1); }
	void validate(jni::ref<sun::java2d::pipe::hw::AccelSurface> p1, jni::ref<sun::java2d::pipe::hw::AccelSurface> p2, jni::ref<sun::java2d::pipe::Region> p3, jni::ref<java::awt::Composite> p4, jni::ref<java::awt::geom::AffineTransform> p5, jni::ref<java::awt::Paint> p6, jni::ref<sun::java2d::SunGraphics2D> p7, jint p8) { return call_method<"validate", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void invalidateContext() { return call_method<"invalidateContext", void>(); }
	jni::ref<sun::java2d::pipe::RenderQueue> getRenderQueue() { return call_method<"getRenderQueue", jni::ref<sun::java2d::pipe::RenderQueue>>(); }
	void saveState() { return call_method<"saveState", void>(); }
	void restoreState() { return call_method<"restoreState", void>(); }

protected:

	BufferedContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDCONTEXT