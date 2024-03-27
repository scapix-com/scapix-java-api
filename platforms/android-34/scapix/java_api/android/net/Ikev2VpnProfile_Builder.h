// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class Ikev2VpnProfile_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::Ikev2VpnProfile_Builder>
{
	static constexpr fixed_string class_name = "android/net/Ikev2VpnProfile$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Ikev2VpnProfile.h>
#include <scapix/java_api/android/net/ProxyInfo.h>
#include <scapix/java_api/android/net/ipsec/ike/IkeTunnelConnectionParams.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::Ikev2VpnProfile_Builder : public jni::object_base<"android/net/Ikev2VpnProfile$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::Ikev2VpnProfile_Builder> new_object(jni::ref<java::lang::String> serverAddr, jni::ref<java::lang::String> identity) { return base_::new_object(serverAddr, identity); }
	static jni::ref<android::net::Ikev2VpnProfile_Builder> new_object(jni::ref<android::net::ipsec::ike::IkeTunnelConnectionParams> ikeTunConnParams) { return base_::new_object(ikeTunConnParams); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setAuthUsernamePassword(jni::ref<java::lang::String> user, jni::ref<java::lang::String> pass, jni::ref<java::security::cert::X509Certificate> serverRootCa) { return call_method<"setAuthUsernamePassword", jni::ref<android::net::Ikev2VpnProfile_Builder>>(user, pass, serverRootCa); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setAuthDigitalSignature(jni::ref<java::security::cert::X509Certificate> userCert, jni::ref<java::security::PrivateKey> key, jni::ref<java::security::cert::X509Certificate> serverRootCa) { return call_method<"setAuthDigitalSignature", jni::ref<android::net::Ikev2VpnProfile_Builder>>(userCert, key, serverRootCa); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setAuthPsk(jni::ref<jni::array<jbyte>> psk) { return call_method<"setAuthPsk", jni::ref<android::net::Ikev2VpnProfile_Builder>>(psk); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setBypassable(jboolean isBypassable) { return call_method<"setBypassable", jni::ref<android::net::Ikev2VpnProfile_Builder>>(isBypassable); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setProxy(jni::ref<android::net::ProxyInfo> proxy) { return call_method<"setProxy", jni::ref<android::net::Ikev2VpnProfile_Builder>>(proxy); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setMaxMtu(jint mtu) { return call_method<"setMaxMtu", jni::ref<android::net::Ikev2VpnProfile_Builder>>(mtu); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setRequiresInternetValidation(jboolean requiresInternetValidation) { return call_method<"setRequiresInternetValidation", jni::ref<android::net::Ikev2VpnProfile_Builder>>(requiresInternetValidation); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setMetered(jboolean isMetered) { return call_method<"setMetered", jni::ref<android::net::Ikev2VpnProfile_Builder>>(isMetered); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setAllowedAlgorithms(jni::ref<java::util::List> algorithmNames) { return call_method<"setAllowedAlgorithms", jni::ref<android::net::Ikev2VpnProfile_Builder>>(algorithmNames); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setAutomaticNattKeepaliveTimerEnabled(jboolean isEnabled) { return call_method<"setAutomaticNattKeepaliveTimerEnabled", jni::ref<android::net::Ikev2VpnProfile_Builder>>(isEnabled); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setAutomaticIpVersionSelectionEnabled(jboolean isEnabled) { return call_method<"setAutomaticIpVersionSelectionEnabled", jni::ref<android::net::Ikev2VpnProfile_Builder>>(isEnabled); }
	jni::ref<android::net::Ikev2VpnProfile_Builder> setLocalRoutesExcluded(jboolean excludeLocalRoutes) { return call_method<"setLocalRoutesExcluded", jni::ref<android::net::Ikev2VpnProfile_Builder>>(excludeLocalRoutes); }
	jni::ref<android::net::Ikev2VpnProfile> build() { return call_method<"build", jni::ref<android::net::Ikev2VpnProfile>>(); }

protected:

	Ikev2VpnProfile_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_BUILDER
