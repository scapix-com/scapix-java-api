// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Frame.h>
#include <scapix/java_api/java/applet/AppletContext.h>
#include <scapix/java_api/java/awt/print/Printable.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWER_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet { class AppletViewer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::AppletViewer>
{
	static constexpr fixed_string class_name = "sun/applet/AppletViewer";
	using base_classes = std::tuple<scapix::java_api::java::awt::Frame, scapix::java_api::java::applet::AppletContext, scapix::java_api::java::awt::print::Printable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWER)
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/applet/Applet.h>
#include <scapix/java_api/java/applet/AudioClip.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/Menu.h>
#include <scapix/java_api/java/awt/MenuItem.h>
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/awt/print/PageFormat.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/sun/applet/AppletViewerFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::applet::AppletViewer : public jni::object_base<"sun/applet/AppletViewer",
	java::awt::Frame,
	java::applet::AppletContext,
	java::awt::print::Printable>
{
public:

	static jni::ref<sun::applet::AppletViewer> new_object(jint p1, jint p2, jni::ref<java::net::URL> p3, jni::ref<java::util::Hashtable> p4, jni::ref<java::io::PrintStream> p5, jni::ref<sun::applet::AppletViewerFactory> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::awt::MenuItem> addMenuItem(jni::ref<java::awt::Menu> p1, jni::ref<java::lang::String> p2) { return call_method<"addMenuItem", jni::ref<java::awt::MenuItem>>(p1, p2); }
	jni::ref<java::applet::AudioClip> getAudioClip(jni::ref<java::net::URL> p1) { return call_method<"getAudioClip", jni::ref<java::applet::AudioClip>>(p1); }
	jni::ref<java::awt::Image> getImage(jni::ref<java::net::URL> p1) { return call_method<"getImage", jni::ref<java::awt::Image>>(p1); }
	jni::ref<java::applet::Applet> getApplet(jni::ref<java::lang::String> p1) { return call_method<"getApplet", jni::ref<java::applet::Applet>>(p1); }
	jni::ref<java::util::Enumeration> getApplets() { return call_method<"getApplets", jni::ref<java::util::Enumeration>>(); }
	void showDocument(jni::ref<java::net::URL> p1) { return call_method<"showDocument", void>(p1); }
	void showDocument(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2) { return call_method<"showDocument", void>(p1, p2); }
	void showStatus(jni::ref<java::lang::String> p1) { return call_method<"showStatus", void>(p1); }
	void setStream(jni::ref<java::lang::String> p1, jni::ref<java::io::InputStream> p2) { return call_method<"setStream", void>(p1, p2); }
	jni::ref<java::io::InputStream> getStream(jni::ref<java::lang::String> p1) { return call_method<"getStream", jni::ref<java::io::InputStream>>(p1); }
	jni::ref<java::util::Iterator> getStreamKeys() { return call_method<"getStreamKeys", jni::ref<java::util::Iterator>>(); }
	static void printTag(jni::ref<java::io::PrintStream> p1, jni::ref<java::util::Hashtable> p2) { return call_static_method<"printTag", void>(p1, p2); }
	void updateAtts() { return call_method<"updateAtts", void>(); }
	jint print(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::print::PageFormat> p2, jint p3) { return call_method<"print", jint>(p1, p2, p3); }
	static void networkProperties() { return call_static_method<"networkProperties", void>(); }
	void processUserAction(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"processUserAction", void>(p1); }
	static jint countApplets() { return call_static_method<"countApplets", jint>(); }
	static void skipSpace(jni::ref<java::io::Reader> p1) { return call_static_method<"skipSpace", void>(p1); }
	static jni::ref<java::lang::String> scanIdentifier(jni::ref<java::io::Reader> p1) { return call_static_method<"scanIdentifier", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::util::Hashtable> scanTag(jni::ref<java::io::Reader> p1) { return call_static_method<"scanTag", jni::ref<java::util::Hashtable>>(p1); }
	static void parse(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2) { return call_static_method<"parse", void>(p1, p2); }
	static void parse(jni::ref<java::net::URL> p1) { return call_static_method<"parse", void>(p1); }
	static void parse(jni::ref<java::net::URL> p1, jni::ref<java::io::PrintStream> p2, jni::ref<sun::applet::AppletViewerFactory> p3) { return call_static_method<"parse", void>(p1, p2, p3); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	AppletViewer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWER