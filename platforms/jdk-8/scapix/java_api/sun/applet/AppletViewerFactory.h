// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWERFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet { class AppletViewerFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::AppletViewerFactory>
{
	static constexpr fixed_string class_name = "sun/applet/AppletViewerFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWERFACTORY)
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/MenuBar.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/sun/applet/AppletViewer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::applet::AppletViewerFactory : public jni::object_base<"sun/applet/AppletViewerFactory",
	java::lang::Object>
{
public:

	jni::ref<sun::applet::AppletViewer> createAppletViewer(jint p1, jint p2, jni::ref<java::net::URL> p3, jni::ref<java::util::Hashtable> p4) { return call_method<"createAppletViewer", jni::ref<sun::applet::AppletViewer>>(p1, p2, p3, p4); }
	jni::ref<java::awt::MenuBar> getBaseMenuBar() { return call_method<"getBaseMenuBar", jni::ref<java::awt::MenuBar>>(); }
	jboolean isStandalone() { return call_method<"isStandalone", jboolean>(); }

protected:

	AppletViewerFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETVIEWERFACTORY