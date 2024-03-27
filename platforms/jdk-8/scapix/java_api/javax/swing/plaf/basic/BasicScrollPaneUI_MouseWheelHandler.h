// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/MouseWheelListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLPANEUI_MOUSEWHEELHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLPANEUI_MOUSEWHEELHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicScrollPaneUI_MouseWheelHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicScrollPaneUI_MouseWheelHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::MouseWheelListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLPANEUI_MOUSEWHEELHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLPANEUI_MOUSEWHEELHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLPANEUI_MOUSEWHEELHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseWheelEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicScrollPaneUI_MouseWheelHandler : public jni::object_base<"javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler",
	java::lang::Object,
	java::awt::event::MouseWheelListener>
{
public:

	void mouseWheelMoved(jni::ref<java::awt::event::MouseWheelEvent> p1) { return call_method<"mouseWheelMoved", void>(p1); }

protected:

	BasicScrollPaneUI_MouseWheelHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLPANEUI_MOUSEWHEELHANDLER