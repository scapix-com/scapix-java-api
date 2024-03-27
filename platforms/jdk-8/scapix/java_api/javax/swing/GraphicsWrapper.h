// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GRAPHICSWRAPPER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GRAPHICSWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GraphicsWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GraphicsWrapper>
{
	static constexpr fixed_string class_name = "javax/swing/GraphicsWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GRAPHICSWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GRAPHICSWRAPPER)
#define SCAPIX_JAVA_API_JAVAX_SWING_GRAPHICSWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::GraphicsWrapper : public jni::object_base<"javax/swing/GraphicsWrapper",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Graphics> subGraphics() { return call_method<"subGraphics", jni::ref<java::awt::Graphics>>(); }
	jboolean isClipIntersecting(jni::ref<java::awt::Rectangle> p1) { return call_method<"isClipIntersecting", jboolean>(p1); }
	jint getClipX() { return call_method<"getClipX", jint>(); }
	jint getClipY() { return call_method<"getClipY", jint>(); }
	jint getClipWidth() { return call_method<"getClipWidth", jint>(); }
	jint getClipHeight() { return call_method<"getClipHeight", jint>(); }

protected:

	GraphicsWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GRAPHICSWRAPPER