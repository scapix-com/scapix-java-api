// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_INTERNALFRAMEEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_INTERNALFRAMEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class InternalFrameEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::InternalFrameEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/InternalFrameEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_INTERNALFRAMEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_INTERNALFRAMEEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_INTERNALFRAMEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JInternalFrame.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::InternalFrameEvent : public jni::object_base<"javax/swing/event/InternalFrameEvent",
	java::awt::AWTEvent>
{
public:

	static jint INTERNAL_FRAME_FIRST() { return get_static_field<"INTERNAL_FRAME_FIRST", jint>(); }
	static jint INTERNAL_FRAME_LAST() { return get_static_field<"INTERNAL_FRAME_LAST", jint>(); }
	static jint INTERNAL_FRAME_OPENED() { return get_static_field<"INTERNAL_FRAME_OPENED", jint>(); }
	static jint INTERNAL_FRAME_CLOSING() { return get_static_field<"INTERNAL_FRAME_CLOSING", jint>(); }
	static jint INTERNAL_FRAME_CLOSED() { return get_static_field<"INTERNAL_FRAME_CLOSED", jint>(); }
	static jint INTERNAL_FRAME_ICONIFIED() { return get_static_field<"INTERNAL_FRAME_ICONIFIED", jint>(); }
	static jint INTERNAL_FRAME_DEICONIFIED() { return get_static_field<"INTERNAL_FRAME_DEICONIFIED", jint>(); }
	static jint INTERNAL_FRAME_ACTIVATED() { return get_static_field<"INTERNAL_FRAME_ACTIVATED", jint>(); }
	static jint INTERNAL_FRAME_DEACTIVATED() { return get_static_field<"INTERNAL_FRAME_DEACTIVATED", jint>(); }

	static jni::ref<javax::swing::event::InternalFrameEvent> new_object(jni::ref<javax::swing::JInternalFrame> p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> paramString() { return call_method<"paramString", jni::ref<java::lang::String>>(); }
	jni::ref<javax::swing::JInternalFrame> getInternalFrame() { return call_method<"getInternalFrame", jni::ref<javax::swing::JInternalFrame>>(); }

protected:

	InternalFrameEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_INTERNALFRAMEEVENT