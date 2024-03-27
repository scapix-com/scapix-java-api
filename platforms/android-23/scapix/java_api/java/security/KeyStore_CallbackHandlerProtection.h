// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_CALLBACKHANDLERPROTECTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_CALLBACKHANDLERPROTECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class KeyStore_CallbackHandlerProtection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::KeyStore_CallbackHandlerProtection>
{
	static constexpr fixed_string class_name = "java/security/KeyStore$CallbackHandlerProtection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::KeyStore_ProtectionParameter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_CALLBACKHANDLERPROTECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_CALLBACKHANDLERPROTECTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_CALLBACKHANDLERPROTECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/security/auth/callback/CallbackHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::KeyStore_CallbackHandlerProtection : public jni::object_base<"java/security/KeyStore$CallbackHandlerProtection",
	java::lang::Object,
	java::security::KeyStore_ProtectionParameter>
{
public:

	static jni::ref<java::security::KeyStore_CallbackHandlerProtection> new_object(jni::ref<javax::security::auth::callback::CallbackHandler> handler) { return base_::new_object(handler); }
	jni::ref<javax::security::auth::callback::CallbackHandler> getCallbackHandler() { return call_method<"getCallbackHandler", jni::ref<javax::security::auth::callback::CallbackHandler>>(); }

protected:

	KeyStore_CallbackHandlerProtection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_CALLBACKHANDLERPROTECTION
