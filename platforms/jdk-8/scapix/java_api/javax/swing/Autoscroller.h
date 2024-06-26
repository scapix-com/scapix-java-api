// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_AUTOSCROLLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_AUTOSCROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Autoscroller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Autoscroller>
{
	static constexpr fixed_string class_name = "javax/swing/Autoscroller";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_AUTOSCROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_AUTOSCROLLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_AUTOSCROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::Autoscroller : public jni::object_base<"javax/swing/Autoscroller",
	java::lang::Object,
	java::awt::event::ActionListener>
{
public:

	static void stop(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"stop", void>(p1); }
	static jboolean isRunning(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"isRunning", jboolean>(p1); }
	static void processMouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_static_method<"processMouseDragged", void>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	Autoscroller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_AUTOSCROLLER
