// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/PlatformVpnProfile.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class Ikev2VpnProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::Ikev2VpnProfile>
{
	static constexpr fixed_string class_name = "android/net/Ikev2VpnProfile";
	using base_classes = std::tuple<scapix::java_api::android::net::PlatformVpnProfile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE)
#define SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/ProxyInfo.h>
#include <scapix/java_api/android/net/ipsec/ike/IkeTunnelConnectionParams.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/net/Ikev2VpnProfile_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::Ikev2VpnProfile : public jni::object_base<"android/net/Ikev2VpnProfile",
	android::net::PlatformVpnProfile>
{
public:

	using Builder = Ikev2VpnProfile_Builder;

	jni::ref<java::lang::String> getServerAddr() { return call_method<"getServerAddr", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUserIdentity() { return call_method<"getUserIdentity", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getPresharedKey() { return call_method<"getPresharedKey", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::security::cert::X509Certificate> getServerRootCaCert() { return call_method<"getServerRootCaCert", jni::ref<java::security::cert::X509Certificate>>(); }
	jni::ref<java::lang::String> getUsername() { return call_method<"getUsername", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPassword() { return call_method<"getPassword", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::PrivateKey> getRsaPrivateKey() { return call_method<"getRsaPrivateKey", jni::ref<java::security::PrivateKey>>(); }
	jni::ref<java::security::cert::X509Certificate> getUserCert() { return call_method<"getUserCert", jni::ref<java::security::cert::X509Certificate>>(); }
	jni::ref<android::net::ProxyInfo> getProxyInfo() { return call_method<"getProxyInfo", jni::ref<android::net::ProxyInfo>>(); }
	jni::ref<java::util::List> getAllowedAlgorithms() { return call_method<"getAllowedAlgorithms", jni::ref<java::util::List>>(); }
	jboolean isBypassable() { return call_method<"isBypassable", jboolean>(); }
	jboolean isMetered() { return call_method<"isMetered", jboolean>(); }
	jint getMaxMtu() { return call_method<"getMaxMtu", jint>(); }
	jni::ref<android::net::ipsec::ike::IkeTunnelConnectionParams> getIkeTunnelConnectionParams() { return call_method<"getIkeTunnelConnectionParams", jni::ref<android::net::ipsec::ike::IkeTunnelConnectionParams>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }

protected:

	Ikev2VpnProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IKEV2VPNPROFILE
