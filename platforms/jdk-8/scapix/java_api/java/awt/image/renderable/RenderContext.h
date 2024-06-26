// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_RENDERCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_RENDERCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image::renderable { class RenderContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::renderable::RenderContext>
{
	static constexpr fixed_string class_name = "java/awt/image/renderable/RenderContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_RENDERCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_RENDERCONTEXT)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_RENDERCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/RenderingHints.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::renderable::RenderContext : public jni::object_base<"java/awt/image/renderable/RenderContext",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<java::awt::image::renderable::RenderContext> new_object(jni::ref<java::awt::geom::AffineTransform> p1, jni::ref<java::awt::Shape> p2, jni::ref<java::awt::RenderingHints> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::awt::image::renderable::RenderContext> new_object(jni::ref<java::awt::geom::AffineTransform> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::image::renderable::RenderContext> new_object(jni::ref<java::awt::geom::AffineTransform> p1, jni::ref<java::awt::RenderingHints> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::image::renderable::RenderContext> new_object(jni::ref<java::awt::geom::AffineTransform> p1, jni::ref<java::awt::Shape> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::awt::RenderingHints> getRenderingHints() { return call_method<"getRenderingHints", jni::ref<java::awt::RenderingHints>>(); }
	void setRenderingHints(jni::ref<java::awt::RenderingHints> p1) { return call_method<"setRenderingHints", void>(p1); }
	void setTransform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"setTransform", void>(p1); }
	void preConcatenateTransform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"preConcatenateTransform", void>(p1); }
	void preConcetenateTransform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"preConcetenateTransform", void>(p1); }
	void concatenateTransform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"concatenateTransform", void>(p1); }
	void concetenateTransform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"concetenateTransform", void>(p1); }
	jni::ref<java::awt::geom::AffineTransform> getTransform() { return call_method<"getTransform", jni::ref<java::awt::geom::AffineTransform>>(); }
	void setAreaOfInterest(jni::ref<java::awt::Shape> p1) { return call_method<"setAreaOfInterest", void>(p1); }
	jni::ref<java::awt::Shape> getAreaOfInterest() { return call_method<"getAreaOfInterest", jni::ref<java::awt::Shape>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	RenderContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_RENDERCONTEXT
