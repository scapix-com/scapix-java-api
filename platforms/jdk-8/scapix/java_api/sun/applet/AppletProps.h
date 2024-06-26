// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Frame.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_APPLETPROPS_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETPROPS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet { class AppletProps; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::AppletProps>
{
	static constexpr fixed_string class_name = "sun/applet/AppletProps";
	using base_classes = std::tuple<scapix::java_api::java::awt::Frame>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETPROPS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_APPLETPROPS)
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETPROPS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Event.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::applet::AppletProps : public jni::object_base<"sun/applet/AppletProps",
	java::awt::Frame>
{
public:

	jboolean action(jni::ref<java::awt::Event> p1, jni::ref<java::lang::Object> p2) { return call_method<"action", jboolean>(p1, p2); }

protected:

	AppletProps(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETPROPS
