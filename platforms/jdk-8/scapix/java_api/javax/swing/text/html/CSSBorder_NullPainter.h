// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/html/CSSBorder_BorderPainter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSSBORDER_NULLPAINTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSSBORDER_NULLPAINTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class CSSBorder_NullPainter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::CSSBorder_NullPainter>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/CSSBorder$NullPainter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::text::html::CSSBorder_BorderPainter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSSBORDER_NULLPAINTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSSBORDER_NULLPAINTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSSBORDER_NULLPAINTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Polygon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::CSSBorder_NullPainter : public jni::object_base<"javax/swing/text/html/CSSBorder$NullPainter",
	java::lang::Object,
	javax::swing::text::html::CSSBorder_BorderPainter>
{
public:

	void paint(jni::ref<java::awt::Polygon> p1, jni::ref<java::awt::Graphics> p2, jni::ref<java::awt::Color> p3, jint p4) { return call_method<"paint", void>(p1, p2, p3, p4); }

protected:

	CSSBorder_NullPainter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSSBORDER_NULLPAINTER