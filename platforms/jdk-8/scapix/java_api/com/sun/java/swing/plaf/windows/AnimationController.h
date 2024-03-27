// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_ANIMATIONCONTROLLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_ANIMATIONCONTROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class AnimationController; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::AnimationController>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/AnimationController";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_ANIMATIONCONTROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_ANIMATIONCONTROLLER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_ANIMATIONCONTROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::AnimationController : public jni::object_base<"com/sun/java/swing/plaf/windows/AnimationController",
	java::lang::Object,
	java::awt::event::ActionListener,
	java::beans::PropertyChangeListener>
{
public:

	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	AnimationController(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_ANIMATIONCONTROLLER
