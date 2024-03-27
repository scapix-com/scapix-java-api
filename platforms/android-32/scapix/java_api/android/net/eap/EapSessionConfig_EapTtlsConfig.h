// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/eap/EapSessionConfig_EapMethodConfig.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPTTLSCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPTTLSCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::eap { class EapSessionConfig_EapTtlsConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::eap::EapSessionConfig_EapTtlsConfig>
{
	static constexpr fixed_string class_name = "android/net/eap/EapSessionConfig$EapTtlsConfig";
	using base_classes = std::tuple<scapix::java_api::android::net::eap::EapSessionConfig_EapMethodConfig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPTTLSCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPTTLSCONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPTTLSCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/eap/EapSessionConfig.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::eap::EapSessionConfig_EapTtlsConfig : public jni::object_base<"android/net/eap/EapSessionConfig$EapTtlsConfig",
	android::net::eap::EapSessionConfig_EapMethodConfig>
{
public:

	jni::ref<java::security::cert::X509Certificate> getServerCaCert() { return call_method<"getServerCaCert", jni::ref<java::security::cert::X509Certificate>>(); }
	jni::ref<android::net::eap::EapSessionConfig> getInnerEapSessionConfig() { return call_method<"getInnerEapSessionConfig", jni::ref<android::net::eap::EapSessionConfig>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	EapSessionConfig_EapTtlsConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPTTLSCONFIG
