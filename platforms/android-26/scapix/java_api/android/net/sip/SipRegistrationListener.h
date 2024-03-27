// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPREGISTRATIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPREGISTRATIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::sip { class SipRegistrationListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::sip::SipRegistrationListener>
{
	static constexpr fixed_string class_name = "android/net/sip/SipRegistrationListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPREGISTRATIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPREGISTRATIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPREGISTRATIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::sip::SipRegistrationListener : public jni::object_base<"android/net/sip/SipRegistrationListener",
	java::lang::Object>
{
public:

	void onRegistering(jni::ref<java::lang::String> p1) { return call_method<"onRegistering", void>(p1); }
	void onRegistrationDone(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"onRegistrationDone", void>(p1, p2); }
	void onRegistrationFailed(jni::ref<java::lang::String> p1, jint p2, jni::ref<java::lang::String> p3) { return call_method<"onRegistrationFailed", void>(p1, p2, p3); }

protected:

	SipRegistrationListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPREGISTRATIONLISTENER
