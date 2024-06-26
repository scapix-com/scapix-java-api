// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/ipsec/ike/IkeSessionParams_IkeAuthConfig.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHDIGITALSIGNREMOTECONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHDIGITALSIGNREMOTECONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike { class IkeSessionParams_IkeAuthDigitalSignRemoteConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::IkeSessionParams_IkeAuthDigitalSignRemoteConfig>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/IkeSessionParams$IkeAuthDigitalSignRemoteConfig";
	using base_classes = std::tuple<scapix::java_api::android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHDIGITALSIGNREMOTECONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHDIGITALSIGNREMOTECONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHDIGITALSIGNREMOTECONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::IkeSessionParams_IkeAuthDigitalSignRemoteConfig : public jni::object_base<"android/net/ipsec/ike/IkeSessionParams$IkeAuthDigitalSignRemoteConfig",
	android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig>
{
public:

	jni::ref<java::security::cert::X509Certificate> getRemoteCaCert() { return call_method<"getRemoteCaCert", jni::ref<java::security::cert::X509Certificate>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	IkeSessionParams_IkeAuthDigitalSignRemoteConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHDIGITALSIGNREMOTECONFIG
