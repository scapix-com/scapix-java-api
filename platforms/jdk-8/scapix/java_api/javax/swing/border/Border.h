// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_BORDER_BORDER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_BORDER_BORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::border { class Border; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::border::Border>
{
	static constexpr fixed_string class_name = "javax/swing/border/Border";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BORDER_BORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_BORDER_BORDER)
#define SCAPIX_JAVA_API_JAVAX_SWING_BORDER_BORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::border::Border : public jni::object_base<"javax/swing/border/Border",
	java::lang::Object>
{
public:

	void paintBorder(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::awt::Insets> getBorderInsets(jni::ref<java::awt::Component> p1) { return call_method<"getBorderInsets", jni::ref<java::awt::Insets>>(p1); }
	jboolean isBorderOpaque() { return call_method<"isBorderOpaque", jboolean>(); }

protected:

	Border(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BORDER_BORDER
