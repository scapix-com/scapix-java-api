// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/border/AbstractBorder.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_BORDER_STROKEBORDER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_BORDER_STROKEBORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::border { class StrokeBorder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::border::StrokeBorder>
{
	static constexpr fixed_string class_name = "javax/swing/border/StrokeBorder";
	using base_classes = std::tuple<scapix::java_api::javax::swing::border::AbstractBorder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BORDER_STROKEBORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_BORDER_STROKEBORDER)
#define SCAPIX_JAVA_API_JAVAX_SWING_BORDER_STROKEBORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/BasicStroke.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/java/awt/Paint.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::border::StrokeBorder : public jni::object_base<"javax/swing/border/StrokeBorder",
	javax::swing::border::AbstractBorder>
{
public:

	static jni::ref<javax::swing::border::StrokeBorder> new_object(jni::ref<java::awt::BasicStroke> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::border::StrokeBorder> new_object(jni::ref<java::awt::BasicStroke> p1, jni::ref<java::awt::Paint> p2) { return base_::new_object(p1, p2); }
	void paintBorder(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::awt::Insets> getBorderInsets(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Insets> p2) { return call_method<"getBorderInsets", jni::ref<java::awt::Insets>>(p1, p2); }
	jni::ref<java::awt::BasicStroke> getStroke() { return call_method<"getStroke", jni::ref<java::awt::BasicStroke>>(); }
	jni::ref<java::awt::Paint> getPaint() { return call_method<"getPaint", jni::ref<java::awt::Paint>>(); }

protected:

	StrokeBorder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BORDER_STROKEBORDER