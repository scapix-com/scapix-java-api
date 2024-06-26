// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/SecurityException.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITYEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet { class AppletSecurityException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::AppletSecurityException>
{
	static constexpr fixed_string class_name = "sun/applet/AppletSecurityException";
	using base_classes = std::tuple<scapix::java_api::java::lang::SecurityException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITYEXCEPTION)
#define SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITYEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::applet::AppletSecurityException : public jni::object_base<"sun/applet/AppletSecurityException",
	java::lang::SecurityException>
{
public:

	static jni::ref<sun::applet::AppletSecurityException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<sun::applet::AppletSecurityException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::applet::AppletSecurityException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getLocalizedMessage() { return call_method<"getLocalizedMessage", jni::ref<java::lang::String>>(); }

protected:

	AppletSecurityException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_APPLETSECURITYEXCEPTION
