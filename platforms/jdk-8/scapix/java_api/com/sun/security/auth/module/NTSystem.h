// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_MODULE_NTSYSTEM_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_MODULE_NTSYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::auth::module { class NTSystem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::auth::module::NTSystem>
{
	static constexpr fixed_string class_name = "com/sun/security/auth/module/NTSystem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_MODULE_NTSYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_MODULE_NTSYSTEM)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_MODULE_NTSYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::security::auth::module::NTSystem : public jni::object_base<"com/sun/security/auth/module/NTSystem",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::security::auth::module::NTSystem> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDomain() { return call_method<"getDomain", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDomainSID() { return call_method<"getDomainSID", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUserSID() { return call_method<"getUserSID", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPrimaryGroupID() { return call_method<"getPrimaryGroupID", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getGroupIDs() { return call_method<"getGroupIDs", jni::ref<jni::array<java::lang::String>>>(); }
	jlong getImpersonationToken() { return call_method<"getImpersonationToken", jlong>(); }

protected:

	NTSystem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_MODULE_NTSYSTEM
