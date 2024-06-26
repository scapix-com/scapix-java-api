// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth::login { class AppConfigurationEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::login::AppConfigurationEntry>
{
	static constexpr fixed_string class_name = "javax/security/auth/login/AppConfigurationEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/security/auth/login/AppConfigurationEntry_LoginModuleControlFlag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::login::AppConfigurationEntry : public jni::object_base<"javax/security/auth/login/AppConfigurationEntry",
	java::lang::Object>
{
public:

	using LoginModuleControlFlag = AppConfigurationEntry_LoginModuleControlFlag;

	static jni::ref<javax::security::auth::login::AppConfigurationEntry> new_object(jni::ref<java::lang::String> loginModuleName, jni::ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> controlFlag, jni::ref<java::util::Map> options) { return base_::new_object(loginModuleName, controlFlag, options); }
	jni::ref<java::lang::String> getLoginModuleName() { return call_method<"getLoginModuleName", jni::ref<java::lang::String>>(); }
	jni::ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> getControlFlag() { return call_method<"getControlFlag", jni::ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag>>(); }
	jni::ref<java::util::Map> getOptions() { return call_method<"getOptions", jni::ref<java::util::Map>>(); }

protected:

	AppConfigurationEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY
