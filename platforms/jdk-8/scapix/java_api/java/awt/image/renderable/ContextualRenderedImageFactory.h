// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/image/renderable/RenderedImageFactory.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_CONTEXTUALRENDEREDIMAGEFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_CONTEXTUALRENDEREDIMAGEFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image::renderable { class ContextualRenderedImageFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::renderable::ContextualRenderedImageFactory>
{
	static constexpr fixed_string class_name = "java/awt/image/renderable/ContextualRenderedImageFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::image::renderable::RenderedImageFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_CONTEXTUALRENDEREDIMAGEFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_CONTEXTUALRENDEREDIMAGEFACTORY)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_CONTEXTUALRENDEREDIMAGEFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/awt/image/RenderedImage.h>
#include <scapix/java_api/java/awt/image/renderable/ParameterBlock.h>
#include <scapix/java_api/java/awt/image/renderable/RenderContext.h>
#include <scapix/java_api/java/awt/image/renderable/RenderableImage.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::renderable::ContextualRenderedImageFactory : public jni::object_base<"java/awt/image/renderable/ContextualRenderedImageFactory",
	java::lang::Object,
	java::awt::image::renderable::RenderedImageFactory>
{
public:

	jni::ref<java::awt::image::renderable::RenderContext> mapRenderContext(jint p1, jni::ref<java::awt::image::renderable::RenderContext> p2, jni::ref<java::awt::image::renderable::ParameterBlock> p3, jni::ref<java::awt::image::renderable::RenderableImage> p4) { return call_method<"mapRenderContext", jni::ref<java::awt::image::renderable::RenderContext>>(p1, p2, p3, p4); }
	jni::ref<java::awt::image::RenderedImage> create(jni::ref<java::awt::image::renderable::RenderContext> p1, jni::ref<java::awt::image::renderable::ParameterBlock> p2) { return call_method<"create", jni::ref<java::awt::image::RenderedImage>>(p1, p2); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D(jni::ref<java::awt::image::renderable::ParameterBlock> p1) { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(p1); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::awt::image::renderable::ParameterBlock> p1, jni::ref<java::lang::String> p2) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> getPropertyNames() { return call_method<"getPropertyNames", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean isDynamic() { return call_method<"isDynamic", jboolean>(); }

protected:

	ContextualRenderedImageFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RENDERABLE_CONTEXTUALRENDEREDIMAGEFACTORY