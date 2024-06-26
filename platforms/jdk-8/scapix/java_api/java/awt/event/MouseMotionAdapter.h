// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_MOUSEMOTIONADAPTER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_MOUSEMOTIONADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class MouseMotionAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::MouseMotionAdapter>
{
	static constexpr fixed_string class_name = "java/awt/event/MouseMotionAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::MouseMotionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_MOUSEMOTIONADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_MOUSEMOTIONADAPTER)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_MOUSEMOTIONADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::MouseMotionAdapter : public jni::object_base<"java/awt/event/MouseMotionAdapter",
	java::lang::Object,
	java::awt::event::MouseMotionListener>
{
public:

	static jni::ref<java::awt::event::MouseMotionAdapter> new_object() { return base_::new_object(); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }

protected:

	MouseMotionAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_MOUSEMOTIONADAPTER
