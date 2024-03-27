// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETBOOLEANACTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETBOOLEANACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::action { class GetBooleanAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::action::GetBooleanAction>
{
	static constexpr fixed_string class_name = "sun/security/action/GetBooleanAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETBOOLEANACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETBOOLEANACTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETBOOLEANACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::action::GetBooleanAction : public jni::object_base<"sun/security/action/GetBooleanAction",
	java::lang::Object,
	java::security::PrivilegedAction>
{
public:

	static jni::ref<sun::security::action::GetBooleanAction> new_object(jni::ref<java::lang::String> theProp) { return base_::new_object(theProp); }
	jni::ref<java::lang::Boolean> run() { return call_method<"run", jni::ref<java::lang::Boolean>>(); }

protected:

	GetBooleanAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_ACTION_GETBOOLEANACTION
