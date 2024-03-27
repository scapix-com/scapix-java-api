// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICGRAPHICSUTILS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICGRAPHICSUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicGraphicsUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicGraphicsUtils>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicGraphicsUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICGRAPHICSUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICGRAPHICSUTILS)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICGRAPHICSUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/AbstractButton.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicGraphicsUtils : public jni::object_base<"javax/swing/plaf/basic/BasicGraphicsUtils",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicGraphicsUtils> new_object() { return base_::new_object(); }
	static void drawEtchedRect(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<java::awt::Color> p6, jni::ref<java::awt::Color> p7, jni::ref<java::awt::Color> p8, jni::ref<java::awt::Color> p9) { return call_static_method<"drawEtchedRect", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static jni::ref<java::awt::Insets> getEtchedInsets() { return call_static_method<"getEtchedInsets", jni::ref<java::awt::Insets>>(); }
	static void drawGroove(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<java::awt::Color> p6, jni::ref<java::awt::Color> p7) { return call_static_method<"drawGroove", void>(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<java::awt::Insets> getGrooveInsets() { return call_static_method<"getGrooveInsets", jni::ref<java::awt::Insets>>(); }
	static void drawBezel(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jint p4, jint p5, jboolean p6, jboolean p7, jni::ref<java::awt::Color> p8, jni::ref<java::awt::Color> p9, jni::ref<java::awt::Color> p10, jni::ref<java::awt::Color> p11) { return call_static_method<"drawBezel", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static void drawLoweredBezel(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<java::awt::Color> p6, jni::ref<java::awt::Color> p7, jni::ref<java::awt::Color> p8, jni::ref<java::awt::Color> p9) { return call_static_method<"drawLoweredBezel", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void drawString(jni::ref<java::awt::Graphics> p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5) { return call_static_method<"drawString", void>(p1, p2, p3, p4, p5); }
	static void drawStringUnderlineCharAt(jni::ref<java::awt::Graphics> p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5) { return call_static_method<"drawStringUnderlineCharAt", void>(p1, p2, p3, p4, p5); }
	static void drawDashedRect(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jint p4, jint p5) { return call_static_method<"drawDashedRect", void>(p1, p2, p3, p4, p5); }
	static jni::ref<java::awt::Dimension> getPreferredButtonSize(jni::ref<javax::swing::AbstractButton> p1, jint p2) { return call_static_method<"getPreferredButtonSize", jni::ref<java::awt::Dimension>>(p1, p2); }

protected:

	BasicGraphicsUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICGRAPHICSUTILS