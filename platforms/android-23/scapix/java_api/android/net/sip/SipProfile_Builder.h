// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPPROFILE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPPROFILE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::sip { class SipProfile_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::sip::SipProfile_Builder>
{
	static constexpr fixed_string class_name = "android/net/sip/SipProfile$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPPROFILE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPPROFILE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPPROFILE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/sip/SipProfile.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::sip::SipProfile_Builder : public jni::object_base<"android/net/sip/SipProfile$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::sip::SipProfile_Builder> new_object(jni::ref<android::net::sip::SipProfile> profile) { return base_::new_object(profile); }
	static jni::ref<android::net::sip::SipProfile_Builder> new_object(jni::ref<java::lang::String> uriString) { return base_::new_object(uriString); }
	static jni::ref<android::net::sip::SipProfile_Builder> new_object(jni::ref<java::lang::String> username, jni::ref<java::lang::String> serverDomain) { return base_::new_object(username, serverDomain); }
	jni::ref<android::net::sip::SipProfile_Builder> setAuthUserName(jni::ref<java::lang::String> name) { return call_method<"setAuthUserName", jni::ref<android::net::sip::SipProfile_Builder>>(name); }
	jni::ref<android::net::sip::SipProfile_Builder> setProfileName(jni::ref<java::lang::String> name) { return call_method<"setProfileName", jni::ref<android::net::sip::SipProfile_Builder>>(name); }
	jni::ref<android::net::sip::SipProfile_Builder> setPassword(jni::ref<java::lang::String> password) { return call_method<"setPassword", jni::ref<android::net::sip::SipProfile_Builder>>(password); }
	jni::ref<android::net::sip::SipProfile_Builder> setPort(jint port) { return call_method<"setPort", jni::ref<android::net::sip::SipProfile_Builder>>(port); }
	jni::ref<android::net::sip::SipProfile_Builder> setProtocol(jni::ref<java::lang::String> protocol) { return call_method<"setProtocol", jni::ref<android::net::sip::SipProfile_Builder>>(protocol); }
	jni::ref<android::net::sip::SipProfile_Builder> setOutboundProxy(jni::ref<java::lang::String> outboundProxy) { return call_method<"setOutboundProxy", jni::ref<android::net::sip::SipProfile_Builder>>(outboundProxy); }
	jni::ref<android::net::sip::SipProfile_Builder> setDisplayName(jni::ref<java::lang::String> displayName) { return call_method<"setDisplayName", jni::ref<android::net::sip::SipProfile_Builder>>(displayName); }
	jni::ref<android::net::sip::SipProfile_Builder> setSendKeepAlive(jboolean flag) { return call_method<"setSendKeepAlive", jni::ref<android::net::sip::SipProfile_Builder>>(flag); }
	jni::ref<android::net::sip::SipProfile_Builder> setAutoRegistration(jboolean flag) { return call_method<"setAutoRegistration", jni::ref<android::net::sip::SipProfile_Builder>>(flag); }
	jni::ref<android::net::sip::SipProfile> build() { return call_method<"build", jni::ref<android::net::sip::SipProfile>>(); }

protected:

	SipProfile_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPPROFILE_BUILDER
