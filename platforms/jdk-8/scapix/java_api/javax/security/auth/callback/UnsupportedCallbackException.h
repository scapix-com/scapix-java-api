// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth::callback { class UnsupportedCallbackException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::callback::UnsupportedCallbackException>
{
	static constexpr fixed_string class_name = "javax/security/auth/callback/UnsupportedCallbackException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/security/auth/callback/Callback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::callback::UnsupportedCallbackException : public jni::object_base<"javax/security/auth/callback/UnsupportedCallbackException",
	java::lang::Exception>
{
public:

	static jni::ref<javax::security::auth::callback::UnsupportedCallbackException> new_object(jni::ref<javax::security::auth::callback::Callback> p1) { return base_::new_object(p1); }
	static jni::ref<javax::security::auth::callback::UnsupportedCallbackException> new_object(jni::ref<javax::security::auth::callback::Callback> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::security::auth::callback::Callback> getCallback() { return call_method<"getCallback", jni::ref<javax::security::auth::callback::Callback>>(); }

protected:

	UnsupportedCallbackException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_UNSUPPORTEDCALLBACKEXCEPTION
