// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/LayeredHighlighter_LayerPainter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_DEFAULTHIGHLIGHTPAINTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_DEFAULTHIGHLIGHTPAINTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultHighlighter_DefaultHighlightPainter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultHighlighter_DefaultHighlightPainter>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultHighlighter$DefaultHighlightPainter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::LayeredHighlighter_LayerPainter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_DEFAULTHIGHLIGHTPAINTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_DEFAULTHIGHLIGHTPAINTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_DEFAULTHIGHLIGHTPAINTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/javax/swing/text/JTextComponent.h>
#include <scapix/java_api/javax/swing/text/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::DefaultHighlighter_DefaultHighlightPainter : public jni::object_base<"javax/swing/text/DefaultHighlighter$DefaultHighlightPainter",
	javax::swing::text::LayeredHighlighter_LayerPainter>
{
public:

	static jni::ref<javax::swing::text::DefaultHighlighter_DefaultHighlightPainter> new_object(jni::ref<java::awt::Color> p1) { return base_::new_object(p1); }
	jni::ref<java::awt::Color> getColor() { return call_method<"getColor", jni::ref<java::awt::Color>>(); }
	void paint(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jni::ref<java::awt::Shape> p4, jni::ref<javax::swing::text::JTextComponent> p5) { return call_method<"paint", void>(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::Shape> paintLayer(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jni::ref<java::awt::Shape> p4, jni::ref<javax::swing::text::JTextComponent> p5, jni::ref<javax::swing::text::View> p6) { return call_method<"paintLayer", jni::ref<java::awt::Shape>>(p1, p2, p3, p4, p5, p6); }

protected:

	DefaultHighlighter_DefaultHighlightPainter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_DEFAULTHIGHLIGHTPAINTER
