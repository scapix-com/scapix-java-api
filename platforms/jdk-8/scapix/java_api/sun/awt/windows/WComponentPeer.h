// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WObjectPeer.h>
#include <scapix/java_api/java/awt/peer/ComponentPeer.h>
#include <scapix/java_api/java/awt/dnd/peer/DropTargetPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOMPONENTPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOMPONENTPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WComponentPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WComponentPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WComponentPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WObjectPeer, scapix::java_api::java::awt::peer::ComponentPeer, scapix::java_api::java::awt::dnd::peer::DropTargetPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOMPONENTPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOMPONENTPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOMPONENTPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#include <scapix/java_api/java/awt/BufferCapabilities.h>
#include <scapix/java_api/java/awt/BufferCapabilities_FlipContents.h>
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/FontMetrics.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/dnd/DropTarget.h>
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/awt/event/PaintEvent.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/ImageObserver.h>
#include <scapix/java_api/java/awt/image/ImageProducer.h>
#include <scapix/java_api/java/awt/image/VolatileImage.h>
#include <scapix/java_api/java/awt/peer/ContainerPeer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/awt/CausedFocusEvent_Cause.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/pipe/Region.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::windows::WComponentPeer : public jni::object_base<"sun/awt/windows/WComponentPeer",
	sun::awt::windows::WObjectPeer,
	java::awt::peer::ComponentPeer,
	java::awt::dnd::peer::DropTargetPeer>
{
public:

	jint serialNum() { return get_field<"serialNum", jint>(); }
	void serialNum(jint v) { set_field<"serialNum", jint>(v); }

	jboolean isObscured() { return call_method<"isObscured", jboolean>(); }
	jboolean canDetermineObscurity() { return call_method<"canDetermineObscurity", jboolean>(); }
	jlong getHWnd() { return call_method<"getHWnd", jlong>(); }
	jni::ref<java::awt::Point> getLocationOnScreen() { return call_method<"getLocationOnScreen", jni::ref<java::awt::Point>>(); }
	void setVisible(jboolean p1) { return call_method<"setVisible", void>(p1); }
	void show() { return call_method<"show", void>(); }
	void setEnabled(jboolean p1) { return call_method<"setEnabled", void>(p1); }
	void setBounds(jint p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"setBounds", void>(p1, p2, p3, p4, p5); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }
	void repaint(jlong p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"repaint", void>(p1, p2, p3, p4, p5); }
	void print(jni::ref<java::awt::Graphics> p1) { return call_method<"print", void>(p1); }
	void coalescePaintEvent(jni::ref<java::awt::event::PaintEvent> p1) { return call_method<"coalescePaintEvent", void>(p1); }
	void reshape(jint p1, jint p2, jint p3, jint p4) { return call_method<"reshape", void>(p1, p2, p3, p4); }
	jboolean handleJavaKeyEvent(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"handleJavaKeyEvent", jboolean>(p1); }
	void handleJavaMouseEvent(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"handleJavaMouseEvent", void>(p1); }
	void handleEvent(jni::ref<java::awt::AWTEvent> p1) { return call_method<"handleEvent", void>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize() { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }
	void layout() { return call_method<"layout", void>(); }
	jni::ref<java::awt::Rectangle> getBounds() { return call_method<"getBounds", jni::ref<java::awt::Rectangle>>(); }
	jboolean isFocusable() { return call_method<"isFocusable", jboolean>(); }
	jni::ref<java::awt::GraphicsConfiguration> getGraphicsConfiguration() { return call_method<"getGraphicsConfiguration", jni::ref<java::awt::GraphicsConfiguration>>(); }
	jni::ref<sun::java2d::SurfaceData> getSurfaceData() { return call_method<"getSurfaceData", jni::ref<sun::java2d::SurfaceData>>(); }
	void replaceSurfaceData() { return call_method<"replaceSurfaceData", void>(); }
	void createScreenSurface(jboolean p1) { return call_method<"createScreenSurface", void>(p1); }
	void replaceSurfaceData(jint p1, jni::ref<java::awt::BufferCapabilities> p2) { return call_method<"replaceSurfaceData", void>(p1, p2); }
	void replaceSurfaceDataLater() { return call_method<"replaceSurfaceDataLater", void>(); }
	jboolean updateGraphicsData(jni::ref<java::awt::GraphicsConfiguration> p1) { return call_method<"updateGraphicsData", jboolean>(p1); }
	jni::ref<java::awt::image::ColorModel> getColorModel() { return call_method<"getColorModel", jni::ref<java::awt::image::ColorModel>>(); }
	jni::ref<java::awt::image::ColorModel> getDeviceColorModel() { return call_method<"getDeviceColorModel", jni::ref<java::awt::image::ColorModel>>(); }
	jni::ref<java::awt::image::ColorModel> getColorModel(jint p1) { return call_method<"getColorModel", jni::ref<java::awt::image::ColorModel>>(p1); }
	jni::ref<java::awt::Graphics> getGraphics() { return call_method<"getGraphics", jni::ref<java::awt::Graphics>>(); }
	jni::ref<java::awt::FontMetrics> getFontMetrics(jni::ref<java::awt::Font> p1) { return call_method<"getFontMetrics", jni::ref<java::awt::FontMetrics>>(p1); }
	void disposeLater() { return call_method<"disposeLater", void>(); }
	void setForeground(jni::ref<java::awt::Color> p1) { return call_method<"setForeground", void>(p1); }
	void setBackground(jni::ref<java::awt::Color> p1) { return call_method<"setBackground", void>(p1); }
	jni::ref<java::awt::Color> getBackgroundNoSync() { return call_method<"getBackgroundNoSync", jni::ref<java::awt::Color>>(); }
	void setFont(jni::ref<java::awt::Font> p1) { return call_method<"setFont", void>(p1); }
	void updateCursorImmediately() { return call_method<"updateCursorImmediately", void>(); }
	jboolean requestFocus(jni::ref<java::awt::Component> p1, jboolean p2, jboolean p3, jlong p4, jni::ref<sun::awt::CausedFocusEvent_Cause> p5) { return call_method<"requestFocus", jboolean>(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::Image> createImage(jni::ref<java::awt::image::ImageProducer> p1) { return call_method<"createImage", jni::ref<java::awt::Image>>(p1); }
	jni::ref<java::awt::Image> createImage(jint p1, jint p2) { return call_method<"createImage", jni::ref<java::awt::Image>>(p1, p2); }
	jni::ref<java::awt::image::VolatileImage> createVolatileImage(jint p1, jint p2) { return call_method<"createVolatileImage", jni::ref<java::awt::image::VolatileImage>>(p1, p2); }
	jboolean prepareImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jni::ref<java::awt::image::ImageObserver> p4) { return call_method<"prepareImage", jboolean>(p1, p2, p3, p4); }
	jint checkImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jni::ref<java::awt::image::ImageObserver> p4) { return call_method<"checkImage", jint>(p1, p2, p3, p4); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void handlePaint(jint p1, jint p2, jint p3, jint p4) { return call_method<"handlePaint", void>(p1, p2, p3, p4); }
	void beginLayout() { return call_method<"beginLayout", void>(); }
	void endLayout() { return call_method<"endLayout", void>(); }
	void beginValidate() { return call_method<"beginValidate", void>(); }
	void endValidate() { return call_method<"endValidate", void>(); }
	jni::ref<java::awt::Dimension> preferredSize() { return call_method<"preferredSize", jni::ref<java::awt::Dimension>>(); }
	void addDropTarget(jni::ref<java::awt::dnd::DropTarget> p1) { return call_method<"addDropTarget", void>(p1); }
	void removeDropTarget(jni::ref<java::awt::dnd::DropTarget> p1) { return call_method<"removeDropTarget", void>(p1); }
	jboolean handlesWheelScrolling() { return call_method<"handlesWheelScrolling", jboolean>(); }
	jboolean isPaintPending() { return call_method<"isPaintPending", jboolean>(); }
	void createBuffers(jint p1, jni::ref<java::awt::BufferCapabilities> p2) { return call_method<"createBuffers", void>(p1, p2); }
	void destroyBuffers() { return call_method<"destroyBuffers", void>(); }
	void flip(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::BufferCapabilities_FlipContents> p5) { return call_method<"flip", void>(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::Image> getBackBuffer() { return call_method<"getBackBuffer", jni::ref<java::awt::Image>>(); }
	jni::ref<java::awt::BufferCapabilities> getBackBufferCaps() { return call_method<"getBackBufferCaps", jni::ref<java::awt::BufferCapabilities>>(); }
	jint getBackBuffersNum() { return call_method<"getBackBuffersNum", jint>(); }
	jboolean shouldClearRectBeforePaint() { return call_method<"shouldClearRectBeforePaint", jboolean>(); }
	void reparent(jni::ref<java::awt::peer::ContainerPeer> p1) { return call_method<"reparent", void>(p1); }
	jboolean isReparentSupported() { return call_method<"isReparentSupported", jboolean>(); }
	void setBoundsOperation(jint p1) { return call_method<"setBoundsOperation", void>(p1); }
	jboolean isAccelCapable() { return call_method<"isAccelCapable", jboolean>(); }
	void disableAcceleration() { return call_method<"disableAcceleration", void>(); }
	void applyShape(jni::ref<sun::java2d::pipe::Region> p1) { return call_method<"applyShape", void>(p1); }
	void setZOrder(jni::ref<java::awt::peer::ComponentPeer> p1) { return call_method<"setZOrder", void>(p1); }
	jboolean isLightweightFramePeer() { return call_method<"isLightweightFramePeer", jboolean>(); }

protected:

	WComponentPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOMPONENTPEER
