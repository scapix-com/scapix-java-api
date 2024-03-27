// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETPROPERTYACTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETPROPERTYACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::action { class GetPropertyAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::action::GetPropertyAction>
{
	static constexpr fixed_string class_name = "sun/security/action/GetPropertyAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETPROPERTYACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETPROPERTYACTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETPROPERTYACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/sun/security/util/Debug.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::action::GetPropertyAction : public jni::object_base<"sun/security/action/GetPropertyAction",
	java::lang::Object,
	java::security::PrivilegedAction>
{
public:

	static jni::ref<sun::security::action::GetPropertyAction> new_object(jni::ref<java::lang::String> theProp) { return base_::new_object(theProp); }
	static jni::ref<sun::security::action::GetPropertyAction> new_object(jni::ref<java::lang::String> theProp, jni::ref<java::lang::String> defaultVal) { return base_::new_object(theProp, defaultVal); }
	jni::ref<java::lang::String> run() { return call_method<"run", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> privilegedGetProperty(jni::ref<java::lang::String> theProp) { return call_static_method<"privilegedGetProperty", jni::ref<java::lang::String>>(theProp); }
	static jni::ref<java::lang::String> privilegedGetProperty(jni::ref<java::lang::String> theProp, jni::ref<java::lang::String> defaultVal) { return call_static_method<"privilegedGetProperty", jni::ref<java::lang::String>>(theProp, defaultVal); }
	static jni::ref<java::util::Properties> privilegedGetProperties() { return call_static_method<"privilegedGetProperties", jni::ref<java::util::Properties>>(); }
	static jint privilegedGetTimeoutProp(jni::ref<java::lang::String> prop, jint def, jni::ref<sun::security::util::Debug> dbg) { return call_static_method<"privilegedGetTimeoutProp", jint>(prop, def, dbg); }

protected:

	GetPropertyAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETPROPERTYACTION
