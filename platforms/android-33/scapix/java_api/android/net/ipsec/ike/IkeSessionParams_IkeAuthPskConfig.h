// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/ipsec/ike/IkeSessionParams_IkeAuthConfig.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHPSKCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHPSKCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike { class IkeSessionParams_IkeAuthPskConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::IkeSessionParams_IkeAuthPskConfig>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/IkeSessionParams$IkeAuthPskConfig";
	using base_classes = std::tuple<scapix::java_api::android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHPSKCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHPSKCONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHPSKCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::IkeSessionParams_IkeAuthPskConfig : public jni::object_base<"android/net/ipsec/ike/IkeSessionParams$IkeAuthPskConfig",
	android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig>
{
public:

	jni::ref<jni::array<jbyte>> getPsk() { return call_method<"getPsk", jni::ref<jni::array<jbyte>>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	IkeSessionParams_IkeAuthPskConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKESESSIONPARAMS_IKEAUTHPSKCONFIG
