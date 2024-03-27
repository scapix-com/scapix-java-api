// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/font/GraphicAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_SHAPEGRAPHICATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_SHAPEGRAPHICATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::font { class ShapeGraphicAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::font::ShapeGraphicAttribute>
{
	static constexpr fixed_string class_name = "java/awt/font/ShapeGraphicAttribute";
	using base_classes = std::tuple<scapix::java_api::java::awt::font::GraphicAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_SHAPEGRAPHICATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_SHAPEGRAPHICATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_SHAPEGRAPHICATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics2D.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::font::ShapeGraphicAttribute : public jni::object_base<"java/awt/font/ShapeGraphicAttribute",
	java::awt::font::GraphicAttribute>
{
public:

	static jboolean STROKE() { return get_static_field<"STROKE", jboolean>(); }
	static jboolean FILL() { return get_static_field<"FILL", jboolean>(); }

	static jni::ref<java::awt::font::ShapeGraphicAttribute> new_object(jni::ref<java::awt::Shape> p1, jint p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	jfloat getAscent() { return call_method<"getAscent", jfloat>(); }
	jfloat getDescent() { return call_method<"getDescent", jfloat>(); }
	jfloat getAdvance() { return call_method<"getAdvance", jfloat>(); }
	void draw(jni::ref<java::awt::Graphics2D> p1, jfloat p2, jfloat p3) { return call_method<"draw", void>(p1, p2, p3); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds() { return call_method<"getBounds", jni::ref<java::awt::geom::Rectangle2D>>(); }
	jni::ref<java::awt::Shape> getOutline(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"getOutline", jni::ref<java::awt::Shape>>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<java::awt::font::ShapeGraphicAttribute> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	ShapeGraphicAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_SHAPEGRAPHICATTRIBUTE
