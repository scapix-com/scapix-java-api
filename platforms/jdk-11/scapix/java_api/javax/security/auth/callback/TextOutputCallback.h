// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/security/auth/callback/Callback.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTOUTPUTCALLBACK_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTOUTPUTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth::callback { class TextOutputCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::callback::TextOutputCallback>
{
	static constexpr fixed_string class_name = "javax/security/auth/callback/TextOutputCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::security::auth::callback::Callback, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTOUTPUTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTOUTPUTCALLBACK)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTOUTPUTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::callback::TextOutputCallback : public jni::object_base<"javax/security/auth/callback/TextOutputCallback",
	java::lang::Object,
	javax::security::auth::callback::Callback,
	java::io::Serializable>
{
public:

	static jint INFORMATION() { return get_static_field<"INFORMATION", jint>(); }
	static jint WARNING() { return get_static_field<"WARNING", jint>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }

	static jni::ref<javax::security::auth::callback::TextOutputCallback> new_object(jint messageType, jni::ref<java::lang::String> message) { return base_::new_object(messageType, message); }
	jint getMessageType() { return call_method<"getMessageType", jint>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	TextOutputCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_CALLBACK_TEXTOUTPUTCALLBACK
