// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/security/auth/callback/CallbackHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_CALLBACK_DIALOGCALLBACKHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_CALLBACK_DIALOGCALLBACKHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::auth::callback { class DialogCallbackHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::auth::callback::DialogCallbackHandler>
{
	static constexpr fixed_string class_name = "com/sun/security/auth/callback/DialogCallbackHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::security::auth::callback::CallbackHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_CALLBACK_DIALOGCALLBACKHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_CALLBACK_DIALOGCALLBACKHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_CALLBACK_DIALOGCALLBACKHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/security/auth/callback/Callback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::security::auth::callback::DialogCallbackHandler : public jni::object_base<"com/sun/security/auth/callback/DialogCallbackHandler",
	java::lang::Object,
	javax::security::auth::callback::CallbackHandler>
{
public:

	static jni::ref<com::sun::security::auth::callback::DialogCallbackHandler> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::security::auth::callback::DialogCallbackHandler> new_object(jni::ref<java::awt::Component> p1) { return base_::new_object(p1); }
	void handle(jni::ref<jni::array<javax::security::auth::callback::Callback>> p1) { return call_method<"handle", void>(p1); }

protected:

	DialogCallbackHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_CALLBACK_DIALOGCALLBACKHANDLER
