// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_MENUELEMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_MENUELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class MenuElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::MenuElement>
{
	static constexpr fixed_string class_name = "javax/swing/MenuElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_MENUELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_MENUELEMENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_MENUELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/javax/swing/MenuSelectionManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::MenuElement : public jni::object_base<"javax/swing/MenuElement",
	java::lang::Object>
{
public:

	void processMouseEvent(jni::ref<java::awt::event::MouseEvent> p1, jni::ref<jni::array<javax::swing::MenuElement>> p2, jni::ref<javax::swing::MenuSelectionManager> p3) { return call_method<"processMouseEvent", void>(p1, p2, p3); }
	void processKeyEvent(jni::ref<java::awt::event::KeyEvent> p1, jni::ref<jni::array<javax::swing::MenuElement>> p2, jni::ref<javax::swing::MenuSelectionManager> p3) { return call_method<"processKeyEvent", void>(p1, p2, p3); }
	void menuSelectionChanged(jboolean p1) { return call_method<"menuSelectionChanged", void>(p1); }
	jni::ref<jni::array<javax::swing::MenuElement>> getSubElements() { return call_method<"getSubElements", jni::ref<jni::array<javax::swing::MenuElement>>>(); }
	jni::ref<java::awt::Component> getComponent() { return call_method<"getComponent", jni::ref<java::awt::Component>>(); }

protected:

	MenuElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_MENUELEMENT