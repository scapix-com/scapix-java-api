// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_ACTIONEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ACTIONEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class ActionEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::ActionEvent>
{
	static constexpr fixed_string class_name = "java/awt/event/ActionEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ACTIONEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_ACTIONEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ACTIONEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::ActionEvent : public jni::object_base<"java/awt/event/ActionEvent",
	java::awt::AWTEvent>
{
public:

	static jint SHIFT_MASK() { return get_static_field<"SHIFT_MASK", jint>(); }
	static jint CTRL_MASK() { return get_static_field<"CTRL_MASK", jint>(); }
	static jint META_MASK() { return get_static_field<"META_MASK", jint>(); }
	static jint ALT_MASK() { return get_static_field<"ALT_MASK", jint>(); }
	static jint ACTION_FIRST() { return get_static_field<"ACTION_FIRST", jint>(); }
	static jint ACTION_LAST() { return get_static_field<"ACTION_LAST", jint>(); }
	static jint ACTION_PERFORMED() { return get_static_field<"ACTION_PERFORMED", jint>(); }

	static jni::ref<java::awt::event::ActionEvent> new_object(jni::ref<java::lang::Object> p1, jint p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::awt::event::ActionEvent> new_object(jni::ref<java::lang::Object> p1, jint p2, jni::ref<java::lang::String> p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::awt::event::ActionEvent> new_object(jni::ref<java::lang::Object> p1, jint p2, jni::ref<java::lang::String> p3, jlong p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::String> getActionCommand() { return call_method<"getActionCommand", jni::ref<java::lang::String>>(); }
	jlong getWhen() { return call_method<"getWhen", jlong>(); }
	jint getModifiers() { return call_method<"getModifiers", jint>(); }
	jni::ref<java::lang::String> paramString() { return call_method<"paramString", jni::ref<java::lang::String>>(); }

protected:

	ActionEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ACTIONEVENT