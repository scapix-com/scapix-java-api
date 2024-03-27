// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/AWTSecurityManager.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITY_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet { class AppletSecurity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::AppletSecurity>
{
	static constexpr fixed_string class_name = "sun/applet/AppletSecurity";
	using base_classes = std::tuple<scapix::java_api::sun::awt::AWTSecurityManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITY)
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/lang/ThreadGroup.h>
#include <scapix/java_api/sun/awt/AppContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::applet::AppletSecurity : public jni::object_base<"sun/applet/AppletSecurity",
	sun::awt::AWTSecurityManager>
{
public:

	static jni::ref<sun::applet::AppletSecurity> new_object() { return base_::new_object(); }
	void reset() { return call_method<"reset", void>(); }
	void checkAccess(jni::ref<java::lang::Thread> p1) { return call_method<"checkAccess", void>(p1); }
	void checkAccess(jni::ref<java::lang::ThreadGroup> p1) { return call_method<"checkAccess", void>(p1); }
	void checkPackageAccess(jni::ref<java::lang::String> p1) { return call_method<"checkPackageAccess", void>(p1); }
	void checkAwtEventQueueAccess() { return call_method<"checkAwtEventQueueAccess", void>(); }
	jni::ref<java::lang::ThreadGroup> getThreadGroup() { return call_method<"getThreadGroup", jni::ref<java::lang::ThreadGroup>>(); }
	jni::ref<sun::awt::AppContext> getAppContext() { return call_method<"getAppContext", jni::ref<sun::awt::AppContext>>(); }

protected:

	AppletSecurity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITY
