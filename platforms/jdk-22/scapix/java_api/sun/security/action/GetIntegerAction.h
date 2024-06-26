// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETINTEGERACTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETINTEGERACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::action { class GetIntegerAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::action::GetIntegerAction>
{
	static constexpr fixed_string class_name = "sun/security/action/GetIntegerAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETINTEGERACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETINTEGERACTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETINTEGERACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::action::GetIntegerAction : public jni::object_base<"sun/security/action/GetIntegerAction",
	java::lang::Object,
	java::security::PrivilegedAction>
{
public:

	static jni::ref<sun::security::action::GetIntegerAction> new_object(jni::ref<java::lang::String> theProp) { return base_::new_object(theProp); }
	static jni::ref<sun::security::action::GetIntegerAction> new_object(jni::ref<java::lang::String> theProp, jint defaultVal) { return base_::new_object(theProp, defaultVal); }
	jni::ref<java::lang::Integer> run() { return call_method<"run", jni::ref<java::lang::Integer>>(); }
	static jni::ref<java::lang::Integer> privilegedGetProperty(jni::ref<java::lang::String> theProp) { return call_static_method<"privilegedGetProperty", jni::ref<java::lang::Integer>>(theProp); }
	static jni::ref<java::lang::Integer> privilegedGetProperty(jni::ref<java::lang::String> theProp, jint defaultVal) { return call_static_method<"privilegedGetProperty", jni::ref<java::lang::Integer>>(theProp, defaultVal); }

protected:

	GetIntegerAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETINTEGERACTION
