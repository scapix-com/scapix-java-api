// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/ComponentAdapter.h>
#include <scapix/java_api/java/awt/event/WindowListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_BUFFERSTRATEGYPAINTMANAGER_BUFFERINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_BUFFERSTRATEGYPAINTMANAGER_BUFFERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class BufferStrategyPaintManager_BufferInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::BufferStrategyPaintManager_BufferInfo>
{
	static constexpr fixed_string class_name = "javax/swing/BufferStrategyPaintManager$BufferInfo";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::ComponentAdapter, scapix::java_api::java::awt::event::WindowListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BUFFERSTRATEGYPAINTMANAGER_BUFFERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_BUFFERSTRATEGYPAINTMANAGER_BUFFERINFO)
#define SCAPIX_JAVA_API_JAVAX_SWING_BUFFERSTRATEGYPAINTMANAGER_BUFFERINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/event/ComponentEvent.h>
#include <scapix/java_api/java/awt/event/WindowEvent.h>
#include <scapix/java_api/java/awt/image/BufferStrategy.h>
#include <scapix/java_api/javax/swing/BufferStrategyPaintManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::BufferStrategyPaintManager_BufferInfo : public jni::object_base<"javax/swing/BufferStrategyPaintManager$BufferInfo",
	java::awt::event::ComponentAdapter,
	java::awt::event::WindowListener>
{
public:

	static jni::ref<javax::swing::BufferStrategyPaintManager_BufferInfo> new_object(jni::ref<javax::swing::BufferStrategyPaintManager> p1, jni::ref<java::awt::Container> p2) { return base_::new_object(p1, p2); }
	void setPaintAllOnExpose(jboolean p1) { return call_method<"setPaintAllOnExpose", void>(p1); }
	jboolean getPaintAllOnExpose() { return call_method<"getPaintAllOnExpose", jboolean>(); }
	void setContentsLostDuringExpose(jboolean p1) { return call_method<"setContentsLostDuringExpose", void>(p1); }
	jboolean getContentsLostDuringExpose() { return call_method<"getContentsLostDuringExpose", jboolean>(); }
	void setInSync(jboolean p1) { return call_method<"setInSync", void>(p1); }
	jboolean isInSync() { return call_method<"isInSync", jboolean>(); }
	jni::ref<java::awt::Container> getRoot() { return call_method<"getRoot", jni::ref<java::awt::Container>>(); }
	jni::ref<java::awt::image::BufferStrategy> getBufferStrategy(jboolean p1) { return call_method<"getBufferStrategy", jni::ref<java::awt::image::BufferStrategy>>(p1); }
	jboolean hasBufferStrategyChanged() { return call_method<"hasBufferStrategyChanged", jboolean>(); }
	void dispose() { return call_method<"dispose", void>(); }
	void componentHidden(jni::ref<java::awt::event::ComponentEvent> p1) { return call_method<"componentHidden", void>(p1); }
	void windowIconified(jni::ref<java::awt::event::WindowEvent> p1) { return call_method<"windowIconified", void>(p1); }
	void windowClosed(jni::ref<java::awt::event::WindowEvent> p1) { return call_method<"windowClosed", void>(p1); }
	void windowOpened(jni::ref<java::awt::event::WindowEvent> p1) { return call_method<"windowOpened", void>(p1); }
	void windowClosing(jni::ref<java::awt::event::WindowEvent> p1) { return call_method<"windowClosing", void>(p1); }
	void windowDeiconified(jni::ref<java::awt::event::WindowEvent> p1) { return call_method<"windowDeiconified", void>(p1); }
	void windowActivated(jni::ref<java::awt::event::WindowEvent> p1) { return call_method<"windowActivated", void>(p1); }
	void windowDeactivated(jni::ref<java::awt::event::WindowEvent> p1) { return call_method<"windowDeactivated", void>(p1); }

protected:

	BufferStrategyPaintManager_BufferInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BUFFERSTRATEGYPAINTMANAGER_BUFFERINFO
