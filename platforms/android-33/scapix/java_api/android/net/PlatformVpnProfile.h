// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_PLATFORMVPNPROFILE_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_PLATFORMVPNPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class PlatformVpnProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::PlatformVpnProfile>
{
	static constexpr fixed_string class_name = "android/net/PlatformVpnProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_PLATFORMVPNPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_PLATFORMVPNPROFILE)
#define SCAPIX_JAVA_API_ANDROID_NET_PLATFORMVPNPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::PlatformVpnProfile : public jni::object_base<"android/net/PlatformVpnProfile",
	java::lang::Object>
{
public:

	static jint TYPE_IKEV2_IPSEC_PSK() { return get_static_field<"TYPE_IKEV2_IPSEC_PSK", jint>(); }
	static jint TYPE_IKEV2_IPSEC_RSA() { return get_static_field<"TYPE_IKEV2_IPSEC_RSA", jint>(); }
	static jint TYPE_IKEV2_IPSEC_USER_PASS() { return get_static_field<"TYPE_IKEV2_IPSEC_USER_PASS", jint>(); }

	jint getType() { return call_method<"getType", jint>(); }
	jboolean areLocalRoutesExcluded() { return call_method<"areLocalRoutesExcluded", jboolean>(); }
	jboolean isInternetValidationRequired() { return call_method<"isInternetValidationRequired", jboolean>(); }
	jni::ref<java::lang::String> getTypeString() { return call_method<"getTypeString", jni::ref<java::lang::String>>(); }

protected:

	PlatformVpnProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_PLATFORMVPNPROFILE
