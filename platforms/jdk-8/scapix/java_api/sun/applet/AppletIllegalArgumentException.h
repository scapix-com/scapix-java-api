// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_APPLETILLEGALARGUMENTEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETILLEGALARGUMENTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet { class AppletIllegalArgumentException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::AppletIllegalArgumentException>
{
	static constexpr fixed_string class_name = "sun/applet/AppletIllegalArgumentException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETILLEGALARGUMENTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_APPLETILLEGALARGUMENTEXCEPTION)
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETILLEGALARGUMENTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::applet::AppletIllegalArgumentException : public jni::object_base<"sun/applet/AppletIllegalArgumentException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<sun::applet::AppletIllegalArgumentException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getLocalizedMessage() { return call_method<"getLocalizedMessage", jni::ref<java::lang::String>>(); }

protected:

	AppletIllegalArgumentException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETILLEGALARGUMENTEXCEPTION
