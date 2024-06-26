// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/MouseListener.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MOUSEINPUTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MOUSEINPUTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class MouseInputListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::MouseInputListener>
{
	static constexpr fixed_string class_name = "javax/swing/event/MouseInputListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::MouseListener, scapix::java_api::java::awt::event::MouseMotionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MOUSEINPUTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MOUSEINPUTLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MOUSEINPUTLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::MouseInputListener : public jni::object_base<"javax/swing/event/MouseInputListener",
	java::lang::Object,
	java::awt::event::MouseListener,
	java::awt::event::MouseMotionListener>
{
public:


protected:

	MouseInputListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MOUSEINPUTLISTENER
