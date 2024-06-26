// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JButton.h>
#include <scapix/java_api/javax/swing/SwingConstants.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICARROWBUTTON_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICARROWBUTTON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicArrowButton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicArrowButton>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicArrowButton";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JButton, scapix::java_api::javax::swing::SwingConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICARROWBUTTON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICARROWBUTTON)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICARROWBUTTON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicArrowButton : public jni::object_base<"javax/swing/plaf/basic/BasicArrowButton",
	javax::swing::JButton,
	javax::swing::SwingConstants>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicArrowButton> new_object(jint p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::Color> p3, jni::ref<java::awt::Color> p4, jni::ref<java::awt::Color> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<javax::swing::plaf::basic::BasicArrowButton> new_object(jint p1) { return base_::new_object(p1); }
	jint getDirection() { return call_method<"getDirection", jint>(); }
	void setDirection(jint p1) { return call_method<"setDirection", void>(p1); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getMinimumSize() { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getMaximumSize() { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(); }
	jboolean isFocusTraversable() { return call_method<"isFocusTraversable", jboolean>(); }
	void paintTriangle(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jint p4, jint p5, jboolean p6) { return call_method<"paintTriangle", void>(p1, p2, p3, p4, p5, p6); }

protected:

	BasicArrowButton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICARROWBUTTON
