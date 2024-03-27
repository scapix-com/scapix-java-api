// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/MouseAdapter.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_TRACKLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_TRACKLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicScrollBarUI_TrackListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicScrollBarUI_TrackListener>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicScrollBarUI$TrackListener";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::MouseAdapter, scapix::java_api::java::awt::event::MouseMotionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_TRACKLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_TRACKLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_TRACKLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicScrollBarUI_TrackListener : public jni::object_base<"javax/swing/plaf/basic/BasicScrollBarUI$TrackListener",
	java::awt::event::MouseAdapter,
	java::awt::event::MouseMotionListener>
{
public:

	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }

protected:

	BasicScrollBarUI_TrackListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_TRACKLISTENER
