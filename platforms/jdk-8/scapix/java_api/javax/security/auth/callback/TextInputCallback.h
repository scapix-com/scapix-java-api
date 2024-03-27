// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/security/auth/callback/Callback.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTINPUTCALLBACK_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTINPUTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth::callback { class TextInputCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::callback::TextInputCallback>
{
	static constexpr fixed_string class_name = "javax/security/auth/callback/TextInputCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::security::auth::callback::Callback, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTINPUTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTINPUTCALLBACK)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTINPUTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::callback::TextInputCallback : public jni::object_base<"javax/security/auth/callback/TextInputCallback",
	java::lang::Object,
	javax::security::auth::callback::Callback,
	java::io::Serializable>
{
public:

	static jni::ref<javax::security::auth::callback::TextInputCallback> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::security::auth::callback::TextInputCallback> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getPrompt() { return call_method<"getPrompt", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDefaultText() { return call_method<"getDefaultText", jni::ref<java::lang::String>>(); }
	void setText(jni::ref<java::lang::String> p1) { return call_method<"setText", void>(p1); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }

protected:

	TextInputCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTINPUTCALLBACK