// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiEnterpriseConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiEnterpriseConfig>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiEnterpriseConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/android/net/wifi/WifiEnterpriseConfig_Phase2.h>
#include <scapix/java_api/android/net/wifi/WifiEnterpriseConfig_Eap.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiEnterpriseConfig : public jni::object_base<"android/net/wifi/WifiEnterpriseConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Phase2 = WifiEnterpriseConfig_Phase2;
	using Eap = WifiEnterpriseConfig_Eap;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> EXTRA_WAPI_AS_CERTIFICATE_DATA() { return get_static_field<"EXTRA_WAPI_AS_CERTIFICATE_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WAPI_AS_CERTIFICATE_NAME() { return get_static_field<"EXTRA_WAPI_AS_CERTIFICATE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WAPI_USER_CERTIFICATE_DATA() { return get_static_field<"EXTRA_WAPI_USER_CERTIFICATE_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WAPI_USER_CERTIFICATE_NAME() { return get_static_field<"EXTRA_WAPI_USER_CERTIFICATE_NAME", jni::ref<java::lang::String>>(); }
	static jint TLS_V1_0() { return get_static_field<"TLS_V1_0", jint>(); }
	static jint TLS_V1_1() { return get_static_field<"TLS_V1_1", jint>(); }
	static jint TLS_V1_2() { return get_static_field<"TLS_V1_2", jint>(); }
	static jint TLS_V1_3() { return get_static_field<"TLS_V1_3", jint>(); }
	static jni::ref<java::lang::String> WAPI_AS_CERTIFICATE() { return get_static_field<"WAPI_AS_CERTIFICATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WAPI_USER_CERTIFICATE() { return get_static_field<"WAPI_USER_CERTIFICATE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::net::wifi::WifiEnterpriseConfig> new_object() { return base_::new_object(); }
	static jni::ref<android::net::wifi::WifiEnterpriseConfig> new_object(jni::ref<android::net::wifi::WifiEnterpriseConfig> source) { return base_::new_object(source); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	void setEapMethod(jint eapMethod) { return call_method<"setEapMethod", void>(eapMethod); }
	jint getEapMethod() { return call_method<"getEapMethod", jint>(); }
	void setPhase2Method(jint phase2Method) { return call_method<"setPhase2Method", void>(phase2Method); }
	jint getPhase2Method() { return call_method<"getPhase2Method", jint>(); }
	void setIdentity(jni::ref<java::lang::String> identity) { return call_method<"setIdentity", void>(identity); }
	jni::ref<java::lang::String> getIdentity() { return call_method<"getIdentity", jni::ref<java::lang::String>>(); }
	void setAnonymousIdentity(jni::ref<java::lang::String> anonymousIdentity) { return call_method<"setAnonymousIdentity", void>(anonymousIdentity); }
	jni::ref<java::lang::String> getAnonymousIdentity() { return call_method<"getAnonymousIdentity", jni::ref<java::lang::String>>(); }
	void setPassword(jni::ref<java::lang::String> password) { return call_method<"setPassword", void>(password); }
	jni::ref<java::lang::String> getPassword() { return call_method<"getPassword", jni::ref<java::lang::String>>(); }
	jboolean hasCaCertificate() { return call_method<"hasCaCertificate", jboolean>(); }
	void setCaCertificate(jni::ref<java::security::cert::X509Certificate> cert) { return call_method<"setCaCertificate", void>(cert); }
	jni::ref<java::security::cert::X509Certificate> getCaCertificate() { return call_method<"getCaCertificate", jni::ref<java::security::cert::X509Certificate>>(); }
	void setCaCertificates(jni::ref<jni::array<java::security::cert::X509Certificate>> certs) { return call_method<"setCaCertificates", void>(certs); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> getCaCertificates() { return call_method<"getCaCertificates", jni::ref<jni::array<java::security::cert::X509Certificate>>>(); }
	void setClientKeyEntry(jni::ref<java::security::PrivateKey> privateKey, jni::ref<java::security::cert::X509Certificate> clientCertificate) { return call_method<"setClientKeyEntry", void>(privateKey, clientCertificate); }
	void setClientKeyEntryWithCertificateChain(jni::ref<java::security::PrivateKey> privateKey, jni::ref<jni::array<java::security::cert::X509Certificate>> clientCertificateChain) { return call_method<"setClientKeyEntryWithCertificateChain", void>(privateKey, clientCertificateChain); }
	void setClientKeyPairAlias(jni::ref<java::lang::String> alias) { return call_method<"setClientKeyPairAlias", void>(alias); }
	jni::ref<java::lang::String> getClientKeyPairAlias() { return call_method<"getClientKeyPairAlias", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::cert::X509Certificate> getClientCertificate() { return call_method<"getClientCertificate", jni::ref<java::security::cert::X509Certificate>>(); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> getClientCertificateChain() { return call_method<"getClientCertificateChain", jni::ref<jni::array<java::security::cert::X509Certificate>>>(); }
	jni::ref<java::security::PrivateKey> getClientPrivateKey() { return call_method<"getClientPrivateKey", jni::ref<java::security::PrivateKey>>(); }
	void setSubjectMatch(jni::ref<java::lang::String> subjectMatch) { return call_method<"setSubjectMatch", void>(subjectMatch); }
	jni::ref<java::lang::String> getSubjectMatch() { return call_method<"getSubjectMatch", jni::ref<java::lang::String>>(); }
	void setAltSubjectMatch(jni::ref<java::lang::String> altSubjectMatch) { return call_method<"setAltSubjectMatch", void>(altSubjectMatch); }
	jni::ref<java::lang::String> getAltSubjectMatch() { return call_method<"getAltSubjectMatch", jni::ref<java::lang::String>>(); }
	void setDomainSuffixMatch(jni::ref<java::lang::String> domain) { return call_method<"setDomainSuffixMatch", void>(domain); }
	jni::ref<java::lang::String> getDomainSuffixMatch() { return call_method<"getDomainSuffixMatch", jni::ref<java::lang::String>>(); }
	void setRealm(jni::ref<java::lang::String> realm) { return call_method<"setRealm", void>(realm); }
	jni::ref<java::lang::String> getRealm() { return call_method<"getRealm", jni::ref<java::lang::String>>(); }
	void setPlmn(jni::ref<java::lang::String> plmn) { return call_method<"setPlmn", void>(plmn); }
	jni::ref<java::lang::String> getPlmn() { return call_method<"getPlmn", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isAuthenticationSimBased() { return call_method<"isAuthenticationSimBased", jboolean>(); }
	jboolean isEapMethodServerCertUsed() { return call_method<"isEapMethodServerCertUsed", jboolean>(); }
	jboolean isServerCertValidationEnabled() { return call_method<"isServerCertValidationEnabled", jboolean>(); }
	void setDecoratedIdentityPrefix(jni::ref<java::lang::String> decoratedIdentityPrefix) { return call_method<"setDecoratedIdentityPrefix", void>(decoratedIdentityPrefix); }
	jni::ref<java::lang::String> getDecoratedIdentityPrefix() { return call_method<"getDecoratedIdentityPrefix", jni::ref<java::lang::String>>(); }
	void enableTrustOnFirstUse(jboolean enable) { return call_method<"enableTrustOnFirstUse", void>(enable); }
	jboolean isTrustOnFirstUseEnabled() { return call_method<"isTrustOnFirstUseEnabled", jboolean>(); }
	void setMinimumTlsVersion(jint tlsVersion) { return call_method<"setMinimumTlsVersion", void>(tlsVersion); }
	jint getMinimumTlsVersion() { return call_method<"getMinimumTlsVersion", jint>(); }

protected:

	WifiEnterpriseConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG
