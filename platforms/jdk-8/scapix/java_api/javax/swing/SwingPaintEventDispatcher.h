// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/PaintEventDispatcher.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SWINGPAINTEVENTDISPATCHER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGPAINTEVENTDISPATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SwingPaintEventDispatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SwingPaintEventDispatcher>
{
	static constexpr fixed_string class_name = "javax/swing/SwingPaintEventDispatcher";
	using base_classes = std::tuple<scapix::java_api::sun::awt::PaintEventDispatcher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGPAINTEVENTDISPATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SWINGPAINTEVENTDISPATCHER)
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGPAINTEVENTDISPATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/event/PaintEvent.h>
#include <scapix/java_api/java/lang/Runnable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::SwingPaintEventDispatcher : public jni::object_base<"javax/swing/SwingPaintEventDispatcher",
	sun::awt::PaintEventDispatcher>
{
public:

	jni::ref<java::awt::event::PaintEvent> createPaintEvent(jni::ref<java::awt::Component> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"createPaintEvent", jni::ref<java::awt::event::PaintEvent>>(p1, p2, p3, p4, p5); }
	jboolean shouldDoNativeBackgroundErase(jni::ref<java::awt::Component> p1) { return call_method<"shouldDoNativeBackgroundErase", jboolean>(p1); }
	jboolean queueSurfaceDataReplacing(jni::ref<java::awt::Component> p1, jni::ref<java::lang::Runnable> p2) { return call_method<"queueSurfaceDataReplacing", jboolean>(p1, p2); }

protected:

	SwingPaintEventDispatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGPAINTEVENTDISPATCHER
